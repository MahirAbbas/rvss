// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_DatapathDecode.h"
#include "VRVSS__Syms.h"

extern const VlUnpacked<QData/*39:0*/, 8> VRVSS__ConstPool__TABLE_hd08303e9_0;

VL_INLINE_OPT void VRVSS_DatapathDecode___ico_sequent__TOP__RVSS__datapath_1__datapathDecode_1__0(VRVSS_DatapathDecode* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+          VRVSS_DatapathDecode___ico_sequent__TOP__RVSS__datapath_1__datapathDecode_1__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat;
    vlSelf->__PVT__io_itype_string = VRVSS__ConstPool__TABLE_hd08303e9_0
        [__Vtableidx1];
    vlSelf->__PVT__io_extended = 0U;
    if ((4U & (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat))) {
        if ((1U & (~ ((IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat) 
                      >> 1U)))) {
            vlSelf->__PVT__io_extended = ((1U & (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat))
                                           ? (((- (IData)(
                                                          (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                           >> 0x1fU))) 
                                               << 0x15U) 
                                              | ((0x100000U 
                                                  & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                     >> 0xbU)) 
                                                 | ((0xff000U 
                                                     & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction) 
                                                    | ((0x800U 
                                                        & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                           >> 9U)) 
                                                       | (0x7feU 
                                                          & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                             >> 0x14U))))))
                                           : (((- (IData)(
                                                          (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                           >> 0x1fU))) 
                                               << 0x14U) 
                                              | (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                 >> 0xcU)));
        }
    } else if ((2U & (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat))) {
        vlSelf->__PVT__io_extended = ((1U & (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat))
                                       ? (((- (IData)(
                                                      (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                       >> 0x1fU))) 
                                           << 0xdU) 
                                          | ((0x1000U 
                                              & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                 >> 0x13U)) 
                                             | ((0x800U 
                                                 & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                    << 4U)) 
                                                | ((0x7e0U 
                                                    & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                       >> 0x14U)) 
                                                   | (0x1eU 
                                                      & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                         >> 7U))))))
                                       : (((- (IData)(
                                                      (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                       >> 0x1fU))) 
                                           << 0xcU) 
                                          | ((0xfe0U 
                                              & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                 >> 0x14U)) 
                                             | (0x1fU 
                                                & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                   >> 7U)))));
    } else if ((1U & (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat))) {
        vlSelf->__PVT__io_extended = (((- (IData)((vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                   >> 0x1fU))) 
                                       << 0xcU) | (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                   >> 0x14U));
    }
}
