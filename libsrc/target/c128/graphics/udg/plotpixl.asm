;
;       C128 pseudo graphics routines
;	Version for the 2x3 graphics symbols (UDG redefined)
;
;
;       Written by Stefano Bodrato 2020
;
;
;       Plot pixel at (x,y) coordinate.
;
;
;	$Id: plotpixl.asm $
;


    INCLUDE "graphics/grafix.inc"

    SECTION code_clib
    PUBLIC  plotpixel

    EXTERN  div3_0
    EXTERN  __gfx_coords
    EXTERN  base_graphics

plotpixel:
    ld      a, h
    cp      maxx
    ret     nc
    ld      a, l
    cp      maxy
    ret     nc                          ; y0	out of range

    dec     a

    ld      (__gfx_coords), hl

    push    bc

    ld      c, a                        ; y
    ld      b, h                        ; x

    push    bc

    ld      hl, div3_0
    ld      d, 0
    ld      e, c
    inc     e
    add     hl, de
    ld      a, (hl)
;			ld	c,a	; y/3

    srl     b                           ; x/2

;			ld	a,c
    ld      c, b                        ; !!

;--- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---

    ld      hl, (base_graphics)

    ld      b, a                        ; keep y/3
    and     a

    ld      de, maxx/2
			;dec	a
    jr      z, r_zero
r_loop:
    add     hl, de
    dec     a
    jr      nz, r_loop

r_zero:                                 ;ld	d,0
    ld      e, c
    add     hl, de

;--- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- --- ---

    ld      a, (hl)                     ; get current symbol from screen
    ld      e, a                        ; ..and its copy

    ex      (sp), hl                    ; save char address <=> restore x,y  (y=h, x=l)

    ld      a, l
    inc     a
    inc     a
    sub     b
    sub     b
    sub     b                           ; we get the remainder of y/3

    ld      l, a
    ld      a, 1                        ; the pixel we want to draw

    jr      z, iszero
    bit     0, l
    jr      nz, is1
    add     a, a
    add     a, a
is1:
    add     a, a
    add     a, a
iszero:

    bit     0, h
    jr      nz, evenrow
    add     a, a                        ; move down the bit
evenrow:
    or      e

    pop     hl
    ld      (hl), a

    pop     bc
    ret
