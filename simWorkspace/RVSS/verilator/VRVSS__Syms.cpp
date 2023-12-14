// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VRVSS__pch.h"
#include "VRVSS.h"
#include "VRVSS___024root.h"
#include "VRVSS_RVSS.h"
#include "VRVSS_Datapath.h"
#include "VRVSS_Control.h"
#include "VRVSS_Memory.h"
#include "VRVSS_Execute.h"
#include "VRVSS_DatapathDecode.h"
#include "VRVSS_Fetch.h"
#include "VRVSS_Decode.h"
#include "VRVSS_ALU.h"
#include "VRVSS_RegFile.h"

// FUNCTIONS
VRVSS__Syms::~VRVSS__Syms()
{
}

VRVSS__Syms::VRVSS__Syms(VerilatedContext* contextp, const char* namep, VRVSS* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
    , TOP__RVSS{this, Verilated::catName(namep, "RVSS")}
    , TOP__RVSS__control_1{this, Verilated::catName(namep, "RVSS.control_1")}
    , TOP__RVSS__control_1__decode_1{this, Verilated::catName(namep, "RVSS.control_1.decode_1")}
    , TOP__RVSS__datapath_1{this, Verilated::catName(namep, "RVSS.datapath_1")}
    , TOP__RVSS__datapath_1__datapathDecode_1{this, Verilated::catName(namep, "RVSS.datapath_1.datapathDecode_1")}
    , TOP__RVSS__datapath_1__datapathDecode_1__regFile_1{this, Verilated::catName(namep, "RVSS.datapath_1.datapathDecode_1.regFile_1")}
    , TOP__RVSS__datapath_1__execute_1{this, Verilated::catName(namep, "RVSS.datapath_1.execute_1")}
    , TOP__RVSS__datapath_1__execute_1__alu_1{this, Verilated::catName(namep, "RVSS.datapath_1.execute_1.alu_1")}
    , TOP__RVSS__datapath_1__fetch_1{this, Verilated::catName(namep, "RVSS.datapath_1.fetch_1")}
    , TOP__RVSS__datapath_1__memory_1{this, Verilated::catName(namep, "RVSS.datapath_1.memory_1")}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-9);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    TOP.RVSS = &TOP__RVSS;
    TOP__RVSS.control_1 = &TOP__RVSS__control_1;
    TOP__RVSS__control_1.decode_1 = &TOP__RVSS__control_1__decode_1;
    TOP__RVSS.datapath_1 = &TOP__RVSS__datapath_1;
    TOP__RVSS__datapath_1.datapathDecode_1 = &TOP__RVSS__datapath_1__datapathDecode_1;
    TOP__RVSS__datapath_1__datapathDecode_1.regFile_1 = &TOP__RVSS__datapath_1__datapathDecode_1__regFile_1;
    TOP__RVSS__datapath_1.execute_1 = &TOP__RVSS__datapath_1__execute_1;
    TOP__RVSS__datapath_1__execute_1.alu_1 = &TOP__RVSS__datapath_1__execute_1__alu_1;
    TOP__RVSS__datapath_1.fetch_1 = &TOP__RVSS__datapath_1__fetch_1;
    TOP__RVSS__datapath_1.memory_1 = &TOP__RVSS__datapath_1__memory_1;
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    TOP__RVSS.__Vconfigure(true);
    TOP__RVSS__control_1.__Vconfigure(true);
    TOP__RVSS__control_1__decode_1.__Vconfigure(true);
    TOP__RVSS__datapath_1.__Vconfigure(true);
    TOP__RVSS__datapath_1__datapathDecode_1.__Vconfigure(true);
    TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.__Vconfigure(true);
    TOP__RVSS__datapath_1__execute_1.__Vconfigure(true);
    TOP__RVSS__datapath_1__execute_1__alu_1.__Vconfigure(true);
    TOP__RVSS__datapath_1__fetch_1.__Vconfigure(true);
    TOP__RVSS__datapath_1__memory_1.__Vconfigure(true);
    // Setup scopes
    __Vscope_RVSS__control_1__decode_1.configure(this, name(), "RVSS.control_1.decode_1", "decode_1", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_RVSS__datapath_1__datapathDecode_1__regFile_1.configure(this, name(), "RVSS.datapath_1.datapathDecode_1.regFile_1", "regFile_1", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_RVSS__datapath_1__execute_1__alu_1.configure(this, name(), "RVSS.datapath_1.execute_1.alu_1", "alu_1", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_RVSS__datapath_1__fetch_1.configure(this, name(), "RVSS.datapath_1.fetch_1", "fetch_1", 0, VerilatedScope::SCOPE_OTHER);
    __Vscope_RVSS__datapath_1__memory_1.configure(this, name(), "RVSS.datapath_1.memory_1", "memory_1", 0, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_RVSS__control_1__decode_1.varInsert(__Vfinal,"io_operation", &(TOP__RVSS__control_1__decode_1.io_operation), false, VLVT_UINT8,VLVD_OUT|VLVF_PUB_RW,1 ,5,0);
        __Vscope_RVSS__datapath_1__datapathDecode_1__regFile_1.varInsert(__Vfinal,"io_readData1", &(TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.io_readData1), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_RVSS__datapath_1__datapathDecode_1__regFile_1.varInsert(__Vfinal,"io_readData2", &(TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.io_readData2), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_RVSS__datapath_1__datapathDecode_1__regFile_1.varInsert(__Vfinal,"regFile_1", &(TOP__RVSS__datapath_1__datapathDecode_1__regFile_1.regFile_1), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,31);
        __Vscope_RVSS__datapath_1__execute_1__alu_1.varInsert(__Vfinal,"io_SrcA", &(TOP__RVSS__datapath_1__execute_1__alu_1.io_SrcA), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_RVSS__datapath_1__execute_1__alu_1.varInsert(__Vfinal,"io_SrcB", &(TOP__RVSS__datapath_1__execute_1__alu_1.io_SrcB), false, VLVT_UINT32,VLVD_IN|VLVF_PUB_RW,1 ,31,0);
        __Vscope_RVSS__datapath_1__fetch_1.varInsert(__Vfinal,"instructionMemory", &(TOP__RVSS__datapath_1__fetch_1.instructionMemory), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,255);
        __Vscope_RVSS__datapath_1__fetch_1.varInsert(__Vfinal,"io_instruction", &(TOP__RVSS__datapath_1__fetch_1.io_instruction), false, VLVT_UINT32,VLVD_OUT|VLVF_PUB_RW,1 ,31,0);
        __Vscope_RVSS__datapath_1__memory_1.varInsert(__Vfinal,"dataMemory", &(TOP__RVSS__datapath_1__memory_1.dataMemory), false, VLVT_UINT32,VLVD_NODIR|VLVF_PUB_RW,2 ,31,0 ,0,255);
    }
}
