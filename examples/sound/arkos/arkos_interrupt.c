///////////////////////////////////////////////////////////////////////////////
//
// arkos_interrupt.c - Example code for using interrupt-driven music playback
//
// 10/03/2023 - ZXjogv <zx@jogv.es>
//
///////////////////////////////////////////////////////////////////////////////

#include <interrupt.h>
#include <intrinsic.h>
#include <stdint.h>

#ifdef __SPECTRUM__
#include <spectrum.h>
#endif
#ifdef __MSX__
#include <msx.h>
#endif
#ifdef __CPC__
#include <cpc.h>
#endif

#include <psg/arkos.h>

extern uint8_t song[];

void wrapper() __naked
{
    __asm
    INCLUDE "hocuspocus.asm"
    SECTION code_compiler
    __endasm;
}

void service_interrupt(void)
{
    M_PRESERVE_ALL;
#ifdef __AQUARIUS__
    static int NTSCCount = 6;
    if (--NTSCCount)
        ply_akg_play();
    else
        NTSCCount = 6;
#else
    ply_akg_play();
#endif
    M_RESTORE_ALL;
}

void init_interrupts(void)
{
    intrinsic_di();
#if __SPECTRUM__
    zx_im2_init(0xd300, 0xd4);
    add_raster_int(0x38);
#endif
#ifndef NO_INTERRUPT_INIT
    im1_init();
#endif
    add_raster_int(service_interrupt);
    intrinsic_ei();
}

void main(void)
{
    ply_akg_init(song, 0);
    init_interrupts();
    while (1)
    {
        // do whatever in your main loop
        // music playback should happen in interrupt context
    }
}
