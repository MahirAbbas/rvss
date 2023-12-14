// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VRVSS__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VRVSS::VRVSS(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VRVSS__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , reset{vlSymsp->TOP.reset}
    , RVSS{vlSymsp->TOP.RVSS}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VRVSS::VRVSS(const char* _vcname__)
    : VRVSS(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VRVSS::~VRVSS() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VRVSS___024root___eval_debug_assertions(VRVSS___024root* vlSelf);
#endif  // VL_DEBUG
void VRVSS___024root___eval_static(VRVSS___024root* vlSelf);
void VRVSS___024root___eval_initial(VRVSS___024root* vlSelf);
void VRVSS___024root___eval_settle(VRVSS___024root* vlSelf);
void VRVSS___024root___eval(VRVSS___024root* vlSelf);

void VRVSS::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VRVSS::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VRVSS___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VRVSS___024root___eval_static(&(vlSymsp->TOP));
        VRVSS___024root___eval_initial(&(vlSymsp->TOP));
        VRVSS___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VRVSS___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VRVSS::eventsPending() { return false; }

uint64_t VRVSS::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VRVSS::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VRVSS___024root___eval_final(VRVSS___024root* vlSelf);

VL_ATTR_COLD void VRVSS::final() {
    VRVSS___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VRVSS::hierName() const { return vlSymsp->name(); }
const char* VRVSS::modelName() const { return "VRVSS"; }
unsigned VRVSS::threads() const { return 1; }
void VRVSS::prepareClone() const { contextp()->prepareClone(); }
void VRVSS::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VRVSS::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VRVSS___024root__trace_init_top(VRVSS___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VRVSS___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VRVSS___024root*>(voidSelf);
    VRVSS__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VRVSS___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VRVSS___024root__trace_register(VRVSS___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VRVSS::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VRVSS::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VRVSS___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
