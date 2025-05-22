// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "VsvsimTestbench.h"
#include "VsvsimTestbench__Syms.h"
#include "verilated_dpi.h"


void VsvsimTestbench::getBitWidthImpl_clk(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_clk\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_clk");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_clk_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_clk_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_clk(const svBitVecVal* value_clk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_clk\n"); );
    // Init
    CData/*0:0*/ value_clk__Vcvt;
    value_clk__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_clk");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_clk_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_clk_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_clk__Vcvt = (1U & VL_SET_I_SVBV(value_clk));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_clk__Vcvt);
}

void VsvsimTestbench::getBitsImpl_clk(svBitVecVal* value_clk) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_clk\n"); );
    // Init
    CData/*0:0*/ value_clk__Vcvt;
    value_clk__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_clk");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_clk_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_clk_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_clk__Vcvt);
    for (size_t value_clk__Vidx = 0; value_clk__Vidx < 1; ++value_clk__Vidx) VL_SET_SVBV_I(1, value_clk + 1 * value_clk__Vidx, value_clk__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_clr_n(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_clr_n\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_clr_n");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_clr_n_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_clr_n_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_clr_n(const svBitVecVal* value_clr_n) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_clr_n\n"); );
    // Init
    CData/*0:0*/ value_clr_n__Vcvt;
    value_clr_n__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_clr_n");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_clr_n_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_clr_n_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_clr_n__Vcvt = (1U & VL_SET_I_SVBV(value_clr_n));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_clr_n__Vcvt);
}

void VsvsimTestbench::getBitsImpl_clr_n(svBitVecVal* value_clr_n) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_clr_n\n"); );
    // Init
    CData/*0:0*/ value_clr_n__Vcvt;
    value_clr_n__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_clr_n");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_clr_n_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_clr_n_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_clr_n__Vcvt);
    for (size_t value_clr_n__Vidx = 0; value_clr_n__Vidx < 1; ++value_clr_n__Vidx) VL_SET_SVBV_I(1, value_clr_n + 1 * value_clr_n__Vidx, value_clr_n__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_x1(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_x1\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_x1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_x1_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_x1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_x1(const svBitVecVal* value_x1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_x1\n"); );
    // Init
    SData/*15:0*/ value_x1__Vcvt;
    value_x1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_x1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_x1_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_x1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_x1__Vcvt = (0xffffU & VL_SET_I_SVBV(value_x1));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_x1__Vcvt);
}

void VsvsimTestbench::getBitsImpl_x1(svBitVecVal* value_x1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_x1\n"); );
    // Init
    SData/*15:0*/ value_x1__Vcvt;
    value_x1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_x1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_x1_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_x1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_x1__Vcvt);
    for (size_t value_x1__Vidx = 0; value_x1__Vidx < 1; ++value_x1__Vidx) VL_SET_SVBV_I(16, value_x1 + 1 * value_x1__Vidx, value_x1__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_x2(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_x2\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_x2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_x2_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_x2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_x2(const svBitVecVal* value_x2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_x2\n"); );
    // Init
    SData/*15:0*/ value_x2__Vcvt;
    value_x2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_x2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_x2_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_x2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_x2__Vcvt = (0xffffU & VL_SET_I_SVBV(value_x2));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_x2__Vcvt);
}

void VsvsimTestbench::getBitsImpl_x2(svBitVecVal* value_x2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_x2\n"); );
    // Init
    SData/*15:0*/ value_x2__Vcvt;
    value_x2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_x2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_x2_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_x2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_x2__Vcvt);
    for (size_t value_x2__Vidx = 0; value_x2__Vidx < 1; ++value_x2__Vidx) VL_SET_SVBV_I(16, value_x2 + 1 * value_x2__Vidx, value_x2__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_addr(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_addr\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_addr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_addr_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_addr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_addr(const svBitVecVal* value_addr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_addr\n"); );
    // Init
    CData/*0:0*/ value_addr__Vcvt;
    value_addr__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_addr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_addr_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_addr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_addr__Vcvt = (1U & VL_SET_I_SVBV(value_addr));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_addr__Vcvt);
}

void VsvsimTestbench::getBitsImpl_addr(svBitVecVal* value_addr) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_addr\n"); );
    // Init
    CData/*0:0*/ value_addr__Vcvt;
    value_addr__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_addr");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_addr_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_addr_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_addr__Vcvt);
    for (size_t value_addr__Vidx = 0; value_addr__Vidx < 1; ++value_addr__Vidx) VL_SET_SVBV_I(1, value_addr + 1 * value_addr__Vidx, value_addr__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_y(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_y\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_y");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_y_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_y_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_y(svBitVecVal* value_y) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_y\n"); );
    // Init
    SData/*15:0*/ value_y__Vcvt;
    value_y__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_y");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_y_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_y_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_y__Vcvt);
    for (size_t value_y__Vidx = 0; value_y__Vidx < 1; ++value_y__Vidx) VL_SET_SVBV_I(16, value_y + 1 * value_y__Vidx, value_y__Vcvt);
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
