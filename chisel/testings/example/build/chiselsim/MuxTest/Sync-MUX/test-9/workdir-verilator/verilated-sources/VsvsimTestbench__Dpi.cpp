// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Implementation of DPI export functions.
//
// Verilator compiles this file in when DPI functions are used.
// If you have multiple Verilated designs with the same DPI exported
// function names, you will get multiple definition link errors from here.
// This is an unfortunate result of the DPI specification.
// To solve this, either
//    1. Call VsvsimTestbench::{export_function} instead,
//       and do not even bother to compile this file
// or 2. Compile all __Dpi.cpp files in the same compiler run,
//       and #ifdefs already inserted here will sort everything out.

#include "VsvsimTestbench__Dpi.h"
#include "VsvsimTestbench.h"

#ifndef VL_DPIDECL_getBitWidthImpl_addr_
#define VL_DPIDECL_getBitWidthImpl_addr_
void getBitWidthImpl_addr(int* value) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:91:17
    return VsvsimTestbench::getBitWidthImpl_addr(value);
}
#endif

#ifndef VL_DPIDECL_getBitWidthImpl_clk_
#define VL_DPIDECL_getBitWidthImpl_clk_
void getBitWidthImpl_clk(int* value) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:23:17
    return VsvsimTestbench::getBitWidthImpl_clk(value);
}
#endif

#ifndef VL_DPIDECL_getBitWidthImpl_clr_n_
#define VL_DPIDECL_getBitWidthImpl_clr_n_
void getBitWidthImpl_clr_n(int* value) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:40:17
    return VsvsimTestbench::getBitWidthImpl_clr_n(value);
}
#endif

#ifndef VL_DPIDECL_getBitWidthImpl_x1_
#define VL_DPIDECL_getBitWidthImpl_x1_
void getBitWidthImpl_x1(int* value) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:57:17
    return VsvsimTestbench::getBitWidthImpl_x1(value);
}
#endif

#ifndef VL_DPIDECL_getBitWidthImpl_x2_
#define VL_DPIDECL_getBitWidthImpl_x2_
void getBitWidthImpl_x2(int* value) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:74:17
    return VsvsimTestbench::getBitWidthImpl_x2(value);
}
#endif

#ifndef VL_DPIDECL_getBitWidthImpl_y_
#define VL_DPIDECL_getBitWidthImpl_y_
void getBitWidthImpl_y(int* value) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:108:17
    return VsvsimTestbench::getBitWidthImpl_y(value);
}
#endif

#ifndef VL_DPIDECL_getBitsImpl_addr_
#define VL_DPIDECL_getBitsImpl_addr_
void getBitsImpl_addr(svBitVecVal* value_addr) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:101:17
    return VsvsimTestbench::getBitsImpl_addr(value_addr);
}
#endif

#ifndef VL_DPIDECL_getBitsImpl_clk_
#define VL_DPIDECL_getBitsImpl_clk_
void getBitsImpl_clk(svBitVecVal* value_clk) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:33:17
    return VsvsimTestbench::getBitsImpl_clk(value_clk);
}
#endif

#ifndef VL_DPIDECL_getBitsImpl_clr_n_
#define VL_DPIDECL_getBitsImpl_clr_n_
void getBitsImpl_clr_n(svBitVecVal* value_clr_n) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:50:17
    return VsvsimTestbench::getBitsImpl_clr_n(value_clr_n);
}
#endif

#ifndef VL_DPIDECL_getBitsImpl_x1_
#define VL_DPIDECL_getBitsImpl_x1_
void getBitsImpl_x1(svBitVecVal* value_x1) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:67:17
    return VsvsimTestbench::getBitsImpl_x1(value_x1);
}
#endif

#ifndef VL_DPIDECL_getBitsImpl_x2_
#define VL_DPIDECL_getBitsImpl_x2_
void getBitsImpl_x2(svBitVecVal* value_x2) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:84:17
    return VsvsimTestbench::getBitsImpl_x2(value_x2);
}
#endif

#ifndef VL_DPIDECL_getBitsImpl_y_
#define VL_DPIDECL_getBitsImpl_y_
void getBitsImpl_y(svBitVecVal* value_y) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:113:17
    return VsvsimTestbench::getBitsImpl_y(value_y);
}
#endif

#ifndef VL_DPIDECL_setBitsImpl_addr_
#define VL_DPIDECL_setBitsImpl_addr_
void setBitsImpl_addr(const svBitVecVal* value_addr) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:96:17
    return VsvsimTestbench::setBitsImpl_addr(value_addr);
}
#endif

#ifndef VL_DPIDECL_setBitsImpl_clk_
#define VL_DPIDECL_setBitsImpl_clk_
void setBitsImpl_clk(const svBitVecVal* value_clk) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:28:17
    return VsvsimTestbench::setBitsImpl_clk(value_clk);
}
#endif

#ifndef VL_DPIDECL_setBitsImpl_clr_n_
#define VL_DPIDECL_setBitsImpl_clr_n_
void setBitsImpl_clr_n(const svBitVecVal* value_clr_n) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:45:17
    return VsvsimTestbench::setBitsImpl_clr_n(value_clr_n);
}
#endif

#ifndef VL_DPIDECL_setBitsImpl_x1_
#define VL_DPIDECL_setBitsImpl_x1_
void setBitsImpl_x1(const svBitVecVal* value_x1) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:62:17
    return VsvsimTestbench::setBitsImpl_x1(value_x1);
}
#endif

#ifndef VL_DPIDECL_setBitsImpl_x2_
#define VL_DPIDECL_setBitsImpl_x2_
void setBitsImpl_x2(const svBitVecVal* value_x2) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:79:17
    return VsvsimTestbench::setBitsImpl_x2(value_x2);
}
#endif

#ifndef VL_DPIDECL_simulation_disableTrace_
#define VL_DPIDECL_simulation_disableTrace_
void simulation_disableTrace(int* success) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:180:17
    return VsvsimTestbench::simulation_disableTrace(success);
}
#endif

#ifndef VL_DPIDECL_simulation_enableTrace_
#define VL_DPIDECL_simulation_enableTrace_
void simulation_enableTrace(int* success) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:167:17
    return VsvsimTestbench::simulation_enableTrace(success);
}
#endif

#ifndef VL_DPIDECL_simulation_initializeTrace_
#define VL_DPIDECL_simulation_initializeTrace_
void simulation_initializeTrace(const char* traceFilePath) {
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/test-9/primary-sources/../generated-sources/testbench.sv:147:17
    return VsvsimTestbench::simulation_initializeTrace(traceFilePath);
}
#endif

