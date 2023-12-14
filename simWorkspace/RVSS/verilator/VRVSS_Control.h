// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRVSS.h for the primary calling header

#ifndef VERILATED_VRVSS_CONTROL_H_
#define VERILATED_VRVSS_CONTROL_H_  // guard

#include "verilated.h"
class VRVSS_Decode;


class VRVSS__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRVSS_Control final : public VerilatedModule {
  public:
    // CELLS
    VRVSS_Decode* decode_1;

    // DESIGN SPECIFIC STATE
    VL_OUT8(__PVT__io_PCSrc,0,0);
    VL_OUT8(__PVT__io_resultSrc,1,0);
    VL_OUT8(__PVT__io_memWrite,0,0);
    VL_OUT8(__PVT__io_ALUControl,2,0);
    VL_OUT8(__PVT__io_ALUSrc,0,0);
    VL_OUT8(__PVT__io_immItype,2,0);
    VL_OUT8(__PVT__io_regWrite,0,0);
    VL_IN8(__PVT__io_zero,0,0);
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN(__PVT__io_instrucion,31,0);
    QData/*39:0*/ __PVT__io_immItype_string;

    // INTERNAL VARIABLES
    VRVSS__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRVSS_Control(VRVSS__Syms* symsp, const char* v__name);
    ~VRVSS_Control();
    VL_UNCOPYABLE(VRVSS_Control);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
