// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See Vmedian.h for the primary calling header

#ifndef VERILATED_VMEDIAN___024ROOT_H_
#define VERILATED_VMEDIAN___024ROOT_H_  // guard

#include "verilated.h"


class Vmedian__Syms;

class alignas(VL_CACHE_LINE_BYTES) Vmedian___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(arr_1,7,0);
    VL_IN8(arr_2,7,0);
    VL_IN8(arr_3,7,0);
    VL_IN8(arr_4,7,0);
    VL_IN8(arr_5,7,0);
    VL_IN8(arr_6,7,0);
    VL_IN8(arr_7,7,0);
    VL_IN8(arr_8,7,0);
    VL_OUT8(med,7,0);
    VL_IN8(arr_0,7,0);
    CData/*0:0*/ median__DOT__fc_0sel_0;
    CData/*0:0*/ median__DOT__fc_0sel_1;
    CData/*0:0*/ median__DOT__fc_0sel_2;
    CData/*7:0*/ median__DOT__fc_0sub_0;
    CData/*7:0*/ median__DOT__fc_0sub_1;
    CData/*7:0*/ median__DOT__fc_0sub_2;
    CData/*0:0*/ median__DOT__fc_1sel_0;
    CData/*0:0*/ median__DOT__fc_1sel_1;
    CData/*0:0*/ median__DOT__fc_1sel_2;
    CData/*7:0*/ median__DOT__fc_1sub_0;
    CData/*7:0*/ median__DOT__fc_1sub_1;
    CData/*7:0*/ median__DOT__fc_1sub_2;
    CData/*0:0*/ median__DOT__fc_2sel_0;
    CData/*0:0*/ median__DOT__fc_2sel_1;
    CData/*0:0*/ median__DOT__fc_2sel_2;
    CData/*7:0*/ median__DOT__fc_2sub_0;
    CData/*7:0*/ median__DOT__fc_2sub_1;
    CData/*7:0*/ median__DOT__fc_2sub_2;
    CData/*7:0*/ median__DOT__h0;
    CData/*7:0*/ median__DOT__h1;
    CData/*7:0*/ median__DOT__h2;
    CData/*7:0*/ median__DOT__l0;
    CData/*7:0*/ median__DOT__l1;
    CData/*7:0*/ median__DOT__l2;
    CData/*7:0*/ median__DOT__m0;
    CData/*7:0*/ median__DOT__m1;
    CData/*7:0*/ median__DOT__m2;
    CData/*7:0*/ median__DOT__sec_0;
    CData/*7:0*/ median__DOT__sec_1;
    CData/*7:0*/ median__DOT__sec_2;
    CData/*7:0*/ median__DOT__shsub_1;
    CData/*7:0*/ median__DOT__slsub_1;
    CData/*0:0*/ median__DOT__smsel_0;
    CData/*7:0*/ median__DOT__smsub_0;
    CData/*7:0*/ median__DOT__smsub_1;
    CData/*7:0*/ median__DOT__smsub_2;
    CData/*0:0*/ median__DOT__tmsel_0;
    CData/*7:0*/ median__DOT__tmsub_0;
    CData/*7:0*/ median__DOT__tmsub_1;
    CData/*7:0*/ median__DOT__tmsub_2;
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlUnpacked<CData/*0:0*/, 2> __Vm_traceActivity;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    Vmedian__Syms* const vlSymsp;

    // CONSTRUCTORS
    Vmedian___024root(Vmedian__Syms* symsp, const char* v__name);
    ~Vmedian___024root();
    VL_UNCOPYABLE(Vmedian___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
