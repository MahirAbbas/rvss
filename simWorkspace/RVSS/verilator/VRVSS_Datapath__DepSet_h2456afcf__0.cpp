// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Datapath.h"
#include "VRVSS__Syms.h"

extern const VlUnpacked<QData/*39:0*/, 8> VRVSS__ConstPool__TABLE_hd08303e9_0;

VL_INLINE_OPT void VRVSS_Datapath___ico_sequent__TOP__RVSS__datapath_1__0(VRVSS_Datapath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VRVSS_Datapath___ico_sequent__TOP__RVSS__datapath_1__0\n"); );
    // Init
    CData/*2:0*/ __Vtableidx1;
    __Vtableidx1 = 0;
    // Body
    __Vtableidx1 = vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat;
    vlSelf->__PVT__io_itype_string = VRVSS__ConstPool__TABLE_hd08303e9_0
        [__Vtableidx1];
}

VL_INLINE_OPT void VRVSS_Datapath___ico_sequent__TOP__RVSS__datapath_1__1(VRVSS_Datapath* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+        VRVSS_Datapath___ico_sequent__TOP__RVSS__datapath_1__1\n"); );
    // Body
    vlSelf->__PVT__PCTarget = (vlSymsp->TOP__RVSS__datapath_1__fetch_1.__PVT__programCounter 
                               + VL_SHIFTR_III(32,32,32, vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1.__PVT__io_extended, 2U));
}
