// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Fetch.h"

VL_INLINE_OPT void VRVSS_Fetch___ico_sequent__TOP__RVSS__datapath_1__fetch_1__0(VRVSS_Fetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_Fetch___ico_sequent__TOP__RVSS__datapath_1__fetch_1__0\n"); );
    // Body
    vlSelf->io_instruction = vlSelf->instructionMemory
        [(0xffU & vlSelf->__PVT__programCounter)];
}
