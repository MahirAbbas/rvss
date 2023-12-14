// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRVSS.h for the primary calling header

#ifndef VERILATED_VRVSS_DATAPATH_H_
#define VERILATED_VRVSS_DATAPATH_H_  // guard

#include "verilated.h"
class VRVSS_DatapathDecode;
class VRVSS_Execute;
class VRVSS_Fetch;
class VRVSS_Memory;


class VRVSS__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRVSS_Datapath final : public VerilatedModule {
  public:
    // CELLS
    VRVSS_Fetch* fetch_1;
    VRVSS_DatapathDecode* datapathDecode_1;
    VRVSS_Execute* execute_1;
    VRVSS_Memory* memory_1;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__io_PCSrc,0,0);
    VL_IN8(__PVT__io_ResultSrc,1,0);
    VL_IN8(__PVT__io_MemWrite,0,0);
    VL_IN8(__PVT__io_ALUControl,2,0);
    VL_IN8(__PVT__io_ALUSrc,0,0);
    VL_IN8(__PVT__io_RegWrite,0,0);
    VL_IN8(__PVT__io_itype,2,0);
    VL_OUT8(__PVT__io_zero,0,0);
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    CData/*0:0*/ __PVT__memory_1_io_resultSrc;
    VL_OUT(__PVT__io_instruction,31,0);
    IData/*31:0*/ __PVT__PCTarget;
    IData/*31:0*/ __PVT__branch_immediate;
    QData/*39:0*/ __PVT__io_itype_string;

    // INTERNAL VARIABLES
    VRVSS__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRVSS_Datapath(VRVSS__Syms* symsp, const char* v__name);
    ~VRVSS_Datapath();
    VL_UNCOPYABLE(VRVSS_Datapath);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
