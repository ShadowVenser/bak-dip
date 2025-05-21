// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "VnandGate__pch.h"
#include "verilated_vcd_c.h"

//============================================================
// Constructors

VnandGate::VnandGate(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new VnandGate__Syms(contextp(), _vcname__, this)}
    , x1{vlSymsp->TOP.x1}
    , x2{vlSymsp->TOP.x2}
    , y{vlSymsp->TOP.y}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

VnandGate::VnandGate(const char* _vcname__)
    : VnandGate(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

VnandGate::~VnandGate() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void VnandGate___024root___eval_debug_assertions(VnandGate___024root* vlSelf);
#endif  // VL_DEBUG
void VnandGate___024root___eval_static(VnandGate___024root* vlSelf);
void VnandGate___024root___eval_initial(VnandGate___024root* vlSelf);
void VnandGate___024root___eval_settle(VnandGate___024root* vlSelf);
void VnandGate___024root___eval(VnandGate___024root* vlSelf);

void VnandGate::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate VnandGate::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    VnandGate___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        VnandGate___024root___eval_static(&(vlSymsp->TOP));
        VnandGate___024root___eval_initial(&(vlSymsp->TOP));
        VnandGate___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    VnandGate___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool VnandGate::eventsPending() { return false; }

uint64_t VnandGate::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* VnandGate::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void VnandGate___024root___eval_final(VnandGate___024root* vlSelf);

VL_ATTR_COLD void VnandGate::final() {
    VnandGate___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* VnandGate::hierName() const { return vlSymsp->name(); }
const char* VnandGate::modelName() const { return "VnandGate"; }
unsigned VnandGate::threads() const { return 1; }
void VnandGate::prepareClone() const { contextp()->prepareClone(); }
void VnandGate::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> VnandGate::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void VnandGate___024root__trace_decl_types(VerilatedVcd* tracep);

void VnandGate___024root__trace_init_top(VnandGate___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedVcd* tracep, uint32_t code) {
    // Callback from tracep->open()
    VnandGate___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<VnandGate___024root*>(voidSelf);
    VnandGate__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    VnandGate___024root__trace_decl_types(tracep);
    VnandGate___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void VnandGate___024root__trace_register(VnandGate___024root* vlSelf, VerilatedVcd* tracep);

VL_ATTR_COLD void VnandGate::trace(VerilatedVcdC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'VnandGate::trace()' shall not be called after 'VerilatedVcdC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    VnandGate___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
