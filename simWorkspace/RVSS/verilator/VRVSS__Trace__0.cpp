// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRVSS__Syms.h"


void VRVSS___024root__trace_chg_0_sub_0(VRVSS___024root* vlSelf, VerilatedVcd::Buffer* bufp);

void VRVSS___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_chg_0\n"); );
    // Init
    VRVSS___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRVSS___024root*>(voidSelf);
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (VL_UNLIKELY(!vlSymsp->__Vm_activity)) return;
    // Body
    VRVSS___024root__trace_chg_0_sub_0((&vlSymsp->TOP), bufp);
}

void VRVSS___024root__trace_chg_0_sub_0(VRVSS___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_chg_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode + 1);
    // Body
    if (VL_UNLIKELY(vlSelf->__Vm_traceActivity[0U])) {
        bufp->chgQData(oldp+0,(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__register_1_string),40);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[2U]))) {
        bufp->chgCData(oldp+2,(vlSymsp->TOP__RVSS__control_1.__PVT__io_resultSrc),2);
        bufp->chgBit(oldp+3,(vlSymsp->TOP__RVSS__control_1.__PVT__io_memWrite));
        bufp->chgCData(oldp+4,(vlSymsp->TOP__RVSS__control_1.__PVT__io_ALUControl),3);
        bufp->chgBit(oldp+5,(vlSymsp->TOP__RVSS__control_1.__PVT__io_ALUSrc));
        bufp->chgCData(oldp+6,(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat),3);
        bufp->chgBit(oldp+7,(vlSymsp->TOP__RVSS__control_1.__PVT__io_regWrite));
        bufp->chgIData(oldp+8,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1.__PVT__io_extended),32);
        bufp->chgIData(oldp+9,(vlSymsp->TOP__RVSS__datapath_1.__PVT__PCTarget),32);
        bufp->chgQData(oldp+10,(vlSymsp->TOP__RVSS__datapath_1.__PVT__io_itype_string),40);
        bufp->chgBit(oldp+12,((0U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat))));
        bufp->chgBit(oldp+13,((1U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat))));
        bufp->chgQData(oldp+14,(vlSymsp->TOP__RVSS__control_1.__PVT__io_immItype_string),40);
        bufp->chgQData(oldp+16,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1.__PVT__io_itype_string),40);
        bufp->chgQData(oldp+18,(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_operation_string),40);
        bufp->chgQData(oldp+20,(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat_string),40);
    }
    if (VL_UNLIKELY((vlSelf->__Vm_traceActivity[1U] 
                     | vlSelf->__Vm_traceActivity[3U]))) {
        bufp->chgBit(oldp+22,(vlSymsp->TOP__RVSS__control_1.__PVT__io_PCSrc));
        bufp->chgBit(oldp+23,(vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_zero));
        bufp->chgIData(oldp+24,(vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_ALUResult),32);
        bufp->chgIData(oldp+25,(vlSymsp->TOP__RVSS__datapath_1__fetch_1.__PVT__PCPlus4),32);
        bufp->chgBit(oldp+26,((0U == vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_ALUResult)));
    }
    bufp->chgBit(oldp+27,(vlSelf->clk));
    bufp->chgBit(oldp+28,(vlSelf->reset));
    bufp->chgIData(oldp+29,(vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction),32);
    bufp->chgIData(oldp+30,(vlSymsp->TOP__RVSS__datapath_1__fetch_1.__PVT__programCounter),32);
    bufp->chgIData(oldp+31,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.io_readData1),32);
    bufp->chgIData(oldp+32,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.io_readData2),32);
    bufp->chgIData(oldp+33,(vlSymsp->TOP__RVSS__datapath_1__memory_1.dataMemory
                            [(0xffU & vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_ALUResult)]),32);
    bufp->chgCData(oldp+34,(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation),6);
    bufp->chgBit(oldp+35,((0xcU == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->chgBit(oldp+36,((0x11U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->chgBit(oldp+37,((4U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->chgBit(oldp+38,((2U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->chgBit(oldp+39,((0x1bU == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->chgBit(oldp+40,((0x1cU == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->chgBit(oldp+41,((0x1eU == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->chgBit(oldp+42,((0x23U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->chgBit(oldp+43,((0x24U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->chgIData(oldp+44,(((IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_ALUSrc)
                              ? vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1.__PVT__io_extended
                              : vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.io_readData2)),32);
    bufp->chgIData(oldp+45,(((0U == (IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_resultSrc))
                              ? vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_ALUResult
                              : ((1U == (IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_resultSrc))
                                  ? vlSymsp->TOP__RVSS__datapath_1__memory_1.dataMemory
                                 [(0xffU & vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_ALUResult)]
                                  : ((2U == (IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_resultSrc))
                                      ? vlSymsp->TOP__RVSS__datapath_1__fetch_1.__PVT__programCounter
                                      : vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_ALUResult)))),32);
    bufp->chgCData(oldp+46,((0x1fU & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                      >> 0xfU))),5);
    bufp->chgCData(oldp+47,((0x1fU & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                      >> 0x14U))),5);
    bufp->chgCData(oldp+48,((0x1fU & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                      >> 7U))),5);
    bufp->chgSData(oldp+49,((vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                             >> 0x14U)),12);
    bufp->chgSData(oldp+50,(((0xfe0U & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                        >> 0x14U)) 
                             | (0x1fU & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                         >> 7U)))),12);
    bufp->chgSData(oldp+51,(((0x1000U & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                         >> 0x13U)) 
                             | ((0x800U & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                           << 4U)) 
                                | ((0x7e0U & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                              >> 0x14U)) 
                                   | (0x1eU & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                               >> 7U)))))),13);
    bufp->chgIData(oldp+52,((vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                             >> 0xcU)),20);
    bufp->chgIData(oldp+53,(((0x100000U & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                           >> 0xbU)) 
                             | ((0xff000U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction) 
                                | ((0x800U & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                              >> 9U)) 
                                   | (0x7feU & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                >> 0x14U)))))),21);
    bufp->chgIData(oldp+54,(((IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_PCSrc)
                              ? vlSymsp->TOP__RVSS__datapath_1.__PVT__PCTarget
                              : vlSymsp->TOP__RVSS__datapath_1__fetch_1.__PVT__PCPlus4)),32);
    bufp->chgCData(oldp+55,((0x7fU & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)),7);
    bufp->chgCData(oldp+56,((7U & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                   >> 0xcU))),3);
    bufp->chgCData(oldp+57,((vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                             >> 0x19U)),7);
    bufp->chgBit(oldp+58,((0U == (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                  >> 0x19U))));
    bufp->chgIData(oldp+59,(vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.io_SrcA),32);
    bufp->chgIData(oldp+60,(vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.io_SrcB),32);
    bufp->chgBit(oldp+61,(VL_LTS_III(32, vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.io_SrcA, vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.io_SrcB)));
    bufp->chgIData(oldp+62,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[0]),32);
    bufp->chgIData(oldp+63,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[1]),32);
    bufp->chgIData(oldp+64,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[2]),32);
    bufp->chgIData(oldp+65,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[3]),32);
    bufp->chgIData(oldp+66,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[4]),32);
    bufp->chgIData(oldp+67,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[5]),32);
    bufp->chgIData(oldp+68,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[6]),32);
    bufp->chgIData(oldp+69,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[7]),32);
    bufp->chgIData(oldp+70,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[8]),32);
    bufp->chgIData(oldp+71,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[9]),32);
    bufp->chgIData(oldp+72,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[10]),32);
    bufp->chgIData(oldp+73,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[11]),32);
    bufp->chgIData(oldp+74,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[12]),32);
    bufp->chgIData(oldp+75,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[13]),32);
    bufp->chgIData(oldp+76,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[14]),32);
    bufp->chgIData(oldp+77,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[15]),32);
    bufp->chgIData(oldp+78,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[16]),32);
    bufp->chgIData(oldp+79,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[17]),32);
    bufp->chgIData(oldp+80,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[18]),32);
    bufp->chgIData(oldp+81,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[19]),32);
    bufp->chgIData(oldp+82,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[20]),32);
    bufp->chgIData(oldp+83,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[21]),32);
    bufp->chgIData(oldp+84,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[22]),32);
    bufp->chgIData(oldp+85,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[23]),32);
    bufp->chgIData(oldp+86,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[24]),32);
    bufp->chgIData(oldp+87,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[25]),32);
    bufp->chgIData(oldp+88,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[26]),32);
    bufp->chgIData(oldp+89,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[27]),32);
    bufp->chgIData(oldp+90,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[28]),32);
    bufp->chgIData(oldp+91,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[29]),32);
    bufp->chgIData(oldp+92,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[30]),32);
    bufp->chgIData(oldp+93,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[31]),32);
}

void VRVSS___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_cleanup\n"); );
    // Init
    VRVSS___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRVSS___024root*>(voidSelf);
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    vlSymsp->__Vm_activity = false;
    vlSymsp->TOP.__Vm_traceActivity[0U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[1U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[2U] = 0U;
    vlSymsp->TOP.__Vm_traceActivity[3U] = 0U;
}
