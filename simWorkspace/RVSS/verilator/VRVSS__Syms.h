// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VRVSS__SYMS_H_
#define VERILATED_VRVSS__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VRVSS.h"

// INCLUDE MODULE CLASSES
#include "VRVSS___024root.h"
#include "VRVSS_RVSS.h"
#include "VRVSS_Datapath.h"
#include "VRVSS_Control.h"
#include "VRVSS_Memory.h"
#include "VRVSS_Execute.h"
#include "VRVSS_DatapathDecode.h"
#include "VRVSS_Fetch.h"
#include "VRVSS_Decode.h"
#include "VRVSS_ALU.h"
#include "VRVSS_RegFile.h"

// DPI TYPES for DPI Export callbacks (Internal use)

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VRVSS__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VRVSS* const __Vm_modelp;
    bool __Vm_activity = false;  ///< Used by trace routines to determine change occurred
    uint32_t __Vm_baseCode = 0;  ///< Used by trace routines when tracing multiple models
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VRVSS___024root                TOP;
    VRVSS_RVSS                     TOP__RVSS;
    VRVSS_Control                  TOP__RVSS__control_1;
    VRVSS_Decode                   TOP__RVSS__control_1__decode_1;
    VRVSS_Datapath                 TOP__RVSS__datapath_1;
    VRVSS_DatapathDecode           TOP__RVSS__datapath_1__datapathDecode_1;
    VRVSS_RegFile                  TOP__RVSS__datapath_1__datapathDecode_1__regFile_1;
    VRVSS_Execute                  TOP__RVSS__datapath_1__execute_1;
    VRVSS_ALU                      TOP__RVSS__datapath_1__execute_1__alu_1;
    VRVSS_Fetch                    TOP__RVSS__datapath_1__fetch_1;
    VRVSS_Memory                   TOP__RVSS__datapath_1__memory_1;

    // SCOPE NAMES
    VerilatedScope __Vscope_RVSS__control_1__decode_1;
    VerilatedScope __Vscope_RVSS__datapath_1__datapathDecode_1__regFile_1;
    VerilatedScope __Vscope_RVSS__datapath_1__execute_1__alu_1;
    VerilatedScope __Vscope_RVSS__datapath_1__fetch_1;
    VerilatedScope __Vscope_RVSS__datapath_1__memory_1;

    // CONSTRUCTORS
    VRVSS__Syms(VerilatedContext* contextp, const char* namep, VRVSS* modelp);
    ~VRVSS__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
