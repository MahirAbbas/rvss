// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Control.h"
#include "VRVSS__Syms.h"

void VRVSS_Control___ctor_var_reset(VRVSS_Control* vlSelf);

VRVSS_Control::VRVSS_Control(VRVSS__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRVSS_Control___ctor_var_reset(this);
}

void VRVSS_Control::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRVSS_Control::~VRVSS_Control() {
}
