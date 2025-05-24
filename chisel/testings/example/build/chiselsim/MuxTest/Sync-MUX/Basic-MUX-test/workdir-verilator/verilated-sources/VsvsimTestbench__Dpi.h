// Verilated -*- C++ -*-
// DESCRIPTION: Verilator output: Prototypes for DPI import and export functions.
//
// Verilator includes this file in all generated .cpp files that use DPI functions.
// Manually include this file where DPI .c import functions are declared to ensure
// the C functions match the expectations of the DPI imports.

#ifndef VERILATED_VSVSIMTESTBENCH__DPI_H_
#define VERILATED_VSVSIMTESTBENCH__DPI_H_  // guard

#include "svdpi.h"

#ifdef __cplusplus
extern "C" {
#endif


    // DPI EXPORTS
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:91:17
    extern void getBitWidthImpl_addr(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:23:17
    extern void getBitWidthImpl_clk(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:40:17
    extern void getBitWidthImpl_clr_n(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:57:17
    extern void getBitWidthImpl_x1(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:74:17
    extern void getBitWidthImpl_x2(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:108:17
    extern void getBitWidthImpl_y(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:101:17
    extern void getBitsImpl_addr(svBitVecVal* value_addr);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:33:17
    extern void getBitsImpl_clk(svBitVecVal* value_clk);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:50:17
    extern void getBitsImpl_clr_n(svBitVecVal* value_clr_n);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:67:17
    extern void getBitsImpl_x1(svBitVecVal* value_x1);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:84:17
    extern void getBitsImpl_x2(svBitVecVal* value_x2);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:113:17
    extern void getBitsImpl_y(svBitVecVal* value_y);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:96:17
    extern void setBitsImpl_addr(const svBitVecVal* value_addr);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:28:17
    extern void setBitsImpl_clk(const svBitVecVal* value_clk);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:45:17
    extern void setBitsImpl_clr_n(const svBitVecVal* value_clr_n);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:62:17
    extern void setBitsImpl_x1(const svBitVecVal* value_x1);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:79:17
    extern void setBitsImpl_x2(const svBitVecVal* value_x2);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:180:17
    extern void simulation_disableTrace(int* success);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:167:17
    extern void simulation_enableTrace(int* success);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:147:17
    extern void simulation_initializeTrace(const char* traceFilePath);

    // DPI IMPORTS
    // DPI import at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:18:40
    extern void initTestBenchScope();
    // DPI import at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:141:32
    extern void run_simulation(int timesteps, int* done);
    // DPI import at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:119:31
    extern int simulation_body();
    // DPI import at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/Sync-MUX/Basic-MUX-test/primary-sources/../generated-sources/testbench.sv:129:31
    extern int simulation_final();

#ifdef __cplusplus
}
#endif

#endif  // guard
