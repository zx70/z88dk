



IFNDEF __CONFIG_Z88DK_INC_
defc   __CONFIG_Z88DK_INC_ = 1

; Automatically Generated at Library Build Time










PUBLIC __Z88DK




defc __Z88DK = 2300









PUBLIC __CPM




defc __CPM = 22









PUBLIC __Z80

PUBLIC __Z80_NMOS
PUBLIC __Z80_CMOS

PUBLIC __CPU_INFO

PUBLIC __CPU_INFO_ENABLE_SLL




defc __Z80 = 0x01

defc __Z80_NMOS = 0x01
defc __Z80_CMOS = 0x02

defc __CPU_CLOCK = 4000000

defc __CPU_INFO = 0x00

defc __CPU_INFO_ENABLE_SLL = 0x01









PUBLIC __CLIB_OPT_MULTITHREAD

PUBLIC __CLIB_OPT_MULTITHREAD_LOCK_HEAPS
PUBLIC __CLIB_OPT_MULTITHREAD_LOCK_FILES
PUBLIC __CLIB_OPT_MULTITHREAD_LOCK_FLIST
PUBLIC __CLIB_OPT_MULTITHREAD_LOCK_FDTBL
PUBLIC __CLIB_OPT_MULTITHREAD_LOCK_FDSTR

PUBLIC __CLIB_OPT_IMATH

PUBLIC __CLIB_OPT_IMATH_FAST

PUBLIC __CLIB_OPT_IMATH_FAST_DIV_UNROLL
PUBLIC __CLIB_OPT_IMATH_FAST_DIV_LZEROS
PUBLIC __CLIB_OPT_IMATH_FAST_MUL_UNROLL
PUBLIC __CLIB_OPT_IMATH_FAST_MUL_LZEROS
PUBLIC __CLIB_OPT_IMATH_FAST_LIA

PUBLIC __CLIB_OPT_IMATH_SELECT

PUBLIC __CLIB_OPT_IMATH_SELECT_FAST_ASR
PUBLIC __CLIB_OPT_IMATH_SELECT_FAST_LSR
PUBLIC __CLIB_OPT_IMATH_SELECT_FAST_LSL

PUBLIC __CLIB_OPT_TXT2NUM

PUBLIC __CLIB_OPT_TXT2NUM_INT_BIN
PUBLIC __CLIB_OPT_TXT2NUM_INT_OCT
PUBLIC __CLIB_OPT_TXT2NUM_INT_DEC
PUBLIC __CLIB_OPT_TXT2NUM_INT_HEX

PUBLIC __CLIB_OPT_TXT2NUM_LONG_BIN
PUBLIC __CLIB_OPT_TXT2NUM_LONG_OCT
PUBLIC __CLIB_OPT_TXT2NUM_LONG_DEC
PUBLIC __CLIB_OPT_TXT2NUM_LONG_HEX

PUBLIC __CLIB_OPT_TXT2NUM_SELECT

PUBLIC __CLIB_OPT_TXT2NUM_SELECT_FAST_BIN
PUBLIC __CLIB_OPT_TXT2NUM_SELECT_FAST_OCT
PUBLIC __CLIB_OPT_TXT2NUM_SELECT_FAST_DEC
PUBLIC __CLIB_OPT_TXT2NUM_SELECT_FAST_HEX

PUBLIC __CLIB_OPT_NUM2TXT

PUBLIC __CLIB_OPT_NUM2TXT_INT_BIN
PUBLIC __CLIB_OPT_NUM2TXT_INT_OCT
PUBLIC __CLIB_OPT_NUM2TXT_INT_DEC
PUBLIC __CLIB_OPT_NUM2TXT_INT_HEX

PUBLIC __CLIB_OPT_NUM2TXT_LONG_BIN
PUBLIC __CLIB_OPT_NUM2TXT_LONG_OCT
PUBLIC __CLIB_OPT_NUM2TXT_LONG_DEC
PUBLIC __CLIB_OPT_NUM2TXT_LONG_HEX

PUBLIC __CLIB_OPT_NUM2TXT_SELECT

PUBLIC __CLIB_OPT_NUM2TXT_SELECT_FAST_BIN
PUBLIC __CLIB_OPT_NUM2TXT_SELECT_FAST_OCT
PUBLIC __CLIB_OPT_NUM2TXT_SELECT_FAST_DEC
PUBLIC __CLIB_OPT_NUM2TXT_SELECT_FAST_HEX

PUBLIC __CLIB_OPT_STDIO

PUBLIC __CLIB_OPT_STDIO_VALID

