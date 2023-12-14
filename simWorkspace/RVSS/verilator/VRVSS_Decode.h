// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRVSS.h for the primary calling header

#ifndef VERILATED_VRVSS_DECODE_H_
#define VERILATED_VRVSS_DECODE_H_  // guard

#include "verilated.h"


class VRVSS__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRVSS_Decode final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_OUT8(io_operation,5,0);
    VL_OUT8(__PVT__io_outInstrFormat,2,0);
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    CData/*5:0*/ __PVT__register_1;
    VL_IN(__PVT__io_instr,31,0);
    QData/*39:0*/ __PVT__io_operation_string;
    QData/*39:0*/ __PVT__io_outInstrFormat_string;
    QData/*39:0*/ __PVT__register_1_string;

    // INTERNAL VARIABLES
    VRVSS__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRVSS_Decode(VRVSS__Syms* symsp, const char* v__name);
    ~VRVSS_Decode();
    VL_UNCOPYABLE(VRVSS_Decode);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
