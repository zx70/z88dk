;--------------------------------------------------------
; File Created by SDCC : free open source ISO C Compiler
; Version 4.5.0 #15248 (Linux)
;--------------------------------------------------------
; Processed by Z88DK
;--------------------------------------------------------
	
	EXTERN __divschar
	EXTERN __divschar_callee
	EXTERN __divsint
	EXTERN __divsint_callee
	EXTERN __divslong
	EXTERN __divslong_callee
	EXTERN __divslonglong
	EXTERN __divslonglong_callee
	EXTERN __divsuchar
	EXTERN __divsuchar_callee
	EXTERN __divuchar
	EXTERN __divuchar_callee
	EXTERN __divuint
	EXTERN __divuint_callee
	EXTERN __divulong
	EXTERN __divulong_callee
	EXTERN __divulonglong
	EXTERN __divulonglong_callee
	EXTERN __divuschar
	EXTERN __divuschar_callee
	EXTERN __modschar
	EXTERN __modschar_callee
	EXTERN __modsint
	EXTERN __modsint_callee
	EXTERN __modslong
	EXTERN __modslong_callee
	EXTERN __modslonglong
	EXTERN __modslonglong_callee
	EXTERN __modsuchar
	EXTERN __modsuchar_callee
	EXTERN __moduchar
	EXTERN __moduchar_callee
	EXTERN __moduint
	EXTERN __moduint_callee
	EXTERN __modulong
	EXTERN __modulong_callee
	EXTERN __modulonglong
	EXTERN __modulonglong_callee
	EXTERN __moduschar
	EXTERN __moduschar_callee
	EXTERN __mulint
	EXTERN __mulint_callee
	EXTERN __mullong
	EXTERN __mullong_callee
	EXTERN __mullonglong
	EXTERN __mullonglong_callee
	EXTERN __mulschar
	EXTERN __mulschar_callee
	EXTERN __mulsuchar
	EXTERN __mulsuchar_callee
	EXTERN __muluchar
	EXTERN __muluchar_callee
	EXTERN __muluschar
	EXTERN __muluschar_callee
	EXTERN __rlslonglong
	EXTERN __rlslonglong_callee
	EXTERN __rlulonglong
	EXTERN __rlulonglong_callee
	EXTERN __rrslonglong
	EXTERN __rrslonglong_callee
	EXTERN __rrulonglong
	EXTERN __rrulonglong_callee
	EXTERN ___mulsint2slong
	EXTERN ___mulsint2slong_callee
	EXTERN ___muluint2ulong
	EXTERN ___muluint2ulong_callee
	EXTERN ___sdcc_call_hl
	EXTERN ___sdcc_call_iy
	EXTERN ___sdcc_enter_ix
	EXTERN banked_call
	EXTERN _banked_ret
	EXTERN ___fs2schar
	EXTERN ___fs2schar_callee
	EXTERN ___fs2sint
	EXTERN ___fs2sint_callee
	EXTERN ___fs2slong
	EXTERN ___fs2slong_callee
	EXTERN ___fs2slonglong
	EXTERN ___fs2slonglong_callee
	EXTERN ___fs2uchar
	EXTERN ___fs2uchar_callee
	EXTERN ___fs2uint
	EXTERN ___fs2uint_callee
	EXTERN ___fs2ulong
	EXTERN ___fs2ulong_callee
	EXTERN ___fs2ulonglong
	EXTERN ___fs2ulonglong_callee
	EXTERN ___fsadd
	EXTERN ___fsadd_callee
	EXTERN ___fsdiv
	EXTERN ___fsdiv_callee
	EXTERN ___fseq
	EXTERN ___fseq_callee
	EXTERN ___fsgt
	EXTERN ___fsgt_callee
	EXTERN ___fslt
	EXTERN ___fslt_callee
	EXTERN ___fsmul
	EXTERN ___fsmul_callee
	EXTERN ___fsneq
	EXTERN ___fsneq_callee
	EXTERN ___fssub
	EXTERN ___fssub_callee
	EXTERN ___schar2fs
	EXTERN ___schar2fs_callee
	EXTERN ___sint2fs
	EXTERN ___sint2fs_callee
	EXTERN ___slong2fs
	EXTERN ___slong2fs_callee
	EXTERN ___slonglong2fs
	EXTERN ___slonglong2fs_callee
	EXTERN ___uchar2fs
	EXTERN ___uchar2fs_callee
	EXTERN ___uint2fs
	EXTERN ___uint2fs_callee
	EXTERN ___ulong2fs
	EXTERN ___ulong2fs_callee
	EXTERN ___ulonglong2fs
	EXTERN ___ulonglong2fs_callee
	EXTERN ____sdcc_2_copy_src_mhl_dst_deix
	EXTERN ____sdcc_2_copy_src_mhl_dst_bcix
	EXTERN ____sdcc_4_copy_src_mhl_dst_deix
	EXTERN ____sdcc_4_copy_src_mhl_dst_bcix
	EXTERN ____sdcc_4_copy_src_mhl_dst_mbc
	EXTERN ____sdcc_4_ldi_nosave_bc
	EXTERN ____sdcc_4_ldi_save_bc
	EXTERN ____sdcc_4_push_hlix
	EXTERN ____sdcc_4_push_mhl
	EXTERN ____sdcc_lib_setmem_hl
	EXTERN ____sdcc_ll_add_de_bc_hl
	EXTERN ____sdcc_ll_add_de_bc_hlix
	EXTERN ____sdcc_ll_add_de_hlix_bc
	EXTERN ____sdcc_ll_add_de_hlix_bcix
	EXTERN ____sdcc_ll_add_deix_bc_hl
	EXTERN ____sdcc_ll_add_deix_hlix
	EXTERN ____sdcc_ll_add_hlix_bc_deix
	EXTERN ____sdcc_ll_add_hlix_deix_bc
	EXTERN ____sdcc_ll_add_hlix_deix_bcix
	EXTERN ____sdcc_ll_asr_hlix_a
	EXTERN ____sdcc_ll_asr_mbc_a
	EXTERN ____sdcc_ll_copy_src_de_dst_hlix
	EXTERN ____sdcc_ll_copy_src_de_dst_hlsp
	EXTERN ____sdcc_ll_copy_src_deix_dst_hl
	EXTERN ____sdcc_ll_copy_src_deix_dst_hlix
	EXTERN ____sdcc_ll_copy_src_deixm_dst_hlsp
	EXTERN ____sdcc_ll_copy_src_desp_dst_hlsp
	EXTERN ____sdcc_ll_copy_src_hl_dst_de
	EXTERN ____sdcc_ll_copy_src_hlsp_dst_de
	EXTERN ____sdcc_ll_copy_src_hlsp_dst_deixm
	EXTERN ____sdcc_ll_lsl_hlix_a
	EXTERN ____sdcc_ll_lsl_mbc_a
	EXTERN ____sdcc_ll_lsr_hlix_a
	EXTERN ____sdcc_ll_lsr_mbc_a
	EXTERN ____sdcc_ll_push_hlix
	EXTERN ____sdcc_ll_push_mhl
	EXTERN ____sdcc_ll_sub_de_bc_hl
	EXTERN ____sdcc_ll_sub_de_bc_hlix
	EXTERN ____sdcc_ll_sub_de_hlix_bc
	EXTERN ____sdcc_ll_sub_de_hlix_bcix
	EXTERN ____sdcc_ll_sub_deix_bc_hl
	EXTERN ____sdcc_ll_sub_deix_hlix
	EXTERN ____sdcc_ll_sub_hlix_bc_deix
	EXTERN ____sdcc_ll_sub_hlix_deix_bc
	EXTERN ____sdcc_ll_sub_hlix_deix_bcix
	EXTERN ____sdcc_load_debc_deix
	EXTERN ____sdcc_load_dehl_deix
	EXTERN ____sdcc_load_debc_mhl
	EXTERN ____sdcc_load_hlde_mhl
	EXTERN ____sdcc_store_dehl_bcix
	EXTERN ____sdcc_store_debc_hlix
	EXTERN ____sdcc_store_debc_mhl
	EXTERN ____sdcc_cpu_pop_ei
	EXTERN ____sdcc_cpu_pop_ei_jp
	EXTERN ____sdcc_cpu_push_di
	EXTERN ____sdcc_outi
	EXTERN ____sdcc_outi_128
	EXTERN ____sdcc_outi_256
	EXTERN ____sdcc_ldi
	EXTERN ____sdcc_ldi_128
	EXTERN ____sdcc_ldi_256
	EXTERN ____sdcc_4_copy_srcd_hlix_dst_deix
	EXTERN ____sdcc_4_and_src_mbc_mhl_dst_deix
	EXTERN ____sdcc_4_or_src_mbc_mhl_dst_deix
	EXTERN ____sdcc_4_xor_src_mbc_mhl_dst_deix
	EXTERN ____sdcc_4_or_src_dehl_dst_bcix
	EXTERN ____sdcc_4_xor_src_dehl_dst_bcix
	EXTERN ____sdcc_4_and_src_dehl_dst_bcix
	EXTERN ____sdcc_4_xor_src_mbc_mhl_dst_debc
	EXTERN ____sdcc_4_or_src_mbc_mhl_dst_debc
	EXTERN ____sdcc_4_and_src_mbc_mhl_dst_debc
	EXTERN ____sdcc_4_cpl_src_mhl_dst_debc
	EXTERN ____sdcc_4_xor_src_debc_mhl_dst_debc
	EXTERN ____sdcc_4_or_src_debc_mhl_dst_debc
	EXTERN ____sdcc_4_and_src_debc_mhl_dst_debc
	EXTERN ____sdcc_4_and_src_debc_hlix_dst_debc
	EXTERN ____sdcc_4_or_src_debc_hlix_dst_debc
	EXTERN ____sdcc_4_xor_src_debc_hlix_dst_debc

