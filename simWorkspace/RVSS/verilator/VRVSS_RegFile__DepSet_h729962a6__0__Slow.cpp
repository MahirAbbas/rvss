// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_RegFile.h"

extern const VlWide<31>/*991:0*/ VRVSS__ConstPool__CONST_h3ac70df6_0;

VL_ATTR_COLD void VRVSS_RegFile___eval_initial__TOP__RVSS__datapath_1__datapathDecode_1__regFile_1(VRVSS_RegFile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VRVSS_RegFile___eval_initial__TOP__RVSS__datapath_1__datapathDecode_1__regFile_1\n"); );
    // Body
    VL_READMEM_N(false, 32, 32, 0, VL_CVT_PACK_STR_NW(31, VRVSS__ConstPool__CONST_h3ac70df6_0)
                 ,  &(vlSelf->regFile_1), 0, ~0ULL);
}

VL_ATTR_COLD void VRVSS_RegFile___ctor_var_reset(VRVSS_RegFile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VRVSS_RegFile___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__io_writeEnable3 = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_readAddress1 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__io_readAddress2 = VL_RAND_RESET_I(5);
    vlSelf->io_readData1 = VL_RAND_RESET_I(32);
    vlSelf->io_readData2 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_writeAddress3 = VL_RAND_RESET_I(5);
    vlSelf->__PVT__io_writeData3 = VL_RAND_RESET_I(32);
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 32; ++__Vi0) {
        vlSelf->regFile_1[__Vi0] = VL_RAND_RESET_I(32);
    }
}
