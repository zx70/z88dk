;
;	Enterprise 64/128 specific routines
;	by Stefano Bodrato, 2011
;
;	exos_open_channel(unsigned char ch_number, char *device);
;
;
;	$Id: exos_open_channel_callee.asm,v 1.5 2016-06-19 20:17:32 dom Exp $
;

        SECTION code_clib
PUBLIC	exos_open_channel_callee
PUBLIC	_exos_open_channel_callee
PUBLIC 	asm_exos_open_channel

exos_open_channel_callee:
_exos_open_channel_callee:

	pop hl
	pop de
	ex (sp),hl

; enter : de = char *device
;         l = channel number

.asm_exos_open_channel

	ld	a,l		; channel
	rst   30h
	defb  1
	ld	h,0
	ld	l,a
	ret
 
