// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Fetch.h"

extern const VlWide<28>/*895:0*/ VRVSS__ConstPool__CONST_h015c711f_0;

VL_ATTR_COLD void VRVSS_Fetch___eval_initial__TOP__RVSS__datapath_1__fetch_1(VRVSS_Fetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_Fetch___eval_initial__TOP__RVSS__datapath_1__fetch_1\n"); );
    // Body
    VL_READMEM_N(false, 32, 256, 0, VL_CVT_PACK_STR_NW(28, VRVSS__ConstPool__CONST_h015c711f_0)
                 ,  &(vlSelf->instructionMemory), 0
                 , ~0ULL);
}

VL_ATTR_COLD void VRVSS_Fetch___ctor_var_reset(VRVSS_Fetch* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_Fetch___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__io_branch = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_branchTarget = VL_RAND_RESET_I(32);
    vlSelf->io_instruction = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_PC = VL_RAND_RESET_I(32);
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__reset = 0;
    vlSelf->__PVT__programCounter = VL_RAND_RESET_I(32);
    vlSelf->__PVT__PCPlus4 = VL_RAND_RESET_I(32);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->instructionMemory[__Vi0] = VL_RAND_RESET_I(32);
    }
}
