// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS__Syms.h"
#include "VRVSS___024root.h"

void VRVSS___024root___ctor_var_reset(VRVSS___024root* vlSelf);

VRVSS___024root::VRVSS___024root(VRVSS__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRVSS___024root___ctor_var_reset(this);
}

void VRVSS___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRVSS___024root::~VRVSS___024root() {
}
