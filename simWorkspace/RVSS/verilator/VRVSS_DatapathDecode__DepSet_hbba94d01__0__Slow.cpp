// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_DatapathDecode.h"

VL_ATTR_COLD void VRVSS_DatapathDecode___ctor_var_reset(VRVSS_DatapathDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_DatapathDecode___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__io_instr = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_writeEnable = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_itype = VL_RAND_RESET_I(3);
    vlSelf->__PVT__io_extended = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_RD1E = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_RD2E = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_WD3E = VL_RAND_RESET_I(32);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_itype_string = VL_RAND_RESET_Q(40);
}
