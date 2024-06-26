CHANGES TO SOURCE CODE
======================

None.

VERIFY CORRECT RESULT
=====================

Using IDE HPDZ.EXE make a new project containing BT.C.
Choose CP/M target and max optimizations with global optimization = 9.
Select long printf under options.

Under "MAKE->CPP pre-defined symbols" add -DSTATIC -DPRINTF.
Build the program, ignoring warnings as they come up.

Run on a cpm emulator to verify results.

TIMING
======

Change options to produce a ROM binary file.
Enable -DSTATIC and -DTIMER only for CPP pre-defined symbols.

Rebuild to produce BT.BIN.

Program size from the IDE dialog is: 4001 (ROM) + 120 (RAM) = 4121 bytes.
The two other sections correspond to page zero and initialization code.

To determine start and stop timing points, the output binary
was manually inspected.  TICKS command:

z88dk-ticks bt.bin -start 0256 -end 03a1 -counter 999999999

start   = TIMER_START in hex
end     = TIMER_STOP in hex
counter = High value to ensure completion

If the result is close to the counter value, the program may have
prematurely terminated so rerun with a higher counter if that is the case.

RESULT
======

HITECH C MSDOS V780pl2
4247 bytes exact

cycle count  = 240336355
time @ 4MHz  = 240336355 / 4x10^6 = 60.09 seconds