PUBLIC CHAR_CR
PUBLIC CHAR_LF
PUBLIC CHAR_BS
PUBLIC CHAR_ESC
PUBLIC CHAR_CAPS
PUBLIC CHAR_BELL
PUBLIC CHAR_CTRL_C
PUBLIC CHAR_CTRL_D
PUBLIC CHAR_CTRL_Z
PUBLIC CHAR_CURSOR_UC
PUBLIC CHAR_CURSOR_LC
PUBLIC CHAR_PASSWORD

PUBLIC __CLIB_OPT_PRINTF

PUBLIC __CLIB_OPT_PRINTF_d
PUBLIC __CLIB_OPT_PRINTF_u
PUBLIC __CLIB_OPT_PRINTF_x
PUBLIC __CLIB_OPT_PRINTF_X
PUBLIC __CLIB_OPT_PRINTF_o
PUBLIC __CLIB_OPT_PRINTF_n
PUBLIC __CLIB_OPT_PRINTF_i
PUBLIC __CLIB_OPT_PRINTF_p
PUBLIC __CLIB_OPT_PRINTF_B
PUBLIC __CLIB_OPT_PRINTF_s
PUBLIC __CLIB_OPT_PRINTF_c
PUBLIC __CLIB_OPT_PRINTF_I
PUBLIC __CLIB_OPT_PRINTF_ld
PUBLIC __CLIB_OPT_PRINTF_lu
PUBLIC __CLIB_OPT_PRINTF_lx
PUBLIC __CLIB_OPT_PRINTF_lX
PUBLIC __CLIB_OPT_PRINTF_lo
PUBLIC __CLIB_OPT_PRINTF_ln
PUBLIC __CLIB_OPT_PRINTF_li
PUBLIC __CLIB_OPT_PRINTF_lp
PUBLIC __CLIB_OPT_PRINTF_lB
PUBLIC __CLIB_OPT_PRINTF_a
PUBLIC __CLIB_OPT_PRINTF_A
PUBLIC __CLIB_OPT_PRINTF_e
PUBLIC __CLIB_OPT_PRINTF_E
PUBLIC __CLIB_OPT_PRINTF_f
PUBLIC __CLIB_OPT_PRINTF_F
PUBLIC __CLIB_OPT_PRINTF_g
PUBLIC __CLIB_OPT_PRINTF_G

PUBLIC __CLIB_OPT_PRINTF_2

PUBLIC __CLIB_OPT_PRINTF_2_lld
PUBLIC __CLIB_OPT_PRINTF_2_llu
PUBLIC __CLIB_OPT_PRINTF_2_llx
PUBLIC __CLIB_OPT_PRINTF_2_llX
PUBLIC __CLIB_OPT_PRINTF_2_llo
PUBLIC __CLIB_OPT_PRINTF_2_lli

PUBLIC __CLIB_OPT_SCANF

PUBLIC __CLIB_OPT_SCANF_d
PUBLIC __CLIB_OPT_SCANF_u
PUBLIC __CLIB_OPT_SCANF_x
PUBLIC __CLIB_OPT_SCANF_X
PUBLIC __CLIB_OPT_SCANF_o
PUBLIC __CLIB_OPT_SCANF_n
PUBLIC __CLIB_OPT_SCANF_i
PUBLIC __CLIB_OPT_SCANF_p
PUBLIC __CLIB_OPT_SCANF_B
PUBLIC __CLIB_OPT_SCANF_s
PUBLIC __CLIB_OPT_SCANF_c
PUBLIC __CLIB_OPT_SCANF_I
PUBLIC __CLIB_OPT_SCANF_ld
PUBLIC __CLIB_OPT_SCANF_lu
PUBLIC __CLIB_OPT_SCANF_lx
PUBLIC __CLIB_OPT_SCANF_lX
PUBLIC __CLIB_OPT_SCANF_lo
PUBLIC __CLIB_OPT_SCANF_ln
PUBLIC __CLIB_OPT_SCANF_li
PUBLIC __CLIB_OPT_SCANF_lp
PUBLIC __CLIB_OPT_SCANF_lB
PUBLIC __CLIB_OPT_SCANF_BRACKET
PUBLIC __CLIB_OPT_SCANF_a
PUBLIC __CLIB_OPT_SCANF_A
PUBLIC __CLIB_OPT_SCANF_e
PUBLIC __CLIB_OPT_SCANF_E
PUBLIC __CLIB_OPT_SCANF_f
PUBLIC __CLIB_OPT_SCANF_F
PUBLIC __CLIB_OPT_SCANF_g
PUBLIC __CLIB_OPT_SCANF_G

PUBLIC __CLIB_OPT_SCANF_2

