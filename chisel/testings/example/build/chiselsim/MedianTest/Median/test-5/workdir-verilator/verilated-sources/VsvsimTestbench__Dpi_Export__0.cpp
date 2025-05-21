// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
#include "VsvsimTestbench.h"
#include "VsvsimTestbench__Syms.h"
#include "verilated_dpi.h"


void VsvsimTestbench::getBitWidthImpl_arr_0_0(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_arr_0_0\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_arr_0_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_arr_0_0_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_arr_0_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_arr_0_0(const svBitVecVal* value_arr_0_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_arr_0_0\n"); );
    // Init
    CData/*7:0*/ value_arr_0_0__Vcvt;
    value_arr_0_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_arr_0_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_arr_0_0_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_arr_0_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_arr_0_0__Vcvt = (0xffU & VL_SET_I_SVBV(value_arr_0_0));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_0_0__Vcvt);
}

void VsvsimTestbench::getBitsImpl_arr_0_0(svBitVecVal* value_arr_0_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_arr_0_0\n"); );
    // Init
    CData/*7:0*/ value_arr_0_0__Vcvt;
    value_arr_0_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_arr_0_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_arr_0_0_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_arr_0_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_0_0__Vcvt);
    for (size_t value_arr_0_0__Vidx = 0; value_arr_0_0__Vidx < 1; ++value_arr_0_0__Vidx) VL_SET_SVBV_I(8, value_arr_0_0 + 1 * value_arr_0_0__Vidx, value_arr_0_0__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_arr_0_1(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_arr_0_1\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_arr_0_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_arr_0_1_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_arr_0_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_arr_0_1(const svBitVecVal* value_arr_0_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_arr_0_1\n"); );
    // Init
    CData/*7:0*/ value_arr_0_1__Vcvt;
    value_arr_0_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_arr_0_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_arr_0_1_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_arr_0_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_arr_0_1__Vcvt = (0xffU & VL_SET_I_SVBV(value_arr_0_1));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_0_1__Vcvt);
}

void VsvsimTestbench::getBitsImpl_arr_0_1(svBitVecVal* value_arr_0_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_arr_0_1\n"); );
    // Init
    CData/*7:0*/ value_arr_0_1__Vcvt;
    value_arr_0_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_arr_0_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_arr_0_1_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_arr_0_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_0_1__Vcvt);
    for (size_t value_arr_0_1__Vidx = 0; value_arr_0_1__Vidx < 1; ++value_arr_0_1__Vidx) VL_SET_SVBV_I(8, value_arr_0_1 + 1 * value_arr_0_1__Vidx, value_arr_0_1__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_arr_0_2(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_arr_0_2\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_arr_0_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_arr_0_2_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_arr_0_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_arr_0_2(const svBitVecVal* value_arr_0_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_arr_0_2\n"); );
    // Init
    CData/*7:0*/ value_arr_0_2__Vcvt;
    value_arr_0_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_arr_0_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_arr_0_2_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_arr_0_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_arr_0_2__Vcvt = (0xffU & VL_SET_I_SVBV(value_arr_0_2));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_0_2__Vcvt);
}

void VsvsimTestbench::getBitsImpl_arr_0_2(svBitVecVal* value_arr_0_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_arr_0_2\n"); );
    // Init
    CData/*7:0*/ value_arr_0_2__Vcvt;
    value_arr_0_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_arr_0_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_arr_0_2_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_arr_0_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_0_2__Vcvt);
    for (size_t value_arr_0_2__Vidx = 0; value_arr_0_2__Vidx < 1; ++value_arr_0_2__Vidx) VL_SET_SVBV_I(8, value_arr_0_2 + 1 * value_arr_0_2__Vidx, value_arr_0_2__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_arr_1_0(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_arr_1_0\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_arr_1_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_arr_1_0_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_arr_1_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_arr_1_0(const svBitVecVal* value_arr_1_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_arr_1_0\n"); );
    // Init
    CData/*7:0*/ value_arr_1_0__Vcvt;
    value_arr_1_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_arr_1_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_arr_1_0_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_arr_1_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_arr_1_0__Vcvt = (0xffU & VL_SET_I_SVBV(value_arr_1_0));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_1_0__Vcvt);
}

void VsvsimTestbench::getBitsImpl_arr_1_0(svBitVecVal* value_arr_1_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_arr_1_0\n"); );
    // Init
    CData/*7:0*/ value_arr_1_0__Vcvt;
    value_arr_1_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_arr_1_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_arr_1_0_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_arr_1_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_1_0__Vcvt);
    for (size_t value_arr_1_0__Vidx = 0; value_arr_1_0__Vidx < 1; ++value_arr_1_0__Vidx) VL_SET_SVBV_I(8, value_arr_1_0 + 1 * value_arr_1_0__Vidx, value_arr_1_0__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_arr_1_1(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_arr_1_1\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_arr_1_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_arr_1_1_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_arr_1_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_arr_1_1(const svBitVecVal* value_arr_1_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_arr_1_1\n"); );
    // Init
    CData/*7:0*/ value_arr_1_1__Vcvt;
    value_arr_1_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_arr_1_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_arr_1_1_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_arr_1_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_arr_1_1__Vcvt = (0xffU & VL_SET_I_SVBV(value_arr_1_1));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_1_1__Vcvt);
}

void VsvsimTestbench::getBitsImpl_arr_1_1(svBitVecVal* value_arr_1_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_arr_1_1\n"); );
    // Init
    CData/*7:0*/ value_arr_1_1__Vcvt;
    value_arr_1_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_arr_1_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_arr_1_1_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_arr_1_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_1_1__Vcvt);
    for (size_t value_arr_1_1__Vidx = 0; value_arr_1_1__Vidx < 1; ++value_arr_1_1__Vidx) VL_SET_SVBV_I(8, value_arr_1_1 + 1 * value_arr_1_1__Vidx, value_arr_1_1__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_arr_1_2(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_arr_1_2\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_arr_1_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_arr_1_2_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_arr_1_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_arr_1_2(const svBitVecVal* value_arr_1_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_arr_1_2\n"); );
    // Init
    CData/*7:0*/ value_arr_1_2__Vcvt;
    value_arr_1_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_arr_1_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_arr_1_2_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_arr_1_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_arr_1_2__Vcvt = (0xffU & VL_SET_I_SVBV(value_arr_1_2));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_1_2__Vcvt);
}

void VsvsimTestbench::getBitsImpl_arr_1_2(svBitVecVal* value_arr_1_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_arr_1_2\n"); );
    // Init
    CData/*7:0*/ value_arr_1_2__Vcvt;
    value_arr_1_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_arr_1_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_arr_1_2_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_arr_1_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_1_2__Vcvt);
    for (size_t value_arr_1_2__Vidx = 0; value_arr_1_2__Vidx < 1; ++value_arr_1_2__Vidx) VL_SET_SVBV_I(8, value_arr_1_2 + 1 * value_arr_1_2__Vidx, value_arr_1_2__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_arr_2_0(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_arr_2_0\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_arr_2_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_arr_2_0_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_arr_2_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_arr_2_0(const svBitVecVal* value_arr_2_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_arr_2_0\n"); );
    // Init
    CData/*7:0*/ value_arr_2_0__Vcvt;
    value_arr_2_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_arr_2_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_arr_2_0_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_arr_2_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_arr_2_0__Vcvt = (0xffU & VL_SET_I_SVBV(value_arr_2_0));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_2_0__Vcvt);
}

void VsvsimTestbench::getBitsImpl_arr_2_0(svBitVecVal* value_arr_2_0) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_arr_2_0\n"); );
    // Init
    CData/*7:0*/ value_arr_2_0__Vcvt;
    value_arr_2_0__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_arr_2_0");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_arr_2_0_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_arr_2_0_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_2_0__Vcvt);
    for (size_t value_arr_2_0__Vidx = 0; value_arr_2_0__Vidx < 1; ++value_arr_2_0__Vidx) VL_SET_SVBV_I(8, value_arr_2_0 + 1 * value_arr_2_0__Vidx, value_arr_2_0__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_arr_2_1(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_arr_2_1\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_arr_2_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_arr_2_1_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_arr_2_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_arr_2_1(const svBitVecVal* value_arr_2_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_arr_2_1\n"); );
    // Init
    CData/*7:0*/ value_arr_2_1__Vcvt;
    value_arr_2_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_arr_2_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_arr_2_1_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_arr_2_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_arr_2_1__Vcvt = (0xffU & VL_SET_I_SVBV(value_arr_2_1));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_2_1__Vcvt);
}

void VsvsimTestbench::getBitsImpl_arr_2_1(svBitVecVal* value_arr_2_1) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_arr_2_1\n"); );
    // Init
    CData/*7:0*/ value_arr_2_1__Vcvt;
    value_arr_2_1__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_arr_2_1");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_arr_2_1_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_arr_2_1_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_2_1__Vcvt);
    for (size_t value_arr_2_1__Vidx = 0; value_arr_2_1__Vidx < 1; ++value_arr_2_1__Vidx) VL_SET_SVBV_I(8, value_arr_2_1 + 1 * value_arr_2_1__Vidx, value_arr_2_1__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_arr_2_2(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_arr_2_2\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_arr_2_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_arr_2_2_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_arr_2_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::setBitsImpl_arr_2_2(const svBitVecVal* value_arr_2_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::setBitsImpl_arr_2_2\n"); );
    // Init
    CData/*7:0*/ value_arr_2_2__Vcvt;
    value_arr_2_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("setBitsImpl_arr_2_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_setBitsImpl_arr_2_2_t __Vcb = (VsvsimTestbench__Vcb_setBitsImpl_arr_2_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    value_arr_2_2__Vcvt = (0xffU & VL_SET_I_SVBV(value_arr_2_2));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_2_2__Vcvt);
}

void VsvsimTestbench::getBitsImpl_arr_2_2(svBitVecVal* value_arr_2_2) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_arr_2_2\n"); );
    // Init
    CData/*7:0*/ value_arr_2_2__Vcvt;
    value_arr_2_2__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_arr_2_2");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_arr_2_2_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_arr_2_2_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_arr_2_2__Vcvt);
    for (size_t value_arr_2_2__Vidx = 0; value_arr_2_2__Vidx < 1; ++value_arr_2_2__Vidx) VL_SET_SVBV_I(8, value_arr_2_2 + 1 * value_arr_2_2__Vidx, value_arr_2_2__Vcvt);
}

void VsvsimTestbench::getBitWidthImpl_med(int* value) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitWidthImpl_med\n"); );
    // Init
    IData/*31:0*/ value__Vcvt;
    value__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitWidthImpl_med");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitWidthImpl_med_t __Vcb = (VsvsimTestbench__Vcb_getBitWidthImpl_med_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value__Vcvt);
    for (size_t value__Vidx = 0; value__Vidx < 1; ++value__Vidx) *value = value__Vcvt;
}

void VsvsimTestbench::getBitsImpl_med(svBitVecVal* value_med) {
    VL_DEBUG_IF(VL_DBG_MSGF("+    VsvsimTestbench___024root::getBitsImpl_med\n"); );
    // Init
    CData/*7:0*/ value_med__Vcvt;
    value_med__Vcvt = 0;
    // Body
    static int __Vfuncnum = -1;
    if (VL_UNLIKELY(__Vfuncnum == -1)) __Vfuncnum = Verilated::exportFuncNum("getBitsImpl_med");
    const VerilatedScope* __Vscopep = Verilated::dpiScope();
    VsvsimTestbench__Vcb_getBitsImpl_med_t __Vcb = (VsvsimTestbench__Vcb_getBitsImpl_med_t)(VerilatedScope::exportFind(__Vscopep, __Vfuncnum));
    (*__Vcb)((VsvsimTestbench__Syms*)(__Vscopep->symsp()), value_med__Vcvt);
    for (size_t value_med__Vidx = 0; value_med__Vidx < 1; ++value_med__Vidx) VL_SET_SVBV_I(8, value_med + 1 * value_med__Vidx, value_med__Vcvt);
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
