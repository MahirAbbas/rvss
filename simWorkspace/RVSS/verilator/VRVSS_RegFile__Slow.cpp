// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VRVSS.h for the primary calling header

#include "VRVSS__pch.h"
#include "VRVSS_RegFile.h"
#include "VRVSS__Syms.h"

void VRVSS_RegFile___ctor_var_reset(VRVSS_RegFile* vlSelf);

VRVSS_RegFile::VRVSS_RegFile(VRVSS__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VRVSS_RegFile___ctor_var_reset(this);
}

void VRVSS_RegFile::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VRVSS_RegFile::~VRVSS_RegFile() {
}
