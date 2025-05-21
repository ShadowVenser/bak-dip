// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See VsyncMux.h for the primary calling header

#include "VsyncMux__pch.h"
#include "VsyncMux__Syms.h"
#include "VsyncMux___024root.h"

void VsyncMux___024root___ctor_var_reset(VsyncMux___024root* vlSelf);

VsyncMux___024root::VsyncMux___024root(VsyncMux__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    VsyncMux___024root___ctor_var_reset(this);
}

void VsyncMux___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

VsyncMux___024root::~VsyncMux___024root() {
}
