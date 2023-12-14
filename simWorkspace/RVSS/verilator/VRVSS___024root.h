// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRVSS.h for the primary calling header

#ifndef VERILATED_VRVSS___024ROOT_H_
#define VERILATED_VRVSS___024ROOT_H_  // guard

#include "verilated.h"
class VRVSS_RVSS;


class VRVSS__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRVSS___024root final : public VerilatedModule {
  public:
    // CELLS
    VRVSS_RVSS* RVSS;

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(reset,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__reset__0;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 4> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VRVSS__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRVSS___024root(VRVSS__Syms* symsp, const char* v__name);
    ~VRVSS___024root();
    VL_UNCOPYABLE(VRVSS___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
