// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_DatapathDecode.h"
#include "VRVSS__Syms.h"

void VRVSS_DatapathDecode___ctor_var_reset(VRVSS_DatapathDecode* vlSelf);

VRVSS_DatapathDecode::VRVSS_DatapathDecode(VRVSS__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRVSS_DatapathDecode___ctor_var_reset(this);
}

void VRVSS_DatapathDecode::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRVSS_DatapathDecode::~VRVSS_DatapathDecode() {
}
