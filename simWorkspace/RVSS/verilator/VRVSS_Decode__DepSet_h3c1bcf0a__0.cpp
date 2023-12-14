// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Decode.h"
#include "VRVSS__Syms.h"

VL_INLINE_OPT void VRVSS_Decode___ico_sequent__TOP__RVSS__control_1__decode_1__0(VRVSS_Decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_Decode___ico_sequent__TOP__RVSS__control_1__decode_1__0\n"); );
    // Body
    vlSelf->io_operation = 0x26U;
    if ((0x40U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
        if ((0x20U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
            if ((0x10U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                vlSelf->io_operation = 0x26U;
            } else if ((8U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                vlSelf->io_operation = ((4U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                         ? ((2U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                             ? ((1U 
                                                 & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                                 ? 2U
                                                 : 0x26U)
                                             : 0x26U)
                                         : 0x26U);
            } else if ((4U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                vlSelf->io_operation = ((2U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                         ? ((1U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                             ? 3U : 0x26U)
                                         : 0x26U);
            } else if ((2U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                if ((1U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                    if ((0x4000U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                        vlSelf->io_operation = ((0x2000U 
                                                 & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                                 ? 
                                                ((0x1000U 
                                                  & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                                  ? 9U
                                                  : 8U)
                                                 : 
                                                ((0x1000U 
                                                  & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                                  ? 7U
                                                  : 6U));
                    } else if ((1U & (~ (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                         >> 0xdU)))) {
                        vlSelf->io_operation = ((0x1000U 
                                                 & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                                 ? 5U
                                                 : 4U);
                    }
                } else {
                    vlSelf->io_operation = 0x26U;
                }
            } else {
                vlSelf->io_operation = 0x26U;
            }
        } else {
            vlSelf->io_operation = 0x26U;
        }
    } else if ((0x20U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
        if ((0x10U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
            if ((8U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                vlSelf->io_operation = 0x26U;
            } else if ((4U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                vlSelf->io_operation = ((2U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                         ? ((1U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                             ? 0U : 0x26U)
                                         : 0x26U);
            } else if ((2U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                if ((1U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                    if ((0x4000U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                        if ((0x2000U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                            vlSelf->io_operation = 
                                ((0x1000U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                  ? 0x24U : 0x23U);
                        } else if ((0x1000U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                            if ((0U == (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                        >> 0x19U))) {
                                vlSelf->io_operation = 0x21U;
                            } else if ((0x20U == (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                  >> 0x19U))) {
                                vlSelf->io_operation = 0x22U;
                            }
                        } else {
                            vlSelf->io_operation = 0x20U;
                        }
                    } else if ((0x2000U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                        vlSelf->io_operation = ((0x1000U 
                                                 & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                                 ? 0x1fU
                                                 : 0x1eU);
                    } else if ((0x1000U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                        vlSelf->io_operation = 0x1dU;
                    } else if ((0U == (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                       >> 0x19U))) {
                        vlSelf->io_operation = 0x1bU;
                    } else if ((0x20U == (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                          >> 0x19U))) {
                        vlSelf->io_operation = 0x1cU;
                    }
                } else {
                    vlSelf->io_operation = 0x26U;
                }
            } else {
                vlSelf->io_operation = 0x26U;
            }
        } else if ((8U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
            vlSelf->io_operation = 0x26U;
        } else if ((4U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
            vlSelf->io_operation = 0x26U;
        } else if ((2U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
            if ((1U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                if ((0U == (7U & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                  >> 0xcU)))) {
                    vlSelf->io_operation = 0xfU;
                } else if ((1U == (7U & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                         >> 0xcU)))) {
                    vlSelf->io_operation = 0x10U;
                } else if ((2U == (7U & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                         >> 0xcU)))) {
                    vlSelf->io_operation = 0x11U;
                }
            } else {
                vlSelf->io_operation = 0x26U;
            }
        } else {
            vlSelf->io_operation = 0x26U;
        }
    } else if ((0x10U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
        vlSelf->io_operation = ((8U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                 ? 0x26U : ((4U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                             ? ((2U 
                                                 & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                                 ? 
                                                ((1U 
                                                  & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                                  ? 1U
                                                  : 0x26U)
                                                 : 0x26U)
                                             : ((2U 
                                                 & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                                 ? 
                                                ((1U 
                                                  & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                                  ? 
                                                 ((0x4000U 
                                                   & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                                   ? 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                                     ? 0x17U
                                                     : 0x16U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                                     ? 
                                                    ((0U 
                                                      == 
                                                      (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                       >> 0x19U))
                                                      ? 0x19U
                                                      : 0x1aU)
                                                     : 0x15U))
                                                   : 
                                                  ((0x2000U 
                                                    & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                                    ? 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                                     ? 0x14U
                                                     : 0x13U)
                                                    : 
                                                   ((0x1000U 
                                                     & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                                     ? 0x18U
                                                     : 0x12U)))
                                                  : 0x26U)
                                                 : 0x26U)));
    } else if ((8U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
        vlSelf->io_operation = 0x26U;
    } else if ((4U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
        vlSelf->io_operation = 0x26U;
    } else if ((2U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
        if ((1U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
            if ((0x4000U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                if ((1U & (~ (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                              >> 0xdU)))) {
                    vlSelf->io_operation = ((0x1000U 
                                             & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                             ? 0xeU
                                             : 0xdU);
                }
            } else if ((0x2000U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)) {
                if ((1U & (~ (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                              >> 0xcU)))) {
                    vlSelf->io_operation = 0xcU;
                }
            } else {
                vlSelf->io_operation = ((0x1000U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)
                                         ? 0xbU : 0xaU);
            }
        } else {
            vlSelf->io_operation = 0x26U;
        }
    } else {
        vlSelf->io_operation = 0x26U;
    }
}

extern const VlUnpacked<CData/*2:0*/, 128> VRVSS__ConstPool__TABLE_hb89f8004_0;
extern const VlUnpacked<QData/*39:0*/, 64> VRVSS__ConstPool__TABLE_h0230497b_0;
extern const VlUnpacked<QData/*39:0*/, 8> VRVSS__ConstPool__TABLE_hd08303e9_0;

VL_INLINE_OPT void VRVSS_Decode___ico_sequent__TOP__RVSS__control_1__decode_1__1(VRVSS_Decode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_Decode___ico_sequent__TOP__RVSS__control_1__decode_1__1\n"); );
    // Init
    CData/*5:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    CData/*2:0*/ __Vtableidx2;
    __Vtableidx2 = 0;
    CData/*6:0*/ __Vtableidx4;
    __Vtableidx4 = 0;
    // Body
    __Vtableidx4 = (0x7fU & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction);
    vlSelf->__PVT__io_outInstrFormat = VRVSS__ConstPool__TABLE_hb89f8004_0
        [__Vtableidx4];
    __Vtableidx1 = vlSelf->io_operation;
    vlSelf->__PVT__io_operation_string = VRVSS__ConstPool__TABLE_h0230497b_0
        [__Vtableidx1];
    __Vtableidx2 = vlSelf->__PVT__io_outInstrFormat;
    vlSelf->__PVT__io_outInstrFormat_string = VRVSS__ConstPool__TABLE_hd08303e9_0
        [__Vtableidx2];
}
