// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRVSS.h for the primary calling header

#ifndef VERILATED_VRVSS_MEMORY_H_
#define VERILATED_VRVSS_MEMORY_H_  // guard

#include "verilated.h"


class VRVSS__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRVSS_Memory final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__io_memWrite,0,0);
    VL_IN8(__PVT__io_resultSrc,0,0);
    VL_IN8(__PVT__reset,0,0);
    CData/*0:0*/ __PVT___zz_1;
    CData/*7:0*/ __Vdlyvdim0__dataMemory__v0;
    CData/*0:0*/ __Vdlyvset__dataMemory__v0;
    VL_IN(__PVT__io_aluResult,31,0);
    VL_IN(__PVT__io_writeData,31,0);
    VL_OUT(__PVT__io_result,31,0);
    IData/*31:0*/ __Vdlyvval__dataMemory__v0;
    VlUnpacked<IData/*31:0*/, 256> dataMemory;

    // INTERNAL VARIABLES
    VRVSS__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRVSS_Memory(VRVSS__Syms* symsp, const char* v__name);
    ~VRVSS_Memory();
    VL_UNCOPYABLE(VRVSS_Memory);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
