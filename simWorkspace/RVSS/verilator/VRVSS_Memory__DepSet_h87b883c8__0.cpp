// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Memory.h"

VL_INLINE_OPT void VRVSS_Memory___nba_sequent__TOP__RVSS__datapath_1__memory_1__1(VRVSS_Memory* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_Memory___nba_sequent__TOP__RVSS__datapath_1__memory_1__1\n"); );
    // Body
    if (vlSelf->__Vdlyvset__dataMemory__v0) {
        vlSelf->dataMemory[vlSelf->__Vdlyvdim0__dataMemory__v0] 
            = vlSelf->__Vdlyvval__dataMemory__v0;
    }
}