;--------------------------------------------------------
; Public variables in this module
;--------------------------------------------------------
	GLOBAL _m32_modff
;--------------------------------------------------------
; Externals used
;--------------------------------------------------------
	GLOBAL _m32_polyf
	GLOBAL _m32_hypotf
	GLOBAL _m32_ldexpf
	GLOBAL _m32_frexpf
	GLOBAL _m32_invsqrtf
	GLOBAL _m32_sqrtf
	GLOBAL _m32_invf
	GLOBAL _m32_sqrf
	GLOBAL _m32_div2f
	GLOBAL _m32_mul2f
	GLOBAL _m32_fmodf
	GLOBAL _m32_roundf
	GLOBAL _m32_floorf
	GLOBAL _m32_fabsf
	GLOBAL _m32_ceilf
	GLOBAL _m32_powf
	GLOBAL _m32_log10f
	GLOBAL _m32_log2f
	GLOBAL _m32_logf
	GLOBAL _m32_exp10f
	GLOBAL _m32_exp2f
	GLOBAL _m32_expf
	GLOBAL _m32_atanhf
	GLOBAL _m32_acoshf
	GLOBAL _m32_asinhf
	GLOBAL _m32_tanhf
	GLOBAL _m32_coshf
	GLOBAL _m32_sinhf
	GLOBAL _m32_atan2f
	GLOBAL _m32_atanf
	GLOBAL _m32_acosf
	GLOBAL _m32_asinf
	GLOBAL _m32_tanf
	GLOBAL _m32_cosf
	GLOBAL _m32_sinf
	GLOBAL _poly_callee
	GLOBAL _poly
	GLOBAL _exp10_fastcall
	GLOBAL _exp10
	GLOBAL _mul10u_fastcall
	GLOBAL _mul10u
	GLOBAL _mul2_fastcall
	GLOBAL _mul2
	GLOBAL _div2_fastcall
	GLOBAL _div2
	GLOBAL _invsqrt_fastcall
	GLOBAL _invsqrt
	GLOBAL _inv_fastcall
	GLOBAL _inv
	GLOBAL _sqr_fastcall
	GLOBAL _sqr
	GLOBAL _neg_fastcall
	GLOBAL _neg
	GLOBAL _isunordered_callee
	GLOBAL _isunordered
	GLOBAL _islessgreater_callee
	GLOBAL _islessgreater
	GLOBAL _islessequal_callee
	GLOBAL _islessequal
	GLOBAL _isless_callee
	GLOBAL _isless
	GLOBAL _isgreaterequal_callee
	GLOBAL _isgreaterequal
	GLOBAL _isgreater_callee
	GLOBAL _isgreater
	GLOBAL _fma_callee
	GLOBAL _fma
	GLOBAL _fmin_callee
	GLOBAL _fmin
	GLOBAL _fmax_callee
	GLOBAL _fmax
	GLOBAL _fdim_callee
	GLOBAL _fdim
	GLOBAL _nexttoward_callee
	GLOBAL _nexttoward
	GLOBAL _nextafter_callee
	GLOBAL _nextafter
	GLOBAL _nan_fastcall
	GLOBAL _nan
	GLOBAL _copysign_callee
	GLOBAL _copysign
	GLOBAL _remquo_callee
	GLOBAL _remquo
	GLOBAL _remainder_callee
	GLOBAL _remainder
	GLOBAL _fmod_callee
	GLOBAL _fmod
	GLOBAL _modf_callee
	GLOBAL _modf
	GLOBAL _trunc_fastcall
	GLOBAL _trunc
	GLOBAL _lround_fastcall
	GLOBAL _lround
	GLOBAL _round_fastcall
	GLOBAL _round
	GLOBAL _lrint_fastcall
	GLOBAL _lrint
	GLOBAL _rint_fastcall
	GLOBAL _rint
	GLOBAL _nearbyint_fastcall
	GLOBAL _nearbyint
	GLOBAL _floor_fastcall
	GLOBAL _floor
	GLOBAL _ceil_fastcall
	GLOBAL _ceil
	GLOBAL _tgamma_fastcall
	GLOBAL _tgamma
	GLOBAL _lgamma_fastcall
	GLOBAL _lgamma
	GLOBAL _erfc_fastcall
	GLOBAL _erfc
	GLOBAL _erf_fastcall
	GLOBAL _erf
	GLOBAL _cbrt_fastcall
	GLOBAL _cbrt
	GLOBAL _sqrt_fastcall
	GLOBAL _sqrt
	GLOBAL _pow_callee
	GLOBAL _pow
	GLOBAL _hypot_callee
	GLOBAL _hypot
	GLOBAL _fabs_fastcall
	GLOBAL _fabs
	GLOBAL _logb_fastcall
	GLOBAL _logb
	GLOBAL _log2_fastcall
	GLOBAL _log2
	GLOBAL _log1p_fastcall
	GLOBAL _log1p
	GLOBAL _log10_fastcall
	GLOBAL _log10
	GLOBAL _log_fastcall
	GLOBAL _log
	GLOBAL _ilogb_fastcall
	GLOBAL _ilogb
	GLOBAL _scalbln_callee
	GLOBAL _scalbln
	GLOBAL _scalbn_callee
	GLOBAL _scalbn
	GLOBAL _ldexp_callee
	GLOBAL _ldexp
	GLOBAL _frexp_callee
	GLOBAL _frexp
	GLOBAL _expm1_fastcall
	GLOBAL _expm1
	GLOBAL _exp2_fastcall
	GLOBAL _exp2
	GLOBAL _exp_fastcall
	GLOBAL _exp
	GLOBAL _tanh_fastcall
	GLOBAL _tanh
	GLOBAL _sinh_fastcall
	GLOBAL _sinh
	GLOBAL _cosh_fastcall
	GLOBAL _cosh
	GLOBAL _atanh_fastcall
	GLOBAL _atanh
	GLOBAL _asinh_fastcall
	GLOBAL _asinh
	GLOBAL _acosh_fastcall
	GLOBAL _acosh
	GLOBAL _tan_fastcall
	GLOBAL _tan
	GLOBAL _sin_fastcall
	GLOBAL _sin
	GLOBAL _cos_fastcall
	GLOBAL _cos
	GLOBAL _atan2_callee
	GLOBAL _atan2
	GLOBAL _atan_fastcall
	GLOBAL _atan
	GLOBAL _asin_fastcall
	GLOBAL _asin
	GLOBAL _acos_fastcall
	GLOBAL _acos
