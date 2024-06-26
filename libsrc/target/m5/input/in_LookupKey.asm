; uint in_LookupKey(uchar c)

    SECTION code_clib
    PUBLIC  in_LookupKey
    PUBLIC  _in_LookupKey
    EXTERN  in_keytranstbl

; Given the ascii code of a character, returns the scan row and mask
; corresponding to the key that needs to be pressed to generate the
; character.
;
; The scan row returned will have bit 7 set and bit 6 set to
; indicate if CAPS, SYM SHIFTS also have to be pressed to generate the
; ascii code, respectively.

; enter: L = ascii character code
; exit : L = scan row
;        H = mask
;        else: L = scan row, H = mask
;              bit 7 of L set if SHIFT needs to be pressed
;              bit 6 of L set if CTRL needs to be pressed
; uses : AF,BC,HL

; The 16-bit value returned is a scan code understood by
; in_KeyPressed.

in_LookupKey:
_in_LookupKey:
    ld      a, l
    ld      hl, in_keytranstbl
    ld      bc, 64*3
    cpir
    jr      nz, notfound

    ld      a, +(64*3)-1
    sub     c                           ;A = position in table
    ld      hl, 0
    cp      64*2
    jr      c, not_control
    set     6, l
    sub     64*2
    jr      gotit
not_control:
    cp      64
    jr      c, gotit
    set     7, l
    sub     64
    jr      gotit

notfound:
    ld      hl, 0
    scf
    ret


; Now we must divide by 8 to find out the row number
gotit:
    ld      c, a
    srl     c
    srl     c
    srl     c
	; a = Key number (0-7)
	; c = line number
	; l = Shift/control flags
    ld      h, @00000001
calc_mask:
    and     7
    jr      z, got_mask
    rl      h
    dec     a
    jr      calc_mask

got_mask:
	; h = mask
	; c = line number
	; l = flags
    ld      a, c
    cp      8
    jr      c, not_line_50
    add     $12
not_line_50:
    add     $30
    or      l                           ;add in flags
    ld      l, a
    ret


