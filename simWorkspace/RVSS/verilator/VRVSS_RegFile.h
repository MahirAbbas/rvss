// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VRVSS.h for the primary calling header

#ifndef VERILATED_VRVSS_REGFILE_H_
#define VERILATED_VRVSS_REGFILE_H_  // guard

#include "verilated.h"


class VRVSS__Syms;

class alignas(VL_CACHE_LINE_BYTES) VRVSS_RegFile final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(__PVT__clk,0,0);
    VL_IN8(__PVT__io_writeEnable3,0,0);
    VL_IN8(__PVT__io_readAddress1,4,0);
    VL_IN8(__PVT__io_readAddress2,4,0);
    VL_IN8(__PVT__io_writeAddress3,4,0);
    VL_IN8(__PVT__reset,0,0);
    VL_OUT(io_readData1,31,0);
    VL_OUT(io_readData2,31,0);
    VL_IN(__PVT__io_writeData3,31,0);
    VlUnpacked<IData/*31:0*/, 32> regFile_1;

    // INTERNAL VARIABLES
    VRVSS__Syms* const vlSymsp;

    // CONSTRUCTORS
    VRVSS_RegFile(VRVSS__Syms* symsp, const char* v__name);
    ~VRVSS_RegFile();
    VL_UNCOPYABLE(VRVSS_RegFile);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
