// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Memory.h"
#include "VRVSS__Syms.h"

VL_INLINE_OPT void VRVSS_Memory___ico_sequent__TOP__RVSS__datapath_1__memory_1__0(VRVSS_Memory* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_Memory___ico_sequent__TOP__RVSS__datapath_1__memory_1__0\n"); );
    // Body
    vlSelf->__PVT___zz_1 = 0U;
    if (vlSymsp->TOP__RVSS__control_1.__PVT__io_memWrite) {
        vlSelf->__PVT___zz_1 = 1U;
    }
}

VL_INLINE_OPT void VRVSS_Memory___nba_sequent__TOP__RVSS__datapath_1__memory_1__0(VRVSS_Memory* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_Memory___nba_sequent__TOP__RVSS__datapath_1__memory_1__0\n"); );
    // Body
    vlSelf->__Vdlyvset__dataMemory__v0 = 0U;
    if (vlSelf->__PVT___zz_1) {
        vlSelf->__Vdlyvval__dataMemory__v0 = vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.io_readData2;
        vlSelf->__Vdlyvset__dataMemory__v0 = 1U;
        vlSelf->__Vdlyvdim0__dataMemory__v0 = (0xffU 
                                               & vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_ALUResult);
    }
}
