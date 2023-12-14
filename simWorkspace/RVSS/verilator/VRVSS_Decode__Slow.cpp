// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Decode.h"
#include "VRVSS__Syms.h"

void VRVSS_Decode___ctor_var_reset(VRVSS_Decode* vlSelf);

VRVSS_Decode::VRVSS_Decode(VRVSS__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRVSS_Decode___ctor_var_reset(this);
}

void VRVSS_Decode::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRVSS_Decode::~VRVSS_Decode() {
}
