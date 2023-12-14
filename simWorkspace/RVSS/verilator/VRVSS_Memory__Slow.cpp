// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_Memory.h"
#include "VRVSS__Syms.h"

void VRVSS_Memory___ctor_var_reset(VRVSS_Memory* vlSelf);

VRVSS_Memory::VRVSS_Memory(VRVSS__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRVSS_Memory___ctor_var_reset(this);
}

void VRVSS_Memory::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRVSS_Memory::~VRVSS_Memory() {
}