PUBLIC __CLIB_OPT_SCANF_2_lld
PUBLIC __CLIB_OPT_SCANF_2_llu
PUBLIC __CLIB_OPT_SCANF_2_llx
PUBLIC __CLIB_OPT_SCANF_2_llX
PUBLIC __CLIB_OPT_SCANF_2_llo
PUBLIC __CLIB_OPT_SCANF_2_lli

PUBLIC __CLIB_OPT_UNROLL

PUBLIC __CLIB_OPT_UNROLL_MEMCPY
PUBLIC __CLIB_OPT_UNROLL_MEMSET
PUBLIC __CLIB_OPT_UNROLL_OTIR
PUBLIC __CLIB_OPT_UNROLL_LDIR
PUBLIC __CLIB_OPT_UNROLL_USER_SMC
PUBLIC __CLIB_OPT_UNROLL_LIB_SMC

PUBLIC __CLIB_OPT_STRTOD

PUBLIC __CLIB_OPT_STRTOD_NAN
PUBLIC __CLIB_OPT_STRTOD_INF
PUBLIC __CLIB_OPT_STRTOD_HEX

PUBLIC __CLIB_OPT_SORT

PUBLIC __CLIB_OPT_SORT_INSERTION
PUBLIC __CLIB_OPT_SORT_SHELL
PUBLIC __CLIB_OPT_SORT_QUICK

PUBLIC __CLIB_OPT_SORT_QSORT

PUBLIC __CLIB_OPT_SORT_QSORT_PIVOT
PUBLIC __CLIB_OPT_SORT_QSORT_PIVOT_MID
PUBLIC __CLIB_OPT_SORT_QSORT_PIVOT_RAN
PUBLIC __CLIB_OPT_SORT_QSORT_ENABLE_INSERTION
PUBLIC __CLIB_OPT_SORT_QSORT_ENABLE_EQUAL

PUBLIC __CLIB_OPT_ERROR

PUBLIC __CLIB_OPT_ERROR_ENABLED
PUBLIC __CLIB_OPT_ERROR_VERBOSE




defc __CLIB_OPT_MULTITHREAD = 0x00

defc __CLIB_OPT_MULTITHREAD_LOCK_HEAPS = 0x01
defc __CLIB_OPT_MULTITHREAD_LOCK_FILES = 0x02
defc __CLIB_OPT_MULTITHREAD_LOCK_FLIST = 0x04
defc __CLIB_OPT_MULTITHREAD_LOCK_FDTBL = 0x08
defc __CLIB_OPT_MULTITHREAD_LOCK_FDSTR = 0x10

defc __CLIB_OPT_IMATH = 0

defc __CLIB_OPT_IMATH_FAST = 0x0f

defc __CLIB_OPT_IMATH_FAST_DIV_UNROLL = 0x01
defc __CLIB_OPT_IMATH_FAST_DIV_LZEROS = 0x02
defc __CLIB_OPT_IMATH_FAST_MUL_UNROLL = 0x04
defc __CLIB_OPT_IMATH_FAST_MUL_LZEROS = 0x08
defc __CLIB_OPT_IMATH_FAST_LIA = 0x80

defc __CLIB_OPT_IMATH_SELECT = 0x00

defc __CLIB_OPT_IMATH_SELECT_FAST_ASR = 0x01
defc __CLIB_OPT_IMATH_SELECT_FAST_LSR = 0x02
defc __CLIB_OPT_IMATH_SELECT_FAST_LSL = 0x04

defc __CLIB_OPT_TXT2NUM = 0x04

defc __CLIB_OPT_TXT2NUM_INT_BIN = 0x01
defc __CLIB_OPT_TXT2NUM_INT_OCT = 0x02
defc __CLIB_OPT_TXT2NUM_INT_DEC = 0x04
defc __CLIB_OPT_TXT2NUM_INT_HEX = 0x08

defc __CLIB_OPT_TXT2NUM_LONG_BIN = 0x10
defc __CLIB_OPT_TXT2NUM_LONG_OCT = 0x20
defc __CLIB_OPT_TXT2NUM_LONG_DEC = 0x40
defc __CLIB_OPT_TXT2NUM_LONG_HEX = 0x80

defc __CLIB_OPT_TXT2NUM_SELECT = 0x00

defc __CLIB_OPT_TXT2NUM_SELECT_FAST_BIN = 0x01
defc __CLIB_OPT_TXT2NUM_SELECT_FAST_OCT = 0x02
defc __CLIB_OPT_TXT2NUM_SELECT_FAST_DEC = 0x04
defc __CLIB_OPT_TXT2NUM_SELECT_FAST_HEX = 0x08

