// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table implementation internals

#include "VsvsimTestbench__pch.h"
#include "VsvsimTestbench.h"
#include "VsvsimTestbench___024root.h"

void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_x1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_x2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_y_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_x1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_x1);
void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_x2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_x2);
void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_y_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ &value_y);
void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_x1_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_x1);
void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_x2_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, CData/*0:0*/ value_x2);
void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_disableTrace_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &success);
void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_enableTrace_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &success);
void VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_initializeTrace_TOP(VsvsimTestbench__Syms* __restrict vlSymsp, std::string traceFilePath);

// FUNCTIONS
VsvsimTestbench__Syms::~VsvsimTestbench__Syms()
{
}

VsvsimTestbench__Syms::VsvsimTestbench__Syms(VerilatedContext* contextp, const char* namep, VsvsimTestbench* modelp)
    : VerilatedSyms{contextp}
    // Setup internal state of the Syms class
    , __Vm_modelp{modelp}
    // Setup module instances
    , TOP{this, namep}
{
    // Configure time unit / time precision
    _vm_contextp__->timeunit(-12);
    _vm_contextp__->timeprecision(-12);
    // Setup each module's pointers to their submodules
    // Setup each module's pointer back to symbol table (for public functions)
    TOP.__Vconfigure(true);
    // Setup scopes
    __Vscope_svsimTestbench.configure(this, name(), "svsimTestbench", "svsimTestbench", -12, VerilatedScope::SCOPE_OTHER);
    // Setup export functions
    for (int __Vfinal = 0; __Vfinal < 2; ++__Vfinal) {
        __Vscope_svsimTestbench.exportInsert(__Vfinal, "getBitWidthImpl_x1", (void*)(&VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_x1_TOP));
        __Vscope_svsimTestbench.exportInsert(__Vfinal, "getBitWidthImpl_x2", (void*)(&VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_x2_TOP));
        __Vscope_svsimTestbench.exportInsert(__Vfinal, "getBitWidthImpl_y", (void*)(&VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitWidthImpl_y_TOP));
        __Vscope_svsimTestbench.exportInsert(__Vfinal, "getBitsImpl_x1", (void*)(&VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_x1_TOP));
        __Vscope_svsimTestbench.exportInsert(__Vfinal, "getBitsImpl_x2", (void*)(&VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_x2_TOP));
        __Vscope_svsimTestbench.exportInsert(__Vfinal, "getBitsImpl_y", (void*)(&VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__getBitsImpl_y_TOP));
        __Vscope_svsimTestbench.exportInsert(__Vfinal, "setBitsImpl_x1", (void*)(&VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_x1_TOP));
        __Vscope_svsimTestbench.exportInsert(__Vfinal, "setBitsImpl_x2", (void*)(&VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__setBitsImpl_x2_TOP));
        __Vscope_svsimTestbench.exportInsert(__Vfinal, "simulation_disableTrace", (void*)(&VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_disableTrace_TOP));
        __Vscope_svsimTestbench.exportInsert(__Vfinal, "simulation_enableTrace", (void*)(&VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_enableTrace_TOP));
        __Vscope_svsimTestbench.exportInsert(__Vfinal, "simulation_initializeTrace", (void*)(&VsvsimTestbench___024root____Vdpiexp_svsimTestbench__DOT__simulation_initializeTrace_TOP));
    }
}
