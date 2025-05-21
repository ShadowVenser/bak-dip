// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Symbol table internal header
//
// Internal details; most calling programs do not need this header,
// unless using verilator public meta comments.

#ifndef VERILATED_VSVSIMTESTBENCH__SYMS_H_
#define VERILATED_VSVSIMTESTBENCH__SYMS_H_  // guard

#include "verilated.h"

// INCLUDE MODEL CLASS

#include "VsvsimTestbench.h"

// INCLUDE MODULE CLASSES
#include "VsvsimTestbench___024root.h"

// DPI TYPES for DPI Export callbacks (Internal use)
using VsvsimTestbench__Vcb_getBitWidthImpl_arr_0_0_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_arr_0_1_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_arr_0_2_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_arr_1_0_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_arr_1_1_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_arr_1_2_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_arr_2_0_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_arr_2_1_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_arr_2_2_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitWidthImpl_med_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &value);
using VsvsimTestbench__Vcb_getBitsImpl_arr_0_0_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ &value_arr_0_0);
using VsvsimTestbench__Vcb_getBitsImpl_arr_0_1_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ &value_arr_0_1);
using VsvsimTestbench__Vcb_getBitsImpl_arr_0_2_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ &value_arr_0_2);
using VsvsimTestbench__Vcb_getBitsImpl_arr_1_0_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ &value_arr_1_0);
using VsvsimTestbench__Vcb_getBitsImpl_arr_1_1_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ &value_arr_1_1);
using VsvsimTestbench__Vcb_getBitsImpl_arr_1_2_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ &value_arr_1_2);
using VsvsimTestbench__Vcb_getBitsImpl_arr_2_0_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ &value_arr_2_0);
using VsvsimTestbench__Vcb_getBitsImpl_arr_2_1_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ &value_arr_2_1);
using VsvsimTestbench__Vcb_getBitsImpl_arr_2_2_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ &value_arr_2_2);
using VsvsimTestbench__Vcb_getBitsImpl_med_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ &value_med);
using VsvsimTestbench__Vcb_setBitsImpl_arr_0_0_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ value_arr_0_0);
using VsvsimTestbench__Vcb_setBitsImpl_arr_0_1_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ value_arr_0_1);
using VsvsimTestbench__Vcb_setBitsImpl_arr_0_2_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ value_arr_0_2);
using VsvsimTestbench__Vcb_setBitsImpl_arr_1_0_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ value_arr_1_0);
using VsvsimTestbench__Vcb_setBitsImpl_arr_1_1_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ value_arr_1_1);
using VsvsimTestbench__Vcb_setBitsImpl_arr_1_2_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ value_arr_1_2);
using VsvsimTestbench__Vcb_setBitsImpl_arr_2_0_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ value_arr_2_0);
using VsvsimTestbench__Vcb_setBitsImpl_arr_2_1_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ value_arr_2_1);
using VsvsimTestbench__Vcb_setBitsImpl_arr_2_2_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, CData/*7:0*/ value_arr_2_2);
using VsvsimTestbench__Vcb_simulation_disableTrace_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &success);
using VsvsimTestbench__Vcb_simulation_enableTrace_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, IData/*31:0*/ &success);
using VsvsimTestbench__Vcb_simulation_initializeTrace_t = void (*) (VsvsimTestbench__Syms* __restrict vlSymsp, std::string traceFilePath);

// SYMS CLASS (contains all model state)
class alignas(VL_CACHE_LINE_BYTES)VsvsimTestbench__Syms final : public VerilatedSyms {
  public:
    // INTERNAL STATE
    VsvsimTestbench* const __Vm_modelp;
    VlDeleter __Vm_deleter;
    bool __Vm_didInit = false;

    // MODULE INSTANCE STATE
    VsvsimTestbench___024root      TOP;

    // SCOPE NAMES
    VerilatedScope __Vscope_svsimTestbench;

    // CONSTRUCTORS
    VsvsimTestbench__Syms(VerilatedContext* contextp, const char* namep, VsvsimTestbench* modelp);
    ~VsvsimTestbench__Syms();

    // METHODS
    const char* name() { return TOP.name(); }
};

#endif  // guard