defc __CLIB_OPT_NUM2TXT = 0x00

defc __CLIB_OPT_NUM2TXT_INT_BIN = 0x01
defc __CLIB_OPT_NUM2TXT_INT_OCT = 0x02
defc __CLIB_OPT_NUM2TXT_INT_DEC = 0x04
defc __CLIB_OPT_NUM2TXT_INT_HEX = 0x08

defc __CLIB_OPT_NUM2TXT_LONG_BIN = 0x10
defc __CLIB_OPT_NUM2TXT_LONG_OCT = 0x20
defc __CLIB_OPT_NUM2TXT_LONG_DEC = 0x40
defc __CLIB_OPT_NUM2TXT_LONG_HEX = 0x80

defc __CLIB_OPT_NUM2TXT_SELECT = 0x00

defc __CLIB_OPT_NUM2TXT_SELECT_FAST_BIN = 0x01
defc __CLIB_OPT_NUM2TXT_SELECT_FAST_OCT = 0x02
defc __CLIB_OPT_NUM2TXT_SELECT_FAST_DEC = 0x04
defc __CLIB_OPT_NUM2TXT_SELECT_FAST_HEX = 0x08

defc __CLIB_OPT_STDIO = 0x00

defc __CLIB_OPT_STDIO_VALID = 0x01

defc CHAR_CR = 13
defc CHAR_LF = 10
defc CHAR_BS = 12
defc CHAR_ESC = 27
defc CHAR_CAPS = 6
defc CHAR_BELL = 7
defc CHAR_CTRL_C = 3
defc CHAR_CTRL_D = 4
defc CHAR_CTRL_Z = 26
defc CHAR_CURSOR_UC = 45
defc CHAR_CURSOR_LC = 95
defc CHAR_PASSWORD = 42

defc __CLIB_OPT_PRINTF = 0x002ff6ff

defc __CLIB_OPT_PRINTF_d = 0x00000001
defc __CLIB_OPT_PRINTF_u = 0x00000002
defc __CLIB_OPT_PRINTF_x = 0x00000004
defc __CLIB_OPT_PRINTF_X = 0x00000008
defc __CLIB_OPT_PRINTF_o = 0x00000010
defc __CLIB_OPT_PRINTF_n = 0x00000020
defc __CLIB_OPT_PRINTF_i = 0x00000040
defc __CLIB_OPT_PRINTF_p = 0x00000080
defc __CLIB_OPT_PRINTF_B = 0x00000100
defc __CLIB_OPT_PRINTF_s = 0x00000200
defc __CLIB_OPT_PRINTF_c = 0x00000400
defc __CLIB_OPT_PRINTF_I = 0x00000800
defc __CLIB_OPT_PRINTF_ld = 0x00001000
defc __CLIB_OPT_PRINTF_lu = 0x00002000
defc __CLIB_OPT_PRINTF_lx = 0x00004000
defc __CLIB_OPT_PRINTF_lX = 0x00008000
defc __CLIB_OPT_PRINTF_lo = 0x00010000
defc __CLIB_OPT_PRINTF_ln = 0x00020000
defc __CLIB_OPT_PRINTF_li = 0x00040000
defc __CLIB_OPT_PRINTF_lp = 0x00080000
defc __CLIB_OPT_PRINTF_lB = 0x00100000
defc __CLIB_OPT_PRINTF_a = 0x00400000
defc __CLIB_OPT_PRINTF_A = 0x00800000
defc __CLIB_OPT_PRINTF_e = 0x01000000
defc __CLIB_OPT_PRINTF_E = 0x02000000
defc __CLIB_OPT_PRINTF_f = 0x04000000
defc __CLIB_OPT_PRINTF_F = 0x08000000
defc __CLIB_OPT_PRINTF_g = 0x10000000
defc __CLIB_OPT_PRINTF_G = 0x20000000

defc __CLIB_OPT_PRINTF_2 = 0x00

defc __CLIB_OPT_PRINTF_2_lld = 0x01
defc __CLIB_OPT_PRINTF_2_llu = 0x02
defc __CLIB_OPT_PRINTF_2_llx = 0x04
defc __CLIB_OPT_PRINTF_2_llX = 0x08
defc __CLIB_OPT_PRINTF_2_llo = 0x10
defc __CLIB_OPT_PRINTF_2_lli = 0x40

defc __CLIB_OPT_SCANF = 0x002ff6ff

