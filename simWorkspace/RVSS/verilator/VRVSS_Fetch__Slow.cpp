// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Fetch.h"
#include "VRVSS__Syms.h"

void VRVSS_Fetch___ctor_var_reset(VRVSS_Fetch* vlSelf);

VRVSS_Fetch::VRVSS_Fetch(VRVSS__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRVSS_Fetch___ctor_var_reset(this);
}

void VRVSS_Fetch::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRVSS_Fetch::~VRVSS_Fetch() {
}
