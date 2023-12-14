// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Execute.h"
#include "VRVSS__Syms.h"

VL_INLINE_OPT void VRVSS_Execute___ico_sequent__TOP__RVSS__datapath_1__execute_1__0(VRVSS_Execute* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_Execute___ico_sequent__TOP__RVSS__datapath_1__execute_1__0\n"); );
    // Body
    vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.io_SrcA 
        = vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.io_readData1;
}

VL_INLINE_OPT void VRVSS_Execute___ico_sequent__TOP__RVSS__datapath_1__execute_1__1(VRVSS_Execute* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_Execute___ico_sequent__TOP__RVSS__datapath_1__execute_1__1\n"); );
    // Body
    vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.io_SrcB 
        = ((IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_ALUSrc)
            ? vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1.__PVT__io_extended
            : vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.io_readData2);
}

VL_INLINE_OPT void VRVSS_Execute___nba_comb__TOP__RVSS__datapath_1__execute_1__0(VRVSS_Execute* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_Execute___nba_comb__TOP__RVSS__datapath_1__execute_1__0\n"); );
    // Body
    vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.io_SrcA 
        = vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.io_readData1;
    vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.io_SrcB 
        = ((IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_ALUSrc)
            ? vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1.__PVT__io_extended
            : vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.io_readData2);
}
