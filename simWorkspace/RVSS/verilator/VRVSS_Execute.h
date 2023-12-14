// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRVSS.h for the primary calling header

#ifndef VERILATED_VRVSS_EXECUTE_H_
#define VERILATED_VRVSS_EXECUTE_H_  // guard

#include "verilated.h"
class VRVSS_ALU;


class VRVSS__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRVSS_Execute final : public VerilatedModule {
  public:
    // CELLS
    VRVSS_ALU* alu_1;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__io_aluSrc,0,0);
    VL_IN8(__PVT__io_aluControl,2,0);
    VL_OUT8(__PVT__io_zero,0,0);
    VL_IN(__PVT__io_RD1E,31,0);
    VL_IN(__PVT__io_RD2E,31,0);
    VL_IN(__PVT__io_immExt,31,0);
    VL_OUT(__PVT__io_RD2WriteData,31,0);
    VL_OUT(__PVT__io_aluResult,31,0);

    // INTERNAL VARIABLES
    VRVSS__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRVSS_Execute(VRVSS__Syms* symsp, const char* v__name);
    ~VRVSS_Execute();
    VL_UNCOPYABLE(VRVSS_Execute);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
