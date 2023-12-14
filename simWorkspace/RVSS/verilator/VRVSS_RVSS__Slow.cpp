// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_RVSS.h"
#include "VRVSS__Syms.h"

void VRVSS_RVSS___ctor_var_reset(VRVSS_RVSS* vlSelf);

VRVSS_RVSS::VRVSS_RVSS(VRVSS__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRVSS_RVSS___ctor_var_reset(this);
}

void VRVSS_RVSS::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRVSS_RVSS::~VRVSS_RVSS() {
}
