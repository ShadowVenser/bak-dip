// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design internal header
// See VsvsimTestbench.h for the primary calling header

#ifndef VERILATED_VSVSIMTESTBENCH___024UNIT_H_
#define VERILATED_VSVSIMTESTBENCH___024UNIT_H_  // guard

#include "verilated.h"


class VsvsimTestbench__Syms;

class alignas(VL_CACHE_LINE_BYTES) VsvsimTestbench___024unit final : public VerilatedModule {
  public:

    // INTERNAL VARIABLES
    VsvsimTestbench__Syms* const vlSymsp;

    // CONSTRUCTORS
    VsvsimTestbench___024unit(VsvsimTestbench__Syms* symsp, const char* v__name);
    ~VsvsimTestbench___024unit();
    VL_UNCOPYABLE(VsvsimTestbench___024unit);

    // INTERNAL METHODS
    void __Vconfigure(bool first);
};


#endif  // guard
