// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsvsimTestbench.h for the primary calling header

#include "VsvsimTestbench__pch.h"
#include "VsvsimTestbench__Syms.h"
#include "VsvsimTestbench___024root.h"

extern "C" void initTestBenchScope();

VL_INLINE_OPT void VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__initTestBenchScope_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__initTestBenchScope_TOP\n"); );
    // Body
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    initTestBenchScope();
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_clock_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_clock_TOP\n"); );
    // Init
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_clock_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_clock) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_clock_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__clock = value_clock;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_clock_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_clock) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_clock_TOP\n"); );
    // Init
    // Body
    value_clock = vlSymsp->TOP.svsimTestbench__DOT__clock;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_reset_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_reset_TOP\n"); );
    // Init
    // Body
    value = 1U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_reset_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_reset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_reset_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__reset = value_reset;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_reset_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_reset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_reset_TOP\n"); );
    // Init
    // Body
    value_reset = vlSymsp->TOP.svsimTestbench__DOT__reset;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_a_TOP\n"); );
    // Init
    // Body
    value = 8U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ value_a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_a_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__a = value_a;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ &value_a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_a_TOP\n"); );
    // Init
    // Body
    value_a = vlSymsp->TOP.svsimTestbench__DOT__a;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_b_TOP\n"); );
    // Init
    // Body
    value = 8U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ value_b) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_b_TOP\n"); );
    // Init
    // Body
    vlSymsp->TOP.__Vdpi_export_trigger = 1U;
    vlSymsp->TOP.svsimTestbench__DOT__b = value_b;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ &value_b) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_b_TOP\n"); );
    // Init
    // Body
    value_b = vlSymsp->TOP.svsimTestbench__DOT__b;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_c_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_c_TOP\n"); );
    // Init
    // Body
    value = 8U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_c_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ &value_c) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_c_TOP\n"); );
    // Init
    // Body
    value_c = vlSymsp->TOP.svsimTestbench__DOT__dut__DOT__r;
}

extern "C" int simulation_body();

VL_INLINE_OPT void VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_body_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_body_TOP\n"); );
    // Body
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    simulation_body();
}

extern "C" int simulation_final();

VL_INLINE_OPT void VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_final_TOP(const VerilatedScope* __Vscopep, const char* __Vfilenamep, IData/*31:0*/ __Vlineno) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_final_TOP\n"); );
    // Body
    Verilated::dpiContext(__Vscopep, __Vfilenamep, __Vlineno);
    simulation_final();
}

extern "C" void run_simulation(int timesteps, int* done);

VL_INLINE_OPT void VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__run_simulation_TOP(IData/*31:0*/ timesteps, IData/*31:0*/ &done) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__run_simulation_TOP\n"); );
    // Body
    int timesteps__Vcvt;
    for (size_t timesteps__Vidx = 0; timesteps__Vidx < 1; ++timesteps__Vidx) timesteps__Vcvt = timesteps;
    int done__Vcvt;
    run_simulation(timesteps__Vcvt, &done__Vcvt);
    done = done__Vcvt;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_initializeTrace_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, std::string traceFilePath) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_initializeTrace_TOP\n"); );
    // Init
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_enableTrace_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &success) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_enableTrace_TOP\n"); );
    // Init
    // Body
    success = 0U;
}

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_disableTrace_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &success) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_disableTrace_TOP\n"); );
    // Init
    // Body
    success = 0U;
}

#ifdef VL_DEBUG
VL_ATTR_COLD void VsvsimTestbench___024root___dump_triggers__act(VsvsimTestbench___024root* vlSelf);
#endif  // VL_DEBUG

void VsvsimTestbench___024root___eval_triggers__act(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___eval_triggers__act\n"); );
    // Body
    vlSelf->__VactTriggered.set(0U, (IData)(vlSelf->__Vdpi_export_trigger));
    vlSelf->__Vdpi_export_trigger = 0U;
    vlSelf->__VactTriggered.set(1U, (vlSelf->svsimTestbench__DOT__simulationState 
                                     != vlSelf->__Vtrigprevexpr___TOP__svsimTestbench__DOT__simulationState__0));
    vlSelf->__VactTriggered.set(2U, ((IData)(vlSelf->svsimTestbench__DOT__clock) 
                                     & (~ (IData)(vlSelf->__Vtrigprevexpr___TOP__svsimTestbench__DOT__clock__0))));
    vlSelf->__Vtrigprevexpr___TOP__svsimTestbench__DOT__simulationState__0 
        = vlSelf->svsimTestbench__DOT__simulationState;
    vlSelf->__Vtrigprevexpr___TOP__svsimTestbench__DOT__clock__0 
        = vlSelf->svsimTestbench__DOT__clock;
    if (VL_UNLIKELY((1U & (~ (IData)(vlSelf->__VactDidInit))))) {
        vlSelf->__VactDidInit = 1U;
        vlSelf->__VactTriggered.set(1U, 1U);
    }
#ifdef VL_DEBUG
    if (VL_UNLIKELY(vlSymsp->_vm_contextp__->debug())) {
        VsvsimTestbench___024root___dump_triggers__act(vlSelf);
    }
#endif
}

VL_INLINE_OPT void VsvsimTestbench___024root___act_sequent__TOP__0(VsvsimTestbench___024root* vlSelf) {
    if (false && vlSelf) {}  // Prevent unused
    VsvsimTestbench__Syms* const __restrict vlSymsp VL_ATTR_UNUSED = vlSelf->vlSymsp;
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root___act_sequent__TOP__0\n"); );
    // Body
    if ((1U == vlSelf->svsimTestbench__DOT__simulationState)) {
        VsvsimTestbench___024root____Vdpiimwrap_svsimTestbench__DOT__simulation_body_TOP(
                                                                                (&(vlSymsp->__Vscope_svsimTestbench)), 
                                                                                "/home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv", 0x6aU);
        vlSelf->svsimTestbench__DOT__simulationState = 2U;
    }
}
