// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_RegFile.h"
#include "VRVSS__Syms.h"

VL_INLINE_OPT void VRVSS_RegFile___ico_sequent__TOP__RVSS__datapath_1__datapathDecode_1__regFile_1__0(VRVSS_RegFile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VRVSS_RegFile___ico_sequent__TOP__RVSS__datapath_1__datapathDecode_1__regFile_1__0\n"); );
    // Body
    vlSelf->io_readData1 = vlSelf->regFile_1[(0x1fU 
                                              & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                 >> 0xfU))];
    vlSelf->io_readData2 = vlSelf->regFile_1[(0x1fU 
                                              & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                 >> 0x14U))];
}

VL_INLINE_OPT void VRVSS_RegFile___nba_sequent__TOP__RVSS__datapath_1__datapathDecode_1__regFile_1__0(VRVSS_RegFile* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+            VRVSS_RegFile___nba_sequent__TOP__RVSS__datapath_1__datapathDecode_1__regFile_1__0\n"); );
    // Init
    CData/*4:0*/ __Vdlyvdim0__regFile_1__v0;
    __Vdlyvdim0__regFile_1__v0 = 0;
    IData/*31:0*/ __Vdlyvval__regFile_1__v0;
    __Vdlyvval__regFile_1__v0 = 0;
    CData/*0:0*/ __Vdlyvset__regFile_1__v0;
    __Vdlyvset__regFile_1__v0 = 0;
    // Body
    __Vdlyvset__regFile_1__v0 = 0U;
    if (vlSymsp->TOP__RVSS__control_1.__PVT__io_regWrite) {
        __Vdlyvval__regFile_1__v0 = ((0U == (IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_resultSrc))
                                      ? vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_ALUResult
                                      : ((1U == (IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_resultSrc))
                                          ? vlSymsp->TOP__RVSS__datapath_1__memory_1.dataMemory
                                         [(0xffU & vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_ALUResult)]
                                          : ((2U == (IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_resultSrc))
                                              ? vlSymsp->TOP__RVSS__datapath_1__fetch_1.__PVT__programCounter
                                              : vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_ALUResult)));
        __Vdlyvset__regFile_1__v0 = 1U;
        __Vdlyvdim0__regFile_1__v0 = (0x1fU & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                               >> 7U));
    }
    if (__Vdlyvset__regFile_1__v0) {
        vlSelf->regFile_1[__Vdlyvdim0__regFile_1__v0] 
            = __Vdlyvval__regFile_1__v0;
    }
}
