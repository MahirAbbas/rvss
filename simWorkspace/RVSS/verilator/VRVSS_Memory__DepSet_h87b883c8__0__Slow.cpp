// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Memory.h"

extern const VlWide<27>/*863:0*/ VRVSS__ConstPool__CONST_hf893f122_0;

VL_ATTR_COLD void VRVSS_Memory___eval_initial__TOP__RVSS__datapath_1__memory_1(VRVSS_Memory* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_Memory___eval_initial__TOP__RVSS__datapath_1__memory_1\n"); );
    // Body
    VL_READMEM_N(false, 32, 256, 0, VL_CVT_PACK_STR_NW(27, VRVSS__ConstPool__CONST_hf893f122_0)
                 ,  &(vlSelf->dataMemory), 0, ~0ULL);
}

VL_ATTR_COLD void VRVSS_Memory___ctor_var_reset(VRVSS_Memory* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_Memory___ctor_var_reset\n"); );
    // Body
    vlSelf->__PVT__io_aluResult = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_writeData = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_result = VL_RAND_RESET_I(32);
    vlSelf->__PVT__io_memWrite = VL_RAND_RESET_I(1);
    vlSelf->__PVT__io_resultSrc = VL_RAND_RESET_I(1);
    vlSelf->__PVT__clk = 0;
    vlSelf->__PVT__reset = VL_RAND_RESET_I(1);
    vlSelf->__PVT___zz_1 = VL_RAND_RESET_I(1);
    for (int __Vi0 = 0; __Vi0 < 256; ++__Vi0) {
        vlSelf->dataMemory[__Vi0] = VL_RAND_RESET_I(32);
    }
    vlSelf->__Vdlyvdim0__dataMemory__v0 = 0;
    vlSelf->__Vdlyvval__dataMemory__v0 = VL_RAND_RESET_I(32);
    vlSelf->__Vdlyvset__dataMemory__v0 = 0;
}
