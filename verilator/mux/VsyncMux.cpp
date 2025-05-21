// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VsyncMux__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

VsyncMux::VsyncMux(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VsyncMux__Syms(contextp(), _vcname__, this)}
    , clk{vlSymsp->TOP.clk}
    , clr_n{vlSymsp->TOP.clr_n}
    , addr{vlSymsp->TOP.addr}
    , x1{vlSymsp->TOP.x1}
    , x2{vlSymsp->TOP.x2}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VsyncMux::VsyncMux(const char* _vcname__)
    : VsyncMux(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VsyncMux::~VsyncMux() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VsyncMux___024root___eval_debug_assertions(VsyncMux___024root* vlSelf);
#endif  // VL_DEBUG
void VsyncMux___024root___eval_static(VsyncMux___024root* vlSelf);
void VsyncMux___024root___eval_initial(VsyncMux___024root* vlSelf);
void VsyncMux___024root___eval_settle(VsyncMux___024root* vlSelf);
void VsyncMux___024root___eval(VsyncMux___024root* vlSelf);

void VsyncMux::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VsyncMux::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VsyncMux___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VsyncMux___024root___eval_static(&(vlSymsp->TOP));
        VsyncMux___024root___eval_initial(&(vlSymsp->TOP));
        VsyncMux___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VsyncMux___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VsyncMux::eventsPending() { return false; }

uint64_t VsyncMux::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VsyncMux::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VsyncMux___024root___eval_final(VsyncMux___024root* vlSelf);

VL_ATTR_COLD void VsyncMux::final() {
    VsyncMux___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VsyncMux::hierName() const { return vlSymsp->name(); }
const char* VsyncMux::modelName() const { return "VsyncMux"; }
unsigned VsyncMux::threads() const { return 1; }
void VsyncMux::prepareClone() const { contextp()->prepareClone(); }
void VsyncMux::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VsyncMux::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VsyncMux___024root__trace_decl_types(VerilatedFst* tracep);

void VsyncMux___024root__trace_init_top(VsyncMux___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    VsyncMux___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VsyncMux___024root*>(voidSelf);
    VsyncMux__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VsyncMux___024root__trace_decl_types(tracep);
    VsyncMux___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VsyncMux___024root__trace_register(VsyncMux___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void VsyncMux::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VsyncMux::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VsyncMux___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
