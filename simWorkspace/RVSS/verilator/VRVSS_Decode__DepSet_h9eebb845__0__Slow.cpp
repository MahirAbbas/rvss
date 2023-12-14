// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Decode.h"

extern const VlUnpacked<QData/*39:0*/, 64> VRVSS__ConstPool__TABLE_h0230497b_0;

VL_ATTR_COLD void VRVSS_Decode___stl_sequent__TOP__RVSS__control_1__decode_1__0(VRVSS_Decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_Decode___stl_sequent__TOP__RVSS__control_1__decode_1__0\n"); );
    // Init
    CData/*5:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    // Body
    __Vtableidx3 = vlSelf->__PVT__register_1;
    vlSelf->__PVT__register_1_string = VRVSS__ConstPool__TABLE_h0230497b_0
        [__Vtableidx3];
}

VL_ATTR_COLD void VRVSS_Decode___ctor_var_reset(VRVSS_Decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_Decode___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__io_instr = VL_RAND_RESET_I(32);
    vlSelf->io_operation = VL_RAND_RESET_I(6);
    vlSelf->__PVT__io_outInstrFormat = VL_RAND_RESET_I(3);
    vlSelf->__PVT__clk = VL_RAND_RESET_I(1);
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT__register_1 = VL_RAND_RESET_I(6);
    vlSelf->__PVT__io_operation_string = VL_RAND_RESET_Q(40);
    vlSelf->__PVT__io_outInstrFormat_string = VL_RAND_RESET_Q(40);
    vlSelf->__PVT__register_1_string = VL_RAND_RESET_Q(40);
}
