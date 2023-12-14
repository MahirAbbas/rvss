// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Tracing implementation internals
#include "verilated_vcd_c.h"
#include "VRVSS__Syms.h"


VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_init_sub__TOP__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->pushPrefix("RVSS", VerilatedTracePrefixType::SCOPE_MODULE);
    VRVSS___024root__trace_init_sub__TOP__RVSS__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__control_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_init_sub__TOP__RVSS__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"InstrFormat_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+96,0,"InstrFormat_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+97,0,"InstrFormat_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+98,0,"InstrFormat_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+99,0,"InstrFormat_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+100,0,"InstrFormat_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+101,0,"InstrFormat_UNDEF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+23,0,"control_1_io_PCSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"control_1_io_resultSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+4,0,"control_1_io_memWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"control_1_io_ALUControl",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+6,0,"control_1_io_ALUSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"control_1_io_immItype",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+8,0,"control_1_io_regWrite",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"datapath_1_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"datapath_1_io_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("control_1", VerilatedTracePrefixType::SCOPE_MODULE);
    VRVSS___024root__trace_init_sub__TOP__RVSS__control_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("datapath_1", VerilatedTracePrefixType::SCOPE_MODULE);
    VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__fetch_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__datapathDecode_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__execute_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep);
VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__memory_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+23,0,"io_PCSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_ResultSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+4,0,"io_MemWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_ALUControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+6,0,"io_ALUSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+8,0,"io_RegWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"io_itype",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+30,0,"io_instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"io_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"InstrFormat_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+96,0,"InstrFormat_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+97,0,"InstrFormat_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+98,0,"InstrFormat_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+99,0,"InstrFormat_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+100,0,"InstrFormat_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+101,0,"InstrFormat_UNDEF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+102,0,"memory_1_io_resultSrc",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+30,0,"fetch_1_io_instruction",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"fetch_1_io_PC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"datapathDecode_1_io_extended",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"datapathDecode_1_io_RD1E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"datapathDecode_1_io_RD2E",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"execute_1_io_RD2WriteData",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"execute_1_io_aluResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"execute_1_io_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+34,0,"memory_1_io_result",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+10,0,"PCTarget",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+103,0,"branch_immediate",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declQuad(c+11,0,"io_itype_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("fetch_1", VerilatedTracePrefixType::SCOPE_MODULE);
    VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__fetch_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("datapathDecode_1", VerilatedTracePrefixType::SCOPE_MODULE);
    VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__datapathDecode_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("execute_1", VerilatedTracePrefixType::SCOPE_MODULE);
    VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__execute_1__0(vlSelf, tracep);
    tracep->popPrefix();
    tracep->pushPrefix("memory_1", VerilatedTracePrefixType::SCOPE_MODULE);
    VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__memory_1__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__control_1__decode_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__control_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_init_sub__TOP__RVSS__control_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+30,0,"io_instrucion",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+23,0,"io_PCSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+3,0,"io_resultSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 1,0);
    tracep->declBit(c+4,0,"io_memWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_ALUControl",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+6,0,"io_ALUSrc",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"io_immItype",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+8,0,"io_regWrite",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+24,0,"io_zero",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"InstrFormat_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+96,0,"InstrFormat_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+97,0,"InstrFormat_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+98,0,"InstrFormat_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+99,0,"InstrFormat_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+100,0,"InstrFormat_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+101,0,"InstrFormat_UNDEF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+104,0,"OpCode_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+105,0,"OpCode_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+106,0,"OpCode_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+107,0,"OpCode_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+108,0,"OpCode_BEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+109,0,"OpCode_BNE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+110,0,"OpCode_BLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+111,0,"OpCode_BGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+112,0,"OpCode_BLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+113,0,"OpCode_BGEU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+114,0,"OpCode_LB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+115,0,"OpCode_LH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+116,0,"OpCode_LW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+117,0,"OpCode_LBU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+118,0,"OpCode_LHU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+119,0,"OpCode_SB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+120,0,"OpCode_SH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+121,0,"OpCode_SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+122,0,"OpCode_ADDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+123,0,"OpCode_SLTI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+124,0,"OpCode_SLTIU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+125,0,"OpCode_XORI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+126,0,"OpCode_ORI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+127,0,"OpCode_ANDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+128,0,"OpCode_SLLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+129,0,"OpCode_SRLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+130,0,"OpCode_SRAI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+131,0,"OpCode_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+132,0,"OpCode_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+133,0,"OpCode_SLL_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+134,0,"OpCode_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"OpCode_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+136,0,"OpCode_XOR_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+137,0,"OpCode_SRL_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+138,0,"OpCode_SRA_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+139,0,"OpCode_OR_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+140,0,"OpCode_AND_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+141,0,"OpCode_FENCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+142,0,"OpCode_NOOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+35,0,"decode_1_io_operation",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+7,0,"decode_1_io_outInstrFormat",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+13,0,"when_Control_l34",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+14,0,"when_Control_l41",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+36,0,"when_Control_l64",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+37,0,"when_Control_l71",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+38,0,"when_Control_l78",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+39,0,"when_Control_l87",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+40,0,"when_Control_l98",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+41,0,"when_Control_l101",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+42,0,"when_Control_l104",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+43,0,"when_Control_l107",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+44,0,"when_Control_l110",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+15,0,"io_immItype_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("decode_1", VerilatedTracePrefixType::SCOPE_MODULE);
    VRVSS___024root__trace_init_sub__TOP__RVSS__control_1__decode_1__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__memory_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__memory_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+25,0,"io_aluResult",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"io_writeData",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+34,0,"io_result",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+4,0,"io_memWrite",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+102,0,"io_resultSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__execute_1__alu_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__execute_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__execute_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+32,0,"io_RD1E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"io_RD2E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+9,0,"io_immExt",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+6,0,"io_aluSrc",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+5,0,"io_aluControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+33,0,"io_RD2WriteData",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"io_aluResult",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"io_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+45,0,"alu_1_io_SrcB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+25,0,"alu_1_io_ALUResult",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"alu_1_io_zero",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("alu_1", VerilatedTracePrefixType::SCOPE_MODULE);
    VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__execute_1__alu_1__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__datapathDecode_1__regFile_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__datapathDecode_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__datapathDecode_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+30,0,"io_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+8,0,"io_writeEnable",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+7,0,"io_itype",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+9,0,"io_extended",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+32,0,"io_RD1E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"io_RD2E",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+46,0,"io_WD3E",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+95,0,"InstrFormat_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+96,0,"InstrFormat_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+97,0,"InstrFormat_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+98,0,"InstrFormat_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+99,0,"InstrFormat_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+100,0,"InstrFormat_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+101,0,"InstrFormat_UNDEF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+47,0,"regFile_1_io_readAddress1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+48,0,"regFile_1_io_readAddress2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+49,0,"regFile_1_io_writeAddress3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+32,0,"regFile_1_io_readData1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"regFile_1_io_readData2",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+50,0,"i_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+51,0,"s_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 11,0);
    tracep->declBus(c+52,0,"b_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 12,0);
    tracep->declBus(c+53,0,"u_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 19,0);
    tracep->declBus(c+54,0,"j_imm",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 20,0);
    tracep->declQuad(c+17,0,"io_itype_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->pushPrefix("regFile_1", VerilatedTracePrefixType::SCOPE_MODULE);
    VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__datapathDecode_1__regFile_1__0(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__fetch_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__fetch_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+23,0,"io_branch",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+10,0,"io_branchTarget",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+30,0,"io_instruction",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+31,0,"io_PC",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+31,0,"programCounter",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+55,0,"PCNext",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+26,0,"PCPlus4",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
}

VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__control_1__decode_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_init_sub__TOP__RVSS__control_1__decode_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+30,0,"io_instr",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+35,0,"io_operation",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+7,0,"io_outInstrFormat",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+104,0,"OpCode_LUI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+105,0,"OpCode_AUIPC",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+106,0,"OpCode_JAL",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+107,0,"OpCode_JALR",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+108,0,"OpCode_BEQ",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+109,0,"OpCode_BNE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+110,0,"OpCode_BLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+111,0,"OpCode_BGE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+112,0,"OpCode_BLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+113,0,"OpCode_BGEU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+114,0,"OpCode_LB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+115,0,"OpCode_LH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+116,0,"OpCode_LW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+117,0,"OpCode_LBU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+118,0,"OpCode_LHU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+119,0,"OpCode_SB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+120,0,"OpCode_SH",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+121,0,"OpCode_SW",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+122,0,"OpCode_ADDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+123,0,"OpCode_SLTI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+124,0,"OpCode_SLTIU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+125,0,"OpCode_XORI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+126,0,"OpCode_ORI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+127,0,"OpCode_ANDI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+128,0,"OpCode_SLLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+129,0,"OpCode_SRLI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+130,0,"OpCode_SRAI",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+131,0,"OpCode_ADD",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+132,0,"OpCode_SUB",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+133,0,"OpCode_SLL_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+134,0,"OpCode_SLT",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+135,0,"OpCode_SLTU",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+136,0,"OpCode_XOR_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+137,0,"OpCode_SRL_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+138,0,"OpCode_SRA_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+139,0,"OpCode_OR_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+140,0,"OpCode_AND_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+141,0,"OpCode_FENCE",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+142,0,"OpCode_NOOP",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+95,0,"InstrFormat_R",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+96,0,"InstrFormat_I",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+97,0,"InstrFormat_S",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+98,0,"InstrFormat_B",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+99,0,"InstrFormat_U",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+100,0,"InstrFormat_J",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+101,0,"InstrFormat_UNDEF",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::PARAMETER, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+143,0,"register_1",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 5,0);
    tracep->declBus(c+56,0,"decodeInstrBits_opcode",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBus(c+57,0,"decodeInstrBits_funct3",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+58,0,"decodeInstrBits_funct7",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 6,0);
    tracep->declBit(c+59,0,"when_Decode_l45",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declQuad(c+19,0,"io_operation_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+21,0,"io_outInstrFormat_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
    tracep->declQuad(c+1,0,"register_1_string",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, false,-1, 39,0);
}

VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__execute_1__alu_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__execute_1__alu_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBus(c+60,0,"io_SrcA",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+61,0,"io_SrcB",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+5,0,"io_ALUControl",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 2,0);
    tracep->declBus(c+25,0,"io_ALUResult",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+24,0,"io_zero",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+27,0,"when_ALU_l15",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+62,0,"when_ALU_l37",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
}

VL_ATTR_COLD void VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__datapathDecode_1__regFile_1__0(VRVSS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_init_sub__TOP__RVSS__datapath_1__datapathDecode_1__regFile_1__0\n"); );
    // Init
    const int c = vlSymsp->__Vm_baseCode;
    // Body
    tracep->declBit(c+8,0,"io_writeEnable3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBus(c+47,0,"io_readAddress1",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+48,0,"io_readAddress2",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+32,0,"io_readData1",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+33,0,"io_readData2",-1, VerilatedTraceSigDirection::OUTPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBus(c+49,0,"io_writeAddress3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 4,0);
    tracep->declBus(c+46,0,"io_writeData3",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1, 31,0);
    tracep->declBit(c+28,0,"clk",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->declBit(c+29,0,"reset",-1, VerilatedTraceSigDirection::INPUT, VerilatedTraceSigKind::WIRE, VerilatedTraceSigType::LOGIC, false,-1);
    tracep->pushPrefix("regFile_1", VerilatedTracePrefixType::ARRAY_UNPACKED);
    for (int i = 0; i < 32; ++i) {
        tracep->declBus(c+63+i*1,0,"",-1, VerilatedTraceSigDirection::NONE, VerilatedTraceSigKind::VAR, VerilatedTraceSigType::LOGIC, true,(i+0), 31,0);
    }
    tracep->popPrefix();
}

VL_ATTR_COLD void VRVSS___024root__trace_init_top(VRVSS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_init_top\n"); );
    // Body
    VRVSS___024root__trace_init_sub__TOP__0(vlSelf, tracep);
}

VL_ATTR_COLD void VRVSS___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
VL_ATTR_COLD void VRVSS___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRVSS___024root__trace_chg_0(void* voidSelf, VerilatedVcd::Buffer* bufp);
void VRVSS___024root__trace_cleanup(void* voidSelf, VerilatedVcd* /*unused*/);

VL_ATTR_COLD void VRVSS___024root__trace_register(VRVSS___024root* vlSelf, VerilatedVcd* tracep) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_register\n"); );
    // Body
    tracep->addConstCb(&VRVSS___024root__trace_const_0, 0U, vlSelf);
    tracep->addFullCb(&VRVSS___024root__trace_full_0, 0U, vlSelf);
    tracep->addChgCb(&VRVSS___024root__trace_chg_0, 0U, vlSelf);
    tracep->addCleanupCb(&VRVSS___024root__trace_cleanup, vlSelf);
}

VL_ATTR_COLD void VRVSS___024root__trace_const_0_sub_0(VRVSS___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRVSS___024root__trace_const_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_const_0\n"); );
    // Init
    VRVSS___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRVSS___024root*>(voidSelf);
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRVSS___024root__trace_const_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRVSS___024root__trace_const_0_sub_0(VRVSS___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_const_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullCData(oldp+95,(0U),3);
    bufp->fullCData(oldp+96,(1U),3);
    bufp->fullCData(oldp+97,(2U),3);
    bufp->fullCData(oldp+98,(3U),3);
    bufp->fullCData(oldp+99,(4U),3);
    bufp->fullCData(oldp+100,(5U),3);
    bufp->fullCData(oldp+101,(6U),3);
    bufp->fullBit(oldp+102,(vlSymsp->TOP__RVSS__datapath_1.__PVT__memory_1_io_resultSrc));
    bufp->fullIData(oldp+103,(vlSymsp->TOP__RVSS__datapath_1.__PVT__branch_immediate),32);
    bufp->fullCData(oldp+104,(0U),6);
    bufp->fullCData(oldp+105,(1U),6);
    bufp->fullCData(oldp+106,(2U),6);
    bufp->fullCData(oldp+107,(3U),6);
    bufp->fullCData(oldp+108,(4U),6);
    bufp->fullCData(oldp+109,(5U),6);
    bufp->fullCData(oldp+110,(6U),6);
    bufp->fullCData(oldp+111,(7U),6);
    bufp->fullCData(oldp+112,(8U),6);
    bufp->fullCData(oldp+113,(9U),6);
    bufp->fullCData(oldp+114,(0xaU),6);
    bufp->fullCData(oldp+115,(0xbU),6);
    bufp->fullCData(oldp+116,(0xcU),6);
    bufp->fullCData(oldp+117,(0xdU),6);
    bufp->fullCData(oldp+118,(0xeU),6);
    bufp->fullCData(oldp+119,(0xfU),6);
    bufp->fullCData(oldp+120,(0x10U),6);
    bufp->fullCData(oldp+121,(0x11U),6);
    bufp->fullCData(oldp+122,(0x12U),6);
    bufp->fullCData(oldp+123,(0x13U),6);
    bufp->fullCData(oldp+124,(0x14U),6);
    bufp->fullCData(oldp+125,(0x15U),6);
    bufp->fullCData(oldp+126,(0x16U),6);
    bufp->fullCData(oldp+127,(0x17U),6);
    bufp->fullCData(oldp+128,(0x18U),6);
    bufp->fullCData(oldp+129,(0x19U),6);
    bufp->fullCData(oldp+130,(0x1aU),6);
    bufp->fullCData(oldp+131,(0x1bU),6);
    bufp->fullCData(oldp+132,(0x1cU),6);
    bufp->fullCData(oldp+133,(0x1dU),6);
    bufp->fullCData(oldp+134,(0x1eU),6);
    bufp->fullCData(oldp+135,(0x1fU),6);
    bufp->fullCData(oldp+136,(0x20U),6);
    bufp->fullCData(oldp+137,(0x21U),6);
    bufp->fullCData(oldp+138,(0x22U),6);
    bufp->fullCData(oldp+139,(0x23U),6);
    bufp->fullCData(oldp+140,(0x24U),6);
    bufp->fullCData(oldp+141,(0x25U),6);
    bufp->fullCData(oldp+142,(0x26U),6);
    bufp->fullCData(oldp+143,(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__register_1),6);
}

VL_ATTR_COLD void VRVSS___024root__trace_full_0_sub_0(VRVSS___024root* vlSelf, VerilatedVcd::Buffer* bufp);

VL_ATTR_COLD void VRVSS___024root__trace_full_0(void* voidSelf, VerilatedVcd::Buffer* bufp) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_full_0\n"); );
    // Init
    VRVSS___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRVSS___024root*>(voidSelf);
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    // Body
    VRVSS___024root__trace_full_0_sub_0((&vlSymsp->TOP), bufp);
}

VL_ATTR_COLD void VRVSS___024root__trace_full_0_sub_0(VRVSS___024root* vlSelf, VerilatedVcd::Buffer* bufp) {
    if (false && vlSelf) {}  // Prevent unused
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VRVSS___024root__trace_full_0_sub_0\n"); );
    // Init
    uint32_t* const oldp VL_ATTR_UNUSED = bufp->oldp(vlSymsp->__Vm_baseCode);
    // Body
    bufp->fullQData(oldp+1,(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__register_1_string),40);
    bufp->fullCData(oldp+3,(vlSymsp->TOP__RVSS__control_1.__PVT__io_resultSrc),2);
    bufp->fullBit(oldp+4,(vlSymsp->TOP__RVSS__control_1.__PVT__io_memWrite));
    bufp->fullCData(oldp+5,(vlSymsp->TOP__RVSS__control_1.__PVT__io_ALUControl),3);
    bufp->fullBit(oldp+6,(vlSymsp->TOP__RVSS__control_1.__PVT__io_ALUSrc));
    bufp->fullCData(oldp+7,(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat),3);
    bufp->fullBit(oldp+8,(vlSymsp->TOP__RVSS__control_1.__PVT__io_regWrite));
    bufp->fullIData(oldp+9,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1.__PVT__io_extended),32);
    bufp->fullIData(oldp+10,(vlSymsp->TOP__RVSS__datapath_1.__PVT__PCTarget),32);
    bufp->fullQData(oldp+11,(vlSymsp->TOP__RVSS__datapath_1.__PVT__io_itype_string),40);
    bufp->fullBit(oldp+13,((0U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat))));
    bufp->fullBit(oldp+14,((1U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat))));
    bufp->fullQData(oldp+15,(vlSymsp->TOP__RVSS__control_1.__PVT__io_immItype_string),40);
    bufp->fullQData(oldp+17,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1.__PVT__io_itype_string),40);
    bufp->fullQData(oldp+19,(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_operation_string),40);
    bufp->fullQData(oldp+21,(vlSymsp->TOP__RVSS__control_1__decode_1.__PVT__io_outInstrFormat_string),40);
    bufp->fullBit(oldp+23,(vlSymsp->TOP__RVSS__control_1.__PVT__io_PCSrc));
    bufp->fullBit(oldp+24,(vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_zero));
    bufp->fullIData(oldp+25,(vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_ALUResult),32);
    bufp->fullIData(oldp+26,(vlSymsp->TOP__RVSS__datapath_1__fetch_1.__PVT__PCPlus4),32);
    bufp->fullBit(oldp+27,((0U == vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_ALUResult)));
    bufp->fullBit(oldp+28,(vlSelf->clk));
    bufp->fullBit(oldp+29,(vlSelf->reset));
    bufp->fullIData(oldp+30,(vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction),32);
    bufp->fullIData(oldp+31,(vlSymsp->TOP__RVSS__datapath_1__fetch_1.__PVT__programCounter),32);
    bufp->fullIData(oldp+32,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.io_readData1),32);
    bufp->fullIData(oldp+33,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.io_readData2),32);
    bufp->fullIData(oldp+34,(vlSymsp->TOP__RVSS__datapath_1__memory_1.dataMemory
                             [(0xffU & vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_ALUResult)]),32);
    bufp->fullCData(oldp+35,(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation),6);
    bufp->fullBit(oldp+36,((0xcU == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->fullBit(oldp+37,((0x11U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->fullBit(oldp+38,((4U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->fullBit(oldp+39,((2U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->fullBit(oldp+40,((0x1bU == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->fullBit(oldp+41,((0x1cU == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->fullBit(oldp+42,((0x1eU == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->fullBit(oldp+43,((0x23U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->fullBit(oldp+44,((0x24U == (IData)(vlSymsp->TOP__RVSS__control_1__decode_1.io_operation))));
    bufp->fullIData(oldp+45,(((IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_ALUSrc)
                               ? vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1.__PVT__io_extended
                               : vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.io_readData2)),32);
    bufp->fullIData(oldp+46,(((0U == (IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_resultSrc))
                               ? vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_ALUResult
                               : ((1U == (IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_resultSrc))
                                   ? vlSymsp->TOP__RVSS__datapath_1__memory_1.dataMemory
                                  [(0xffU & vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_ALUResult)]
                                   : ((2U == (IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_resultSrc))
                                       ? vlSymsp->TOP__RVSS__datapath_1__fetch_1.__PVT__programCounter
                                       : vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.__PVT__io_ALUResult)))),32);
    bufp->fullCData(oldp+47,((0x1fU & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                       >> 0xfU))),5);
    bufp->fullCData(oldp+48,((0x1fU & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                       >> 0x14U))),5);
    bufp->fullCData(oldp+49,((0x1fU & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                       >> 7U))),5);
    bufp->fullSData(oldp+50,((vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                              >> 0x14U)),12);
    bufp->fullSData(oldp+51,(((0xfe0U & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                         >> 0x14U)) 
                              | (0x1fU & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                          >> 7U)))),12);
    bufp->fullSData(oldp+52,(((0x1000U & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                          >> 0x13U)) 
                              | ((0x800U & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                            << 4U)) 
                                 | ((0x7e0U & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                               >> 0x14U)) 
                                    | (0x1eU & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                >> 7U)))))),13);
    bufp->fullIData(oldp+53,((vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                              >> 0xcU)),20);
    bufp->fullIData(oldp+54,(((0x100000U & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                            >> 0xbU)) 
                              | ((0xff000U & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction) 
                                 | ((0x800U & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                               >> 9U)) 
                                    | (0x7feU & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                                 >> 0x14U)))))),21);
    bufp->fullIData(oldp+55,(((IData)(vlSymsp->TOP__RVSS__control_1.__PVT__io_PCSrc)
                               ? vlSymsp->TOP__RVSS__datapath_1.__PVT__PCTarget
                               : vlSymsp->TOP__RVSS__datapath_1__fetch_1.__PVT__PCPlus4)),32);
    bufp->fullCData(oldp+56,((0x7fU & vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction)),7);
    bufp->fullCData(oldp+57,((7U & (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                    >> 0xcU))),3);
    bufp->fullCData(oldp+58,((vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                              >> 0x19U)),7);
    bufp->fullBit(oldp+59,((0U == (vlSymsp->TOP__RVSS__datapath_1__fetch_1.io_instruction 
                                   >> 0x19U))));
    bufp->fullIData(oldp+60,(vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.io_SrcA),32);
    bufp->fullIData(oldp+61,(vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.io_SrcB),32);
    bufp->fullBit(oldp+62,(VL_LTS_III(32, vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.io_SrcA, vlSymsp->TOP__RVSS__datapath_1__execute_1__alu_1.io_SrcB)));
    bufp->fullIData(oldp+63,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[0]),32);
    bufp->fullIData(oldp+64,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[1]),32);
    bufp->fullIData(oldp+65,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[2]),32);
    bufp->fullIData(oldp+66,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[3]),32);
    bufp->fullIData(oldp+67,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[4]),32);
    bufp->fullIData(oldp+68,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[5]),32);
    bufp->fullIData(oldp+69,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[6]),32);
    bufp->fullIData(oldp+70,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[7]),32);
    bufp->fullIData(oldp+71,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[8]),32);
    bufp->fullIData(oldp+72,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[9]),32);
    bufp->fullIData(oldp+73,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[10]),32);
    bufp->fullIData(oldp+74,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[11]),32);
    bufp->fullIData(oldp+75,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[12]),32);
    bufp->fullIData(oldp+76,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[13]),32);
    bufp->fullIData(oldp+77,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[14]),32);
    bufp->fullIData(oldp+78,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[15]),32);
    bufp->fullIData(oldp+79,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[16]),32);
    bufp->fullIData(oldp+80,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[17]),32);
    bufp->fullIData(oldp+81,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[18]),32);
    bufp->fullIData(oldp+82,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[19]),32);
    bufp->fullIData(oldp+83,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[20]),32);
    bufp->fullIData(oldp+84,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[21]),32);
    bufp->fullIData(oldp+85,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[22]),32);
    bufp->fullIData(oldp+86,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[23]),32);
    bufp->fullIData(oldp+87,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[24]),32);
    bufp->fullIData(oldp+88,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[25]),32);
    bufp->fullIData(oldp+89,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[26]),32);
    bufp->fullIData(oldp+90,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[27]),32);
    bufp->fullIData(oldp+91,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[28]),32);
    bufp->fullIData(oldp+92,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[29]),32);
    bufp->fullIData(oldp+93,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[30]),32);
    bufp->fullIData(oldp+94,(vlSymsp->TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1[31]),32);
}
