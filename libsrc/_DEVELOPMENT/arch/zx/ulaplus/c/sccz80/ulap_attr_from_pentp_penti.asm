; unsigned char ulap_attr_from_pentp_penti(unsigned char pentp,unsigned char penti)

SECTION code_clib
SECTION code_arch

PUBLIC ulap_attr_from_pentp_penti

EXTERN asm_ulap_attr_from_pentp_penti

ulap_attr_from_pentp_penti:

   pop af
   pop de
   pop hl
   
   push hl
   push de
   push af
   
   ld h,e
   jp asm_ulap_attr_from_pentp_penti
