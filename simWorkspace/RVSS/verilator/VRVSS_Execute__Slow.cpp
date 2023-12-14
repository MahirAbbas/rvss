// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Execute.h"
#include "VRVSS__Syms.h"

void VRVSS_Execute___ctor_var_reset(VRVSS_Execute* vlSelf);

VRVSS_Execute::VRVSS_Execute(VRVSS__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRVSS_Execute___ctor_var_reset(this);
}

void VRVSS_Execute::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRVSS_Execute::~VRVSS_Execute() {
}