defc __CLIB_OPT_SCANF_d = 0x00000001
defc __CLIB_OPT_SCANF_u = 0x00000002
defc __CLIB_OPT_SCANF_x = 0x00000004
defc __CLIB_OPT_SCANF_X = 0x00000008
defc __CLIB_OPT_SCANF_o = 0x00000010
defc __CLIB_OPT_SCANF_n = 0x00000020
defc __CLIB_OPT_SCANF_i = 0x00000040
defc __CLIB_OPT_SCANF_p = 0x00000080
defc __CLIB_OPT_SCANF_B = 0x00000100
defc __CLIB_OPT_SCANF_s = 0x00000200
defc __CLIB_OPT_SCANF_c = 0x00000400
defc __CLIB_OPT_SCANF_I = 0x00000800
defc __CLIB_OPT_SCANF_ld = 0x00001000
defc __CLIB_OPT_SCANF_lu = 0x00002000
defc __CLIB_OPT_SCANF_lx = 0x00004000
defc __CLIB_OPT_SCANF_lX = 0x00008000
defc __CLIB_OPT_SCANF_lo = 0x00010000
defc __CLIB_OPT_SCANF_ln = 0x00020000
defc __CLIB_OPT_SCANF_li = 0x00040000
defc __CLIB_OPT_SCANF_lp = 0x00080000
defc __CLIB_OPT_SCANF_lB = 0x00100000
defc __CLIB_OPT_SCANF_BRACKET = 0x00200000
defc __CLIB_OPT_SCANF_a = 0x00400000
defc __CLIB_OPT_SCANF_A = 0x00800000
defc __CLIB_OPT_SCANF_e = 0x01000000
defc __CLIB_OPT_SCANF_E = 0x02000000
defc __CLIB_OPT_SCANF_f = 0x04000000
defc __CLIB_OPT_SCANF_F = 0x08000000
defc __CLIB_OPT_SCANF_g = 0x10000000
defc __CLIB_OPT_SCANF_G = 0x20000000

defc __CLIB_OPT_SCANF_2 = 0x00

defc __CLIB_OPT_SCANF_2_lld = 0x01
defc __CLIB_OPT_SCANF_2_llu = 0x02
defc __CLIB_OPT_SCANF_2_llx = 0x04
defc __CLIB_OPT_SCANF_2_llX = 0x08
defc __CLIB_OPT_SCANF_2_llo = 0x10
defc __CLIB_OPT_SCANF_2_lli = 0x40

defc __CLIB_OPT_UNROLL = 0x00

defc __CLIB_OPT_UNROLL_MEMCPY = 0x01
defc __CLIB_OPT_UNROLL_MEMSET = 0x02
defc __CLIB_OPT_UNROLL_OTIR = 0x10
defc __CLIB_OPT_UNROLL_LDIR = 0x20
defc __CLIB_OPT_UNROLL_USER_SMC = 0x40
defc __CLIB_OPT_UNROLL_LIB_SMC = 0x80

defc __CLIB_OPT_STRTOD = 0x00

defc __CLIB_OPT_STRTOD_NAN = 0x01
defc __CLIB_OPT_STRTOD_INF = 0x01
defc __CLIB_OPT_STRTOD_HEX = 0x02

defc __CLIB_OPT_SORT = 1

defc __CLIB_OPT_SORT_INSERTION = 0
defc __CLIB_OPT_SORT_SHELL = 1
defc __CLIB_OPT_SORT_QUICK = 2

defc __CLIB_OPT_SORT_QSORT = 0x0c

defc __CLIB_OPT_SORT_QSORT_PIVOT = 0x3
defc __CLIB_OPT_SORT_QSORT_PIVOT_MID = 0x0
defc __CLIB_OPT_SORT_QSORT_PIVOT_RAN = 0x1
defc __CLIB_OPT_SORT_QSORT_ENABLE_INSERTION = 0x04
defc __CLIB_OPT_SORT_QSORT_ENABLE_EQUAL = 0x08

defc __CLIB_OPT_ERROR = 0x00

defc __CLIB_OPT_ERROR_ENABLED = 0x01
defc __CLIB_OPT_ERROR_VERBOSE = 0x02













PUBLIC __EOK
PUBLIC __EACCES
PUBLIC __EBADF
PUBLIC __EBDFD
PUBLIC __EDOM
PUBLIC __EFBIG
PUBLIC __EINVAL
PUBLIC __EIO
PUBLIC __EMFILE
PUBLIC __ENFILE
PUBLIC __ENOLCK
PUBLIC __ENOMEM
PUBLIC __ENOTSUP
PUBLIC __EOVERFLOW
PUBLIC __ERANGE
PUBLIC __ESTAT
PUBLIC __EAGAIN
PUBLIC __EWOULDBLOCK

PUBLIC __ERROR_NEXT

