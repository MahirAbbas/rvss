// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS__Syms.h"
#include "VRVSS___024root.h"

VL_ATTR_COLD void VRVSS_Memory___eval_initial__TOP__RVSS__datapath_1__memory_1(VRVSS_Memory* vlSelf);
VL_ATTR_COLD void VRVSS_Fetch___eval_initial__TOP__RVSS__datapath_1__fetch_1(VRVSS_Fetch* vlSelf);
VL_ATTR_COLD void VRVSS_RegFile___eval_initial__TOP__RVSS__datapath_1__datapathDecode_1__regFile_1(VRVSS_RegFile* vlSelf);

VL_ATTR_COLD void VRVSS___024root___eval_initial(VRVSS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root___eval_initial\n"); );
    // Body
    VRVSS_Memory___eval_initial__TOP__RVSS__datapath_1__memory_1((&vlSymsp->TOP__RVSS__datapath_1__memory_1));
    VRVSS_Fetch___eval_initial__TOP__RVSS__datapath_1__fetch_1((&vlSymsp->TOP__RVSS__datapath_1__fetch_1));
    VRVSS_RegFile___eval_initial__TOP__RVSS__datapath_1__datapathDecode_1__regFile_1((&vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1));
    vlSelf->__Vtrigprevexpr___TOP__clk__0 = vlSelf->clk;
    vlSelf->__Vtrigprevexpr___TOP__reset__0 = vlSelf->reset;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VRVSS___024root___dump_triggers__stl(VRVSS___024root* vlSelf);
#endif  // VL_DEBUG

VL_ATTR_COLD void VRVSS___024root___eval_triggers__stl(VRVSS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root___eval_triggers__stl\n"); );
    // Body
    vlSelf->__VstlTriggered.set(0U, (IData)(vlSelf->__VstlFirstIteration));
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VRVSS___024root___dump_triggers__stl(vlSelf);
    }
#endif
}

VL_ATTR_COLD void VRVSS_Decode___stl_sequent__TOP__RVSS__control_1__decode_1__0(VRVSS_Decode* vlSelf);
void VRVSS_Fetch___ico_sequent__TOP__RVSS__datapath_1__fetch_1__0(VRVSS_Fetch* vlSelf);
void VRVSS_RegFile___ico_sequent__TOP__RVSS__datapath_1__datapathDecode_1__regFile_1__0(VRVSS_RegFile* vlSelf);
void VRVSS_Decode___ico_sequent__TOP__RVSS__control_1__decode_1__0(VRVSS_Decode* vlSelf);
void VRVSS_Decode___ico_sequent__TOP__RVSS__control_1__decode_1__1(VRVSS_Decode* vlSelf);
void VRVSS_Execute___ico_sequent__TOP__RVSS__datapath_1__execute_1__0(VRVSS_Execute* vlSelf);
void VRVSS_Control___ico_sequent__TOP__RVSS__control_1__0(VRVSS_Control* vlSelf);
void VRVSS_Datapath___ico_sequent__TOP__RVSS__datapath_1__0(VRVSS_Datapath* vlSelf);
void VRVSS_DatapathDecode___ico_sequent__TOP__RVSS__datapath_1__datapathDecode_1__0(VRVSS_DatapathDecode* vlSelf);
void VRVSS_Memory___ico_sequent__TOP__RVSS__datapath_1__memory_1__0(VRVSS_Memory* vlSelf);
void VRVSS_Datapath___ico_sequent__TOP__RVSS__datapath_1__1(VRVSS_Datapath* vlSelf);
void VRVSS_Execute___ico_sequent__TOP__RVSS__datapath_1__execute_1__1(VRVSS_Execute* vlSelf);
void VRVSS_ALU___ico_sequent__TOP__RVSS__datapath_1__execute_1__alu_1__0(VRVSS_ALU* vlSelf);
void VRVSS_Control___ico_sequent__TOP__RVSS__control_1__1(VRVSS_Control* vlSelf);
void VRVSS_Fetch___ico_sequent__TOP__RVSS__datapath_1__fetch_1__1(VRVSS_Fetch* vlSelf);

VL_ATTR_COLD void VRVSS___024root___eval_stl(VRVSS___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root___eval_stl\n"); );
    // Body
    if ((1ULL & vlSelf->__VstlTriggered.word(0U))) {
        VRVSS_Decode___stl_sequent__TOP__RVSS__control_1__decode_1__0((&vlSymsp->TOP__RVSS__control_1__decode_1));
        vlSelf->__Vm_traceActivity[3U] = 1U;
        vlSelf->__Vm_traceActivity[2U] = 1U;
        vlSelf->__Vm_traceActivity[1U] = 1U;
        vlSelf->__Vm_traceActivity[0U] = 1U;
        VRVSS_Fetch___ico_sequent__TOP__RVSS__datapath_1__fetch_1__0((&vlSymsp->TOP__RVSS__datapath_1__fetch_1));
        VRVSS_RegFile___ico_sequent__TOP__RVSS__datapath_1__datapathDecode_1__regFile_1__0((&vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1));
        VRVSS_Decode___ico_sequent__TOP__RVSS__control_1__decode_1__0((&vlSymsp->TOP__RVSS__control_1__decode_1));
        VRVSS_Decode___ico_sequent__TOP__RVSS__control_1__decode_1__1((&vlSymsp->TOP__RVSS__control_1__decode_1));
        VRVSS_Execute___ico_sequent__TOP__RVSS__datapath_1__execute_1__0((&vlSymsp->TOP__RVSS__datapath_1__execute_1));
        VRVSS_Control___ico_sequent__TOP__RVSS__control_1__0((&vlSymsp->TOP__RVSS__control_1));
        VRVSS_Datapath___ico_sequent__TOP__RVSS__datapath_1__0((&vlSymsp->TOP__RVSS__datapath_1));
        VRVSS_DatapathDecode___ico_sequent__TOP__RVSS__datapath_1__datapathDecode_1__0((&vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1));
        VRVSS_Memory___ico_sequent__TOP__RVSS__datapath_1__memory_1__0((&vlSymsp->TOP__RVSS__datapath_1__memory_1));
        VRVSS_Datapath___ico_sequent__TOP__RVSS__datapath_1__1((&vlSymsp->TOP__RVSS__datapath_1));
        VRVSS_Execute___ico_sequent__TOP__RVSS__datapath_1__execute_1__1((&vlSymsp->TOP__RVSS__datapath_1__execute_1));
        VRVSS_ALU___ico_sequent__TOP__RVSS__datapath_1__execute_1__alu_1__0((&vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1));
        VRVSS_Control___ico_sequent__TOP__RVSS__control_1__1((&vlSymsp->TOP__RVSS__control_1));
        VRVSS_Fetch___ico_sequent__TOP__RVSS__datapath_1__fetch_1__1((&vlSymsp->TOP__RVSS__datapath_1__fetch_1));
    }
}
