// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Fetch.h"
#include "VRVSS__Syms.h"

VL_INLINE_OPT void VRVSS_Fetch___ico_sequent__TOP__RVSS__datapath_1__fetch_1__1(VRVSS_Fetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_Fetch___ico_sequent__TOP__RVSS__datapath_1__fetch_1__1\n"); );
    // Body
    vlSelf->__PVT__PCPlus4 = ((IData)(1U) + vlSelf->__PVT__programCounter);
    if (vlSymsp->TOP__RVSS__control_1.__PVT__io_PCSrc) {
        vlSelf->__PVT__PCPlus4 = vlSymsp->TOP__RVSS__datapath_1.__PVT__PCTarget;
    }
}

VL_INLINE_OPT void VRVSS_Fetch___nba_sequent__TOP__RVSS__datapath_1__fetch_1__0(VRVSS_Fetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_Fetch___nba_sequent__TOP__RVSS__datapath_1__fetch_1__0\n"); );
    // Body
    vlSelf->__PVT__programCounter = ((IData)(vlSymsp->TOP.reset)
                                      ? 0U : ((IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_PCSrc)
                                               ? vlSymsp->TOP__RVSS__datapath_1.__PVT__PCTarget
                                               : vlSelf->__PVT__PCPlus4));
    vlSelf->io_instruction = vlSelf->instructionMemory
        [(0xffU & vlSelf->__PVT__programCounter)];
}
