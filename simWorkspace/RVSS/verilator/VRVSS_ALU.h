// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRVSS.h for the primary calling header

#ifndef VERILATED_VRVSS_ALU_H_
#define VERILATED_VRVSS_ALU_H_  // guard

#include "verilated.h"


class VRVSS__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRVSS_ALU final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__io_ALUControl,2,0);
    VL_OUT8(__PVT__io_zero,0,0);
    VL_IN(io_SrcA,31,0);
    VL_IN(io_SrcB,31,0);
    VL_OUT(__PVT__io_ALUResult,31,0);

    // INTERNAL VARIABLES
    VRVSS__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRVSS_ALU(VRVSS__Syms* symsp, const char* v__name);
    ~VRVSS_ALU();
    VL_UNCOPYABLE(VRVSS_ALU);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
