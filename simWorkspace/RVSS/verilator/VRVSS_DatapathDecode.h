// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRVSS.h for the primary calling header

#ifndef VERILATED_VRVSS_DATAPATHDECODE_H_
#define VERILATED_VRVSS_DATAPATHDECODE_H_  // guard

#include "verilated.h"
class VRVSS_RegFile;


class VRVSS__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRVSS_DatapathDecode final : public VerilatedModule {
  public:
    // CELLS
    VRVSS_RegFile* regFile_1;

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__io_writeEnable,0,0);
    VL_IN8(__PVT__io_itype,2,0);
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__reset,0,0);
    VL_IN(__PVT__io_instr,31,0);
    VL_OUT(__PVT__io_extended,31,0);
    VL_OUT(__PVT__io_RD1E,31,0);
    VL_OUT(__PVT__io_RD2E,31,0);
    VL_IN(__PVT__io_WD3E,31,0);
    QData/*39:0*/ __PVT__io_itype_string;

    // INTERNAL VARIABLES
    VRVSS__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRVSS_DatapathDecode(VRVSS__Syms* symsp, const char* v__name);
    ~VRVSS_DatapathDecode();
    VL_UNCOPYABLE(VRVSS_DatapathDecode);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
