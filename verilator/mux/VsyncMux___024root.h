// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsyncMux.h for the primary calling header

#ifndef VERILATED_VSYNCMUX___024ROOT_H_
#define VERILATED_VSYNCMUX___024ROOT_H_  // guard

#include "verilated.h"


class VsyncMux__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsyncMux___024root final : public VerilatedModule {
  public:

    // DESIGN SPECIFIC STATE
    VL_IN8(clk,0,0);
    VL_IN8(clr_n,0,0);
    VL_IN8(addr,0,0);
    CData/*0:0*/ __Vtrigprevexpr___TOP__clk__0;
    CData/*0:0*/ __Vtrigprevexpr___TOP__clr_n__0;
    CData/*0:0*/ __VactContinue;
    VL_IN16(x1,15,0);
    VL_IN16(x2,15,0);
    VL_OUT16(y,15,0);
    IData/*31:0*/ __VactIterCount;
    VlTriggerVec<1> __VactTriggered;
    VlTriggerVec<1> __VnbaTriggered;

    // INTERNAL VARIABLES
    VsyncMux__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsyncMux___024root(VsyncMux__Syms* symsp, const char* v__name);
    ~VsyncMux___024root();
    VL_UNCOPYABLE(VsyncMux___024root);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
