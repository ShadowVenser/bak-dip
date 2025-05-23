// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsvsimTestbench.h for the primary calling header

#ifndef VERILATED_VSVSIMTESTBENCH___024ROOT_H_
#define VERILATED_VSVSIMTESTBENCH___024ROOT_H_  // guard

#include "verilated.h"


class VsvsimTestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsvsimTestbench___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    CData/*7:0*/ svsimTestbench__DOT__arr_0_0;
    CData/*7:0*/ svsimTestbench__DOT__arr_0_1;
    CData/*7:0*/ svsimTestbench__DOT__arr_0_2;
    CData/*7:0*/ svsimTestbench__DOT__arr_1_0;
    CData/*7:0*/ svsimTestbench__DOT__arr_1_1;
    CData/*7:0*/ svsimTestbench__DOT__arr_1_2;
    CData/*7:0*/ svsimTestbench__DOT__arr_2_0;
    CData/*7:0*/ svsimTestbench__DOT__arr_2_1;
    CData/*7:0*/ svsimTestbench__DOT__arr_2_2;
    CData/*7:0*/ svsimTestbench__DOT__dut__DOT__subs_6_0;
    CData/*7:0*/ svsimTestbench__DOT__dut__DOT__subs_6_2;
    CData/*0:0*/ __Vdpi_export_trigger;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactDidInit;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ svsimTestbench__DOT__simulationState;
    IData/*31:0*/ __Vtrigprevexpr___TOP__svsimTestbench__DOT__simulationState__0;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<2> __VicoTriggered;
    VlTriggerVec<2> __VactTriggered;
    VlTriggerVec<2> __VnbaTriggered;

    // INTERNAL VARIABLES
    VsvsimTestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsvsimTestbench___024root(VsvsimTestbench__Syms* symsp, const char* v__name);
    ~VsvsimTestbench___024root();
    VL_UNCOPYABLE(VsvsimTestbench___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
