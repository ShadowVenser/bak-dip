// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Design implementation internals
// See Vmedian.h for the primary calling header

#include "Vmedian__pch.h"
#include "Vmedian__Syms.h"
#include "Vmedian___024root.h"

void Vmedian___024root___ctor_var_reset(Vmedian___024root* vlSelf);

Vmedian___024root::Vmedian___024root(Vmedian__Syms* symsp, const char* v__name)
    : VerilatedModule{v__name}
    , vlSymsp{symsp}
 {
    // Reset structure values
    Vmedian___024root___ctor_var_reset(this);
}

void Vmedian___024root::__Vconfigure(bool first) {
    if (false && first) {}  // Prevent unused
}

Vmedian___024root::~Vmedian___024root() {
}