PUBLIC STDIO_SEEK_SET
PUBLIC STDIO_SEEK_CUR
PUBLIC STDIO_SEEK_END

PUBLIC STDIO_MSG_PUTC
PUBLIC STDIO_MSG_WRIT
PUBLIC STDIO_MSG_GETC
PUBLIC STDIO_MSG_EATC
PUBLIC STDIO_MSG_READ
PUBLIC STDIO_MSG_SEEK
PUBLIC STDIO_MSG_ICTL
PUBLIC STDIO_MSG_FLSH
PUBLIC STDIO_MSG_CLOS

PUBLIC ITERM_MSG_GETC
PUBLIC ITERM_MSG_REJECT
PUBLIC ITERM_MSG_INTERRUPT
PUBLIC ITERM_MSG_PUTC
PUBLIC ITERM_MSG_PRINT_CURSOR
PUBLIC ITERM_MSG_ERASE_CURSOR
PUBLIC ITERM_MSG_ERASE_CURSOR_PWD
PUBLIC ITERM_MSG_BS
PUBLIC ITERM_MSG_BS_PWD
PUBLIC ITERM_MSG_READLINE_BEGIN
PUBLIC ITERM_MSG_READLINE_END
PUBLIC ITERM_MSG_READLINE_SCROLL_LIMIT
PUBLIC ITERM_MSG_BELL
      
PUBLIC __MESSAGE_ITERM_NEXT__

PUBLIC OTERM_MSG_PUTC
PUBLIC OTERM_MSG_TTY
PUBLIC OTERM_MSG_FZX_PUTC
PUBLIC OTERM_MSG_PRINTC
PUBLIC OTERM_MSG_SCROLL
PUBLIC OTERM_MSG_SCROLL_LIMIT
PUBLIC OTERM_MSG_CLS
PUBLIC OTERM_MSG_PAUSE
PUBLIC OTERM_MSG_BELL
PUBLIC OTERM_MSG_PSCROLL
PUBLIC OTERM_MSG_FZX_GET_XOR_DRAW
      
PUBLIC __MESSAGE_OTERM_NEXT__

PUBLIC ICHAR_MSG_GETC
PUBLIC OCHAR_MSG_PUTC_BIN
PUBLIC OCHAR_MSG_PUTC
  
PUBLIC __MESSAGE_NEXT__

PUBLIC mtx_plain
PUBLIC mtx_recursive
PUBLIC mtx_timed

PUBLIC thrd_success
PUBLIC thrd_error
PUBLIC thrd_nomem
PUBLIC thrd_busy
PUBLIC thrd_timedout

PUBLIC IOCTL_RESET

PUBLIC IOCTL_ITERM_ECHO
PUBLIC IOCTL_ITERM_PASS
PUBLIC IOCTL_ITERM_LINE
PUBLIC IOCTL_ITERM_COOK
PUBLIC IOCTL_ITERM_CAPS
PUBLIC IOCTL_ITERM_CRLF
PUBLIC IOCTL_ITERM_CURS
   
PUBLIC IOCTL_ITERM_TIE
PUBLIC IOCTL_ITERM_GET_EDITBUF
PUBLIC IOCTL_ITERM_SET_EDITBUF

PUBLIC IOCTL_OTERM_PAGE
PUBLIC IOCTL_OTERM_PAUSE
PUBLIC IOCTL_OTERM_COOK
PUBLIC IOCTL_OTERM_CRLF
PUBLIC IOCTL_OTERM_CLEAR
PUBLIC IOCTL_OTERM_SIGNAL
PUBLIC IOCTL_OTERM_BELL

PUBLIC IOCTL_OTERM_CLS
PUBLIC IOCTL_OTERM_RESET_SCROLL
PUBLIC IOCTL_OTERM_GET_WINDOW_COORD
PUBLIC IOCTL_OTERM_SET_WINDOW_COORD
PUBLIC IOCTL_OTERM_GET_WINDOW_RECT
PUBLIC IOCTL_OTERM_SET_WINDOW_RECT
PUBLIC IOCTL_OTERM_GET_CURSOR_COORD
PUBLIC IOCTL_OTERM_SET_CURSOR_COORD
PUBLIC IOCTL_OTERM_GET_OTERM
PUBLIC IOCTL_OTERM_SCROLL
PUBLIC IOCTL_OTERM_FONT
PUBLIC IOCTL_OTERM_SCROLL_LIMIT

