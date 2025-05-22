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
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/NAND-Gate/test-3/primary-sources/../generated-sources/testbench.sv:17:17
    extern void getBitWidthImpl_x1(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/NAND-Gate/test-3/primary-sources/../generated-sources/testbench.sv:34:17
    extern void getBitWidthImpl_x2(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/NAND-Gate/test-3/primary-sources/../generated-sources/testbench.sv:51:17
    extern void getBitWidthImpl_y(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/NAND-Gate/test-3/primary-sources/../generated-sources/testbench.sv:27:17
    extern void getBitsImpl_x1(svBitVecVal* value_x1);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/NAND-Gate/test-3/primary-sources/../generated-sources/testbench.sv:44:17
    extern void getBitsImpl_x2(svBitVecVal* value_x2);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/NAND-Gate/test-3/primary-sources/../generated-sources/testbench.sv:56:17
    extern void getBitsImpl_y(svBitVecVal* value_y);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/NAND-Gate/test-3/primary-sources/../generated-sources/testbench.sv:22:17
    extern void setBitsImpl_x1(const svBitVecVal* value_x1);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/NAND-Gate/test-3/primary-sources/../generated-sources/testbench.sv:39:17
    extern void setBitsImpl_x2(const svBitVecVal* value_x2);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/NAND-Gate/test-3/primary-sources/../generated-sources/testbench.sv:123:17
    extern void simulation_disableTrace(int* success);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/NAND-Gate/test-3/primary-sources/../generated-sources/testbench.sv:110:17
    extern void simulation_enableTrace(int* success);
    // DPI export at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/NAND-Gate/test-3/primary-sources/../generated-sources/testbench.sv:90:17
    extern void simulation_initializeTrace(const char* traceFilePath);

    // DPI IMPORTS
    // DPI import at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/NAND-Gate/test-3/primary-sources/../generated-sources/testbench.sv:12:40
    extern void initTestBenchScope();
    // DPI import at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/NAND-Gate/test-3/primary-sources/../generated-sources/testbench.sv:84:32
    extern void run_simulation(int timesteps, int* done);
    // DPI import at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/NAND-Gate/test-3/primary-sources/../generated-sources/testbench.sv:62:31
    extern int simulation_body();
    // DPI import at /home/venser/bak-dip/chisel/testings/example/build/chiselsim/MuxTest/NAND-Gate/test-3/primary-sources/../generated-sources/testbench.sv:72:31
    extern int simulation_final();

#ifdef __cplusplus
}
#endif

#endif  // guard
