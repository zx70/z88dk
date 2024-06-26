
; long long llabs(long long i)

SECTION code_clib
SECTION code_stdlib

PUBLIC llabs_callee

EXTERN l_neg_64_dehldehl, l_store_64_dehldehl_mbc

llabs_callee:

   pop af                      ; af = return address
   
   pop bc                      ; bc = result *

   pop hl
   pop de
   
   exx
   
   pop hl
   pop de
   
   push af                     ; return address
   
   bit 7,d
   exx                         ; dehl'dehl = long long i

   jp z, l_store_64_dehldehl_mbc  ; if positive store i
   
   call l_neg_64_dehldehl      ; negate
   jp l_store_64_dehldehl_mbc  ; store i

; SDCC bridge for Classic
IF __CLASSIC
PUBLIC _llabs_callee
defc _llabs_callee = llabs_callee
ENDIF
