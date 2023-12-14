// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Control.h"
#include "VRVSS__Syms.h"

extern const VlUnpacked<CData/*2:0*/, 128> VRVSS__ConstPool__TABLE_hf88cedf6_0;
extern const VlUnpacked<QData/*39:0*/, 8> VRVSS__ConstPool__TABLE_hd08303e9_0;
extern const VlUnpacked<CData/*0:0*/, 64> VRVSS__ConstPool__TABLE_h2c451290_0;
extern const VlUnpacked<CData/*0:0*/, 64> VRVSS__ConstPool__TABLE_had9fac6c_0;
extern const VlUnpacked<CData/*0:0*/, 32> VRVSS__ConstPool__TABLE_ha79d5493_0;

VL_INLINE_OPT void VRVSS_Control___ico_sequent__TOP__RVSS__control_1__0(VRVSS_Control* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VRVSS_Control___ico_sequent__TOP__RVSS__control_1__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*6:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*4:0*/ __Vtableidx3;
    __Vtableidx3 = 0;
    CData/*5:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    CData/*5:0*/ __Vtableidx5;
    __Vtableidx5 = 0;
    // Body
    __Vtableidx2 = (((0x24U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation)) 
                     << 6U) | (((0x23U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation)) 
                                << 5U) | (((0x1eU == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation)) 
                                           << 4U) | 
                                          (((0x1cU 
                                             == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation)) 
                                            << 3U) 
                                           | (((0x1bU 
                                                == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation)) 
                                               << 2U) 
                                              | (((4U 
                                                   == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation)) 
                                                  << 1U) 
                                                 | (0x11U 
                                                    == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))))))));
    vlSelf->__PVT__io_ALUControl = VRVSS__ConstPool__TABLE_hf88cedf6_0
        [__Vtableidx2];
    vlSelf->__PVT__io_resultSrc = 0U;
    if ((0U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat))) {
        vlSelf->__PVT__io_resultSrc = 0U;
    }
    if ((1U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat))) {
        vlSelf->__PVT__io_resultSrc = 0U;
    }
    if ((0xcU == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))) {
        vlSelf->__PVT__io_resultSrc = 1U;
    }
    if ((2U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))) {
        vlSelf->__PVT__io_resultSrc = 2U;
    }
    __Vtableidx1 = vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat;
    vlSelf->__PVT__io_immItype_string = VRVSS__ConstPool__TABLE_hd08303e9_0
        [__Vtableidx1];
    __Vtableidx5 = (((2U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation)) 
                     << 5U) | (((4U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation)) 
                                << 4U) | (((0x11U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation)) 
                                           << 3U) | 
                                          (((0xcU == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation)) 
                                            << 2U) 
                                           | (((1U 
                                                == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat)) 
                                               << 1U) 
                                              | (0U 
                                                 == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat)))))));
    vlSelf->__PVT__io_regWrite = VRVSS__ConstPool__TABLE_h2c451290_0
        [__Vtableidx5];
    __Vtableidx4 = (((2U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation)) 
                     << 5U) | (((4U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation)) 
                                << 4U) | (((0x11U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation)) 
                                           << 3U) | 
                                          (((0xcU == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation)) 
                                            << 2U) 
                                           | (((1U 
                                                == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat)) 
                                               << 1U) 
                                              | (0U 
                                                 == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat)))))));
    vlSelf->__PVT__io_memWrite = VRVSS__ConstPool__TABLE_had9fac6c_0
        [__Vtableidx4];
    __Vtableidx3 = (((4U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation)) 
                     << 4U) | (((0x11U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation)) 
                                << 3U) | (((0xcU == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation)) 
                                           << 2U) | 
                                          (((1U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat)) 
                                            << 1U) 
                                           | (0U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat))))));
    vlSelf->__PVT__io_ALUSrc = VRVSS__ConstPool__TABLE_ha79d5493_0
        [__Vtableidx3];
}

VL_INLINE_OPT void VRVSS_Control___ico_sequent__TOP__RVSS__control_1__1(VRVSS_Control* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VRVSS_Control___ico_sequent__TOP__RVSS__control_1__1\n"); );
    // Body
    vlSelf->__PVT__io_PCSrc = 0U;
    if ((4U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))) {
        if (vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_zero) {
            vlSelf->__PVT__io_PCSrc = 1U;
        }
    }
    if ((2U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))) {
        vlSelf->__PVT__io_PCSrc = 1U;
    }
}
