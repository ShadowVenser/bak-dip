// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VnandGate.h for the primary calling header

#ifndef VERILATED_VNANDGATE___024ROOT_H_
#define VERILATED_VNANDGATE___024ROOT_H_  // guard

#include "verilated.h"


class VnandGate__Syms;

class alignas(VL_CACHE_LINE_BYTES) VnandGate___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(x1,0,0);
    VL_IN8(x2,0,0);
    VL_OUT8(y,0,0);
    CData/*0:0*/ __VstlFirstIteration;
    CData/*0:0*/ __VicoFirstIteration;
    CData/*0:0*/ __VactContinue;
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VstlTriggered;
    VlTriggerVec<1> __VicoTriggered;
    VlTriggerVec<0> __VactTriggered;
    VlTriggerVec<0> __VnbaTriggered;

    // INTERNAL VARIABLES
    VnandGate__Syms* const vlSymsp;

    // CONSTRUCTORS
    VnandGate___024root(VnandGate__Syms* symsp, const char* v__name);
    ~VnandGate___024root();
    VL_UNCOPYABLE(VnandGate___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
