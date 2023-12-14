// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRVSS.h for the primary calling header

#ifndef VERILATED_VRVSS_FETCH_H_
#define VERILATED_VRVSS_FETCH_H_  // guard

#include "verilated.h"


class VRVSS__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRVSS_Fetch final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN8(__PVT__io_branch,0,0);
    VL_IN(__PVT__io_branchTarget,31,0);
    VL_OUT(io_instruction,31,0);
    VL_OUT(__PVT__io_PC,31,0);
    IData/*31:0*/ __PVT__programCounter;
    IData/*31:0*/ __PVT__PCPlus4;
    VlUnpacked<IData/*31:0*/, 256> instructionMemory;

    // INTERNAL VARIABLES
    VRVSS__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRVSS_Fetch(VRVSS__Syms* symsp, const char* v__name);
    ~VRVSS_Fetch();
    VL_UNCOPYABLE(VRVSS_Fetch);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
