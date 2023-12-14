// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_ALU.h"
#include "VRVSS__Syms.h"

void VRVSS_ALU___ctor_var_reset(VRVSS_ALU* vlSelf);

VRVSS_ALU::VRVSS_ALU(VRVSS__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRVSS_ALU___ctor_var_reset(this);
}

void VRVSS_ALU::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRVSS_ALU::~VRVSS_ALU() {
}
