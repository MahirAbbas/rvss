// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Control.h"

VL_ATTR_COLD void VRVSS_Control___ctor_var_reset(VRVSS_Control* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VRVSS_Control___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__io_instrucion = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_PCSrc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_resultSrc = VL_RAND_RESET_I(2);
    vlSelf->__PVT__io_memWrite = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_ALUControl = VL_RAND_RESET_I(3);
    vlSelf->__PVT__io_ALUSrc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_immItype = VL_RAND_RESET_I(3);
    vlSelf->__PVT__io_regWrite = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_zero = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_immItype_string = VL_RAND_RESET_Q(40);
}
