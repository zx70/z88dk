; void __CALLEE__ sp1_GetSprClr_callee(uchar **sprsrc, struct sp1_ap *dest, uchar n)

SECTION code_clib
SECTION code_temp_sp1

PUBLIC sp1_GetSprClr_callee

EXTERN asm_sp1_GetSprClr

sp1_GetSprClr_callee:

   pop hl
   pop bc
   ld b,c
   pop de
   ex (sp),hl

;   jp asm_sp1_GetSprClr
   push ix
   call asm_sp1_GetSprClr
   pop ix
   ret

; SDCC bridge for Classic
IF __CLASSIC
PUBLIC _sp1_GetSprClr_callee
defc _sp1_GetSprClr_callee = sp1_GetSprClr_callee
ENDIF