PUBLIC IOCTL_OTERM_FZX_GET_PAPER_COORD
PUBLIC IOCTL_OTERM_FZX_SET_PAPER_COORD
PUBLIC IOCTL_OTERM_FZX_GET_PAPER_RECT
PUBLIC IOCTL_OTERM_FZX_SET_PAPER_RECT
PUBLIC IOCTL_OTERM_FZX_LEFT_MARGIN
PUBLIC IOCTL_OTERM_FZX_LINE_SPACING
PUBLIC IOCTL_OTERM_FZX_SPACE_EXPAND
PUBLIC IOCTL_OTERM_FZX_GET_FZX_STATE
PUBLIC IOCTL_OTERM_FZX_SET_FZX_STATE

PUBLIC IOCTL_ICHAR_CRLF
   
PUBLIC IOCTL_OCHAR_CRLF




defc __EOK = 0
defc __EACCES = 1
defc __EBADF = 2
defc __EBDFD = 3
defc __EDOM = 4
defc __EFBIG = 5
defc __EINVAL = 6
defc __EIO = 7
defc __EMFILE = 8
defc __ENFILE = 9
defc __ENOLCK = 10
defc __ENOMEM = 11
defc __ENOTSUP = 12
defc __EOVERFLOW = 13
defc __ERANGE = 14
defc __ESTAT = 15
defc __EAGAIN = 16
defc __EWOULDBLOCK = 16

defc __ERROR_NEXT = 50

defc STDIO_SEEK_SET = 0
defc STDIO_SEEK_CUR = 1
defc STDIO_SEEK_END = 2

defc STDIO_MSG_PUTC = 1
defc STDIO_MSG_WRIT = 2
defc STDIO_MSG_GETC = 3
defc STDIO_MSG_EATC = 4
defc STDIO_MSG_READ = 5
defc STDIO_MSG_SEEK = 6
defc STDIO_MSG_ICTL = 7
defc STDIO_MSG_FLSH = 8
defc STDIO_MSG_CLOS = 9

defc ITERM_MSG_GETC = 15
defc ITERM_MSG_REJECT = 16
defc ITERM_MSG_INTERRUPT = 17
defc ITERM_MSG_PUTC = 18
defc ITERM_MSG_PRINT_CURSOR = 19
defc ITERM_MSG_ERASE_CURSOR = 20
defc ITERM_MSG_ERASE_CURSOR_PWD = 21
defc ITERM_MSG_BS = 22
defc ITERM_MSG_BS_PWD = 23
defc ITERM_MSG_READLINE_BEGIN = 24
defc ITERM_MSG_READLINE_END = 25
defc ITERM_MSG_READLINE_SCROLL_LIMIT = 26
defc ITERM_MSG_BELL = 27
      
defc __MESSAGE_ITERM_NEXT__ = 28

defc OTERM_MSG_PUTC = 30
defc OTERM_MSG_TTY = 31
defc OTERM_MSG_FZX_PUTC = 32
defc OTERM_MSG_PRINTC = 33
defc OTERM_MSG_SCROLL = 34
defc OTERM_MSG_SCROLL_LIMIT = 35
defc OTERM_MSG_CLS = 36
defc OTERM_MSG_PAUSE = 37
defc OTERM_MSG_BELL = 38
defc OTERM_MSG_PSCROLL = 39
defc OTERM_MSG_FZX_GET_XOR_DRAW = 40
      
defc __MESSAGE_OTERM_NEXT__ = 41

defc ICHAR_MSG_GETC = 15
defc OCHAR_MSG_PUTC_BIN = 30
defc OCHAR_MSG_PUTC = 33
  
defc __MESSAGE_NEXT__ = 45

defc mtx_plain = 0x01
defc mtx_recursive = 0x02
defc mtx_timed = 0x04

defc thrd_success = 0x00
defc thrd_error = 0x01
defc thrd_nomem = 0x02
defc thrd_busy = 0x04
defc thrd_timedout = 0x08

defc IOCTL_RESET = 0x0000

defc IOCTL_ITERM_ECHO = 0xc081
defc IOCTL_ITERM_PASS = 0xc041
defc IOCTL_ITERM_LINE = 0xc021
defc IOCTL_ITERM_COOK = 0xc011
defc IOCTL_ITERM_CAPS = 0xc009
defc IOCTL_ITERM_CRLF = 0xc101
defc IOCTL_ITERM_CURS = 0xc201
   
defc IOCTL_ITERM_TIE = 0x0201
defc IOCTL_ITERM_GET_EDITBUF = 0x0381
defc IOCTL_ITERM_SET_EDITBUF = 0x0301

