// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRVSS.h for the primary calling header

#ifndef VERILATED_VRVSS_RVSS_H_
#define VERILATED_VRVSS_RVSS_H_  // guard

#include "verilated.h"
class VRVSS_Control;
class VRVSS_Datapath;


class VRVSS__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRVSS_RVSS final : public VerilatedModule {
  public:
    // CELLS
    VRVSS_Control* control_1;
    VRVSS_Datapath* datapath_1;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);

    // INTERNAL VARIABLES
    VRVSS__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRVSS_RVSS(VRVSS__Syms* symsp, const char* v__name);
    ~VRVSS_RVSS();
    VL_UNCOPYABLE(VRVSS_RVSS);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
