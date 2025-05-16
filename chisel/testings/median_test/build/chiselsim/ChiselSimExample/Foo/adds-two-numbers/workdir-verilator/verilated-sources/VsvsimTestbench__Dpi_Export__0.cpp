// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "VsvsimTestbench.h"
#include "VsvsimTestbench__Syms.h"
#include "verilated_dpi.h"


void VsvsimTestbench::getBitWidthImpl_clock(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_clock\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_clock");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_clock_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_clock_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_clock(const svBitVecVal* value_clock) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_clock\n"); );
    // Init
    CData/*0:0*/ value_clock__Vcvt;
    value_clock__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_clock");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_clock_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_clock_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_clock__Vcvt = (1U & VL_SET_I_SVBV(value_clock));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_clock__Vcvt);
}

void VsvsimTestbench::getBitsImpl_clock(svBitVecVal* value_clock) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_clock\n"); );
    // Init
    CData/*0:0*/ value_clock__Vcvt;
    value_clock__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_clock");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_clock_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_clock_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_clock__Vcvt);
    for (size_t value_clock__Vidx = 0; value_clock__Vidx < 1; ++value_clock__Vidx) VL_SET_SVBV_I(1, value_clock + 1 * value_clock__Vidx, value_clock__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_reset(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_reset\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_reset");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_reset_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_reset_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_reset(const svBitVecVal* value_reset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_reset\n"); );
    // Init
    CData/*0:0*/ value_reset__Vcvt;
    value_reset__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_reset");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_reset_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_reset_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_reset__Vcvt = (1U & VL_SET_I_SVBV(value_reset));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_reset__Vcvt);
}

void VsvsimTestbench::getBitsImpl_reset(svBitVecVal* value_reset) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_reset\n"); );
    // Init
    CData/*0:0*/ value_reset__Vcvt;
    value_reset__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_reset");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_reset_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_reset_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_reset__Vcvt);
    for (size_t value_reset__Vidx = 0; value_reset__Vidx < 1; ++value_reset__Vidx) VL_SET_SVBV_I(1, value_reset + 1 * value_reset__Vidx, value_reset__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_a(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_a\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_a");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_a_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_a_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_a(const svBitVecVal* value_a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_a\n"); );
    // Init
    CData/*7:0*/ value_a__Vcvt;
    value_a__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_a");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_a_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_a_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_a__Vcvt = (0xffU & VL_SET_I_SVBV(value_a));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_a__Vcvt);
}

void VsvsimTestbench::getBitsImpl_a(svBitVecVal* value_a) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_a\n"); );
    // Init
    CData/*7:0*/ value_a__Vcvt;
    value_a__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_a");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_a_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_a_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_a__Vcvt);
    for (size_t value_a__Vidx = 0; value_a__Vidx < 1; ++value_a__Vidx) VL_SET_SVBV_I(8, value_a + 1 * value_a__Vidx, value_a__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_b(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_b\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_b");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_b_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_b_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_b(const svBitVecVal* value_b) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_b\n"); );
    // Init
    CData/*7:0*/ value_b__Vcvt;
    value_b__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_b");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_b_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_b_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_b__Vcvt = (0xffU & VL_SET_I_SVBV(value_b));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_b__Vcvt);
}

void VsvsimTestbench::getBitsImpl_b(svBitVecVal* value_b) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_b\n"); );
    // Init
    CData/*7:0*/ value_b__Vcvt;
    value_b__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_b");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_b_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_b_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_b__Vcvt);
    for (size_t value_b__Vidx = 0; value_b__Vidx < 1; ++value_b__Vidx) VL_SET_SVBV_I(8, value_b + 1 * value_b__Vidx, value_b__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_c(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_c\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_c");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_c_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_c_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_c(svBitVecVal* value_c) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_c\n"); );
    // Init
    CData/*7:0*/ value_c__Vcvt;
    value_c__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_c");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_c_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_c_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_c__Vcvt);
    for (size_t value_c__Vidx = 0; value_c__Vidx < 1; ++value_c__Vidx) VL_SET_SVBV_I(8, value_c + 1 * value_c__Vidx, value_c__Vcvt);
}

void VsvsimTestbench::simulation_initializeTrace(const char* traceFilePath) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::simulation_initializeTrace\n"); );
    // Init
    static thread_local std::string traceFilePath__Vcvt;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("simulation_initializeTrace");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_simulation_initializeTrace_t __Vcb = (VsvsimTestbench__Vcb_simulation_initializeTrace_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    traceFilePath__Vcvt = traceFilePath;
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), traceFilePath__Vcvt);
}

void VsvsimTestbench::simulation_enableTrace(int* success) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::simulation_enableTrace\n"); );
    // Init
    IData/*31:0*/ success__Vcvt;
    success__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("simulation_enableTrace");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_simulation_enableTrace_t __Vcb = (VsvsimTestbench__Vcb_simulation_enableTrace_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), success__Vcvt);
    for (size_t success__Vidx = 0; success__Vidx < 1; ++success__Vidx) *success = success__Vcvt;
}

void VsvsimTestbench::simulation_disableTrace(int* success) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::simulation_disableTrace\n"); );
    // Init
    IData/*31:0*/ success__Vcvt;
    success__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("simulation_disableTrace");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_simulation_disableTrace_t __Vcb = (VsvsimTestbench__Vcb_simulation_disableTrace_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), success__Vcvt);
    for (size_t success__Vidx = 0; success__Vidx < 1; ++success__Vidx) *success = success__Vcvt;
}