defc IOCTL_OTERM_PAGE = 0xc082
defc IOCTL_OTERM_PAUSE = 0xc042
defc IOCTL_OTERM_COOK = 0xc022
defc IOCTL_OTERM_CRLF = 0xc012
defc IOCTL_OTERM_CLEAR = 0xe002
defc IOCTL_OTERM_SIGNAL = 0xc202
defc IOCTL_OTERM_BELL = 0xc102

defc IOCTL_OTERM_CLS = 0x0102
defc IOCTL_OTERM_RESET_SCROLL = 0x0202
defc IOCTL_OTERM_GET_WINDOW_COORD = 0x0382
defc IOCTL_OTERM_SET_WINDOW_COORD = 0x0302
defc IOCTL_OTERM_GET_WINDOW_RECT = 0x0482
defc IOCTL_OTERM_SET_WINDOW_RECT = 0x0402
defc IOCTL_OTERM_GET_CURSOR_COORD = 0x0582
defc IOCTL_OTERM_SET_CURSOR_COORD = 0x0502
defc IOCTL_OTERM_GET_OTERM = 0x0602
defc IOCTL_OTERM_SCROLL = 0x0702
defc IOCTL_OTERM_FONT = 0x0802
defc IOCTL_OTERM_SCROLL_LIMIT = 0x0902

defc IOCTL_OTERM_FZX_GET_PAPER_COORD = 0x0a82
defc IOCTL_OTERM_FZX_SET_PAPER_COORD = 0x0a02
defc IOCTL_OTERM_FZX_GET_PAPER_RECT = 0x0b82
defc IOCTL_OTERM_FZX_SET_PAPER_RECT = 0x0b02
defc IOCTL_OTERM_FZX_LEFT_MARGIN = 0x0c02
defc IOCTL_OTERM_FZX_LINE_SPACING = 0x0d02
defc IOCTL_OTERM_FZX_SPACE_EXPAND = 0x0e02
defc IOCTL_OTERM_FZX_GET_FZX_STATE = 0x0f82
defc IOCTL_OTERM_FZX_SET_FZX_STATE = 0x0f02

defc IOCTL_ICHAR_CRLF = 0xc103
   
defc IOCTL_OCHAR_CRLF = 0xc014




























PUBLIC __CPM_RCON
PUBLIC __CPM_WCON
PUBLIC __CPM_RRDR
PUBLIC __CPM_WPUN
PUBLIC __CPM_WLST
PUBLIC __CPM_DCIO
PUBLIC __CPM_GIOB
PUBLIC __CPM_SIOB
PUBLIC __CPM_PRST
PUBLIC __CPM_RCOB
PUBLIC __CPM_ICON
PUBLIC __CPM_VERS
PUBLIC __CPM_RDS
PUBLIC __CPM_LGIN
PUBLIC __CPM_OPN
PUBLIC __CPM_CLS
PUBLIC __CPM_FFST
PUBLIC __CPM_FNXT
PUBLIC __CPM_DEL
PUBLIC __CPM_READ
PUBLIC __CPM_WRIT
PUBLIC __CPM_MAKE
PUBLIC __CPM_REN
PUBLIC __CPM_ILOG
PUBLIC __CPM_IDRV
PUBLIC __CPM_SDMA
PUBLIC __CPM_SUID
PUBLIC __CPM_RRAN
PUBLIC __CPM_WRAN
PUBLIC __CPM_CFS
PUBLIC __CPM_RREC
PUBLIC __CPM_SRDS
PUBLIC __CPM_WRZF
PUBLIC __CPM_DSEG




defc __CPM_RCON = 1
defc __CPM_WCON = 2
defc __CPM_RRDR = 3
defc __CPM_WPUN = 4
defc __CPM_WLST = 5
defc __CPM_DCIO = 6
defc __CPM_GIOB = 7
defc __CPM_SIOB = 8
defc __CPM_PRST = 9
defc __CPM_RCOB = 10
defc __CPM_ICON = 11
defc __CPM_VERS = 12
defc __CPM_RDS  = 13
defc __CPM_LGIN = 14
defc __CPM_OPN  = 15
defc __CPM_CLS  = 16
defc __CPM_FFST = 17
defc __CPM_FNXT = 18
defc __CPM_DEL  = 19
defc __CPM_READ = 20
defc __CPM_WRIT = 21
defc __CPM_MAKE = 22
defc __CPM_REN  = 23
defc __CPM_ILOG = 24
defc __CPM_IDRV = 25
defc __CPM_SDMA = 26
defc __CPM_SUID = 32
defc __CPM_RRAN = 33
defc __CPM_WRAN = 34
defc __CPM_CFS  = 35
defc __CPM_RREC = 36
defc __CPM_SRDS = 37
defc __CPM_WRZF = 40
defc __CPM_DSEG = 51










ENDIF

