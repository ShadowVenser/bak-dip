// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Model implementation (design independent parts)

#include "Vmedian__pch.h"
#include "verilated_fst_c.h"

//============================================================
// Constructors

Vmedian::Vmedian(VerilatedContext* _vcontextp__, const char* _vcname__)
    : VerilatedModel{*_vcontextp__}
    , vlSymsp{new Vmedian__Syms(contextp(), _vcname__, this)}
    , arr_1{vlSymsp->TOP.arr_1}
    , arr_2{vlSymsp->TOP.arr_2}
    , arr_3{vlSymsp->TOP.arr_3}
    , arr_4{vlSymsp->TOP.arr_4}
    , arr_5{vlSymsp->TOP.arr_5}
    , arr_6{vlSymsp->TOP.arr_6}
    , arr_7{vlSymsp->TOP.arr_7}
    , arr_8{vlSymsp->TOP.arr_8}
    , med{vlSymsp->TOP.med}
    , arr_0{vlSymsp->TOP.arr_0}
    , rootp{&(vlSymsp->TOP)}
{
    // Register model with the context
    contextp()->addModel(this);
}

Vmedian::Vmedian(const char* _vcname__)
    : Vmedian(Verilated::threadContextp(), _vcname__)
{
}

//============================================================
// Destructor

Vmedian::~Vmedian() {
    delete vlSymsp;
}

//============================================================
// Evaluation function

#ifdef VL_DEBUG
void Vmedian___024root___eval_debug_assertions(Vmedian___024root* vlSelf);
#endif  // VL_DEBUG
void Vmedian___024root___eval_static(Vmedian___024root* vlSelf);
void Vmedian___024root___eval_initial(Vmedian___024root* vlSelf);
void Vmedian___024root___eval_settle(Vmedian___024root* vlSelf);
void Vmedian___024root___eval(Vmedian___024root* vlSelf);

void Vmedian::eval_step() {
    VL_DEBUG_IF(VL_DBG_MSGF("+++++TOP Evaluate Vmedian::eval_step\n"); );
#ifdef VL_DEBUG
    // Debug assertions
    Vmedian___024root___eval_debug_assertions(&(vlSymsp->TOP));
#endif  // VL_DEBUG
    vlSymsp->__Vm_activity = true;
    vlSymsp->__Vm_deleter.deleteAll();
    if (VL_UNLIKELY(!vlSymsp->__Vm_didInit)) {
        vlSymsp->__Vm_didInit = true;
        VL_DEBUG_IF(VL_DBG_MSGF("+ Initial\n"););
        Vmedian___024root___eval_static(&(vlSymsp->TOP));
        Vmedian___024root___eval_initial(&(vlSymsp->TOP));
        Vmedian___024root___eval_settle(&(vlSymsp->TOP));
    }
    VL_DEBUG_IF(VL_DBG_MSGF("+ Eval\n"););
    Vmedian___024root___eval(&(vlSymsp->TOP));
    // Evaluate cleanup
    Verilated::endOfEval(vlSymsp->__Vm_evalMsgQp);
}

//============================================================
// Events and timing
bool Vmedian::eventsPending() { return false; }

uint64_t Vmedian::nextTimeSlot() {
    VL_FATAL_MT(__FILE__, __LINE__, "", "%Error: No delays in the design");
    return 0;
}

//============================================================
// Utilities

const char* Vmedian::name() const {
    return vlSymsp->name();
}

//============================================================
// Invoke final blocks

void Vmedian___024root___eval_final(Vmedian___024root* vlSelf);

VL_ATTR_COLD void Vmedian::final() {
    Vmedian___024root___eval_final(&(vlSymsp->TOP));
}

//============================================================
// Implementations of abstract methods from VerilatedModel

const char* Vmedian::hierName() const { return vlSymsp->name(); }
const char* Vmedian::modelName() const { return "Vmedian"; }
unsigned Vmedian::threads() const { return 1; }
void Vmedian::prepareClone() const { contextp()->prepareClone(); }
void Vmedian::atClone() const {
    contextp()->threadPoolpOnClone();
}
std::unique_ptr<VerilatedTraceConfig> Vmedian::traceConfig() const {
    return std::unique_ptr<VerilatedTraceConfig>{new VerilatedTraceConfig{false, false, false}};
};

//============================================================
// Trace configuration

void Vmedian___024root__trace_decl_types(VerilatedFst* tracep);

void Vmedian___024root__trace_init_top(Vmedian___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD static void trace_init(void* voidSelf, VerilatedFst* tracep, uint32_t code) {
    // Callback from tracep->open()
    Vmedian___024root* const __restrict vlSelf VL_ATTR_UNUSED = static_cast<Vmedian___024root*>(voidSelf);
    Vmedian__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    if (!vlSymsp->_vm_contextp__->calcUnusedSigs()) {
        VL_FATAL_MT(__FILE__, __LINE__, __FILE__,
            "Turning on wave traces requires Verilated::traceEverOn(true) call before time 0.");
    }
    vlSymsp->__Vm_baseCode = code;
    tracep->pushPrefix(std::string{vlSymsp->name()}, VerilatedTracePrefixType::SCOPE_MODULE);
    Vmedian___024root__trace_decl_types(tracep);
    Vmedian___024root__trace_init_top(vlSelf, tracep);
    tracep->popPrefix();
}

VL_ATTR_COLD void Vmedian___024root__trace_register(Vmedian___024root* vlSelf, VerilatedFst* tracep);

VL_ATTR_COLD void Vmedian::trace(VerilatedFstC* tfp, int levels, int options) {
    if (tfp->isOpen()) {
        vl_fatal(__FILE__, __LINE__, __FILE__,"'Vmedian::trace()' shall not be called after 'VerilatedFstC::open()'.");
    }
    if (false && levels && options) {}  // Prevent unused
    tfp->spTrace()->addModel(this);
    tfp->spTrace()->addInitCb(&trace_init, &(vlSymsp->TOP));
    Vmedian___024root__trace_register(&(vlSymsp->TOP), tfp->spTrace());
}