;--------------------------------------------------------
; special function registers
;--------------------------------------------------------
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	SECTION bss_compiler
;--------------------------------------------------------
; ram data
;--------------------------------------------------------
	
IF 0
	
; .area _INITIALIZED removed by z88dk
	
	
ENDIF
	
;--------------------------------------------------------
; absolute external ram data
;--------------------------------------------------------
	SECTION IGNORE
;--------------------------------------------------------
; global & static initialisations
;--------------------------------------------------------
	SECTION code_crt_init
;--------------------------------------------------------
; Home
;--------------------------------------------------------
	SECTION code_home
;--------------------------------------------------------
; code
;--------------------------------------------------------
	SECTION code_compiler
;	---------------------------------
; Function m32_modff
; ---------------------------------
_m32_modff:
	push	ix
	ld	ix,0
	add	ix,sp
	ld	l,(ix+8)
	ld	h,(ix+9)
	push	hl
	ld	de,0x0000
	push	de
	push	de
	ld	e,(ix+6)
	ld	d,(ix+7)
	push	de
	ld	e,(ix+4)
	ld	d,(ix+5)
	push	de
	call	___fslt_callee
	ld	a, l
	pop	hl
	or	a, a
	jr	Z,l_m32_modff_00102
	push	hl
	ld	l,(ix+4)
	ld	h,(ix+5)
	ld	e,(ix+6)
	ld	d,(ix+7)
	call	_ceil_fastcall
	ld	c, l
	ld	b, h
	pop	hl
	ld	(hl), c
	inc	hl
	ld	(hl), b
	inc	hl
	ld	(hl), e
	inc	hl
	ld	(hl), d
	dec	hl
	dec	hl
	dec	hl
	jr	l_m32_modff_00103
l_m32_modff_00102:
	push	hl
	ld	l,(ix+4)
	ld	h,(ix+5)
	ld	e,(ix+6)
	ld	d,(ix+7)
	call	_floor_fastcall
	ld	c, l
	ld	b, h
	pop	hl
	ld	(hl), c
	inc	hl
	ld	(hl), b
	inc	hl
	ld	(hl), e
	inc	hl
	ld	(hl), d
	dec	hl
	dec	hl
	dec	hl
l_m32_modff_00103:
	ld	c, (hl)
	inc	hl
	ld	b, (hl)
	inc	hl
	ld	e, (hl)
	inc	hl
	ld	d, (hl)
	push	de
	push	bc
	ld	l,(ix+6)
	ld	h,(ix+7)
	push	hl
	ld	l,(ix+4)
	ld	h,(ix+5)
	push	hl
	call	___fssub_callee
	pop	ix
	ret
	SECTION IGNORE
