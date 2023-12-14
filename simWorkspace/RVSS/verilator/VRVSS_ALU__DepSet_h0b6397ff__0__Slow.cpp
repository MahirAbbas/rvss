// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_ALU.h"

VL_ATTR_COLD void VRVSS_ALU___ctor_var_reset(VRVSS_ALU* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VRVSS_ALU___ctor_var_reset\n"); );
    // Body
    vlSelf->io_SrcA = VL_RAND_RESET_I(32);
    vlSelf->io_SrcB = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_ALUControl = VL_RAND_RESET_I(3);
    vlSelf->__PVT__io_ALUResult = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_zero = VL_RAND_RESET_I(1);
}
