// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Datapath.h"
#include "VRVSS__Syms.h"

void VRVSS_Datapath___ctor_var_reset(VRVSS_Datapath* vlSelf);

VRVSS_Datapath::VRVSS_Datapath(VRVSS__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRVSS_Datapath___ctor_var_reset(this);
}

void VRVSS_Datapath::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRVSS_Datapath::~VRVSS_Datapath() {
}
