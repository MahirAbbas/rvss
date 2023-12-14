// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_ALU.h"
#include "VRVSS__Syms.h"

VL_INLINE_OPT void VRVSS_ALU___ico_sequent__TOP__RVSS__datapath_1__execute_1__alu_1__0(VRVSS_ALU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VRVSS_ALU___ico_sequent__TOP__RVSS__datapath_1__execute_1__alu_1__0\n"); );
    // Body
    vlSelf->__PVT__io_ALUResult = 0U;
    if ((4U & (IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_ALUControl))) {
        if ((2U & (IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_ALUControl))) {
            vlSelf->__PVT__io_ALUResult = ((1U & (IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_ALUControl))
                                            ? (vlSelf->io_SrcA 
                                               & vlSelf->io_SrcB)
                                            : (vlSelf->io_SrcA 
                                               | vlSelf->io_SrcB));
        }
    } else if ((2U & (IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_ALUControl))) {
        if ((1U & (~ (IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_ALUControl)))) {
            vlSelf->__PVT__io_ALUResult = (VL_LTS_III(32, vlSelf->io_SrcA, vlSelf->io_SrcB)
                                            ? 1U : 0U);
        }
    } else {
        vlSelf->__PVT__io_ALUResult = ((1U & (IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_ALUControl))
                                        ? (vlSelf->io_SrcA 
                                           - vlSelf->io_SrcB)
                                        : (vlSelf->io_SrcA 
                                           + vlSelf->io_SrcB));
    }
    vlSelf->__PVT__io_zero = 0U;
    if ((0U == vlSelf->__PVT__io_ALUResult)) {
        vlSelf->__PVT__io_zero = 1U;
    }
}
