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
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:55:17
    extern void getBitWidthImpl_a(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:72:17
    extern void getBitWidthImpl_b(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:89:17
    extern void getBitWidthImpl_c(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:21:17
    extern void getBitWidthImpl_clock(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:38:17
    extern void getBitWidthImpl_reset(int* value);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:65:17
    extern void getBitsImpl_a(svBitVecVal* value_a);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:82:17
    extern void getBitsImpl_b(svBitVecVal* value_b);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:94:17
    extern void getBitsImpl_c(svBitVecVal* value_c);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:31:17
    extern void getBitsImpl_clock(svBitVecVal* value_clock);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:48:17
    extern void getBitsImpl_reset(svBitVecVal* value_reset);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:60:17
    extern void setBitsImpl_a(const svBitVecVal* value_a);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:77:17
    extern void setBitsImpl_b(const svBitVecVal* value_b);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:26:17
    extern void setBitsImpl_clock(const svBitVecVal* value_clock);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:43:17
    extern void setBitsImpl_reset(const svBitVecVal* value_reset);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:161:17
    extern void simulation_disableTrace(int* success);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:148:17
    extern void simulation_enableTrace(int* success);
    // DPI export at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:128:17
    extern void simulation_initializeTrace(const char* traceFilePath);

    // DPI IMPORTS
    // DPI import at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:16:40
    extern void initTestBenchScope();
    // DPI import at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:122:32
    extern void run_simulation(int timesteps, int* done);
    // DPI import at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:100:31
    extern int simulation_body();
    // DPI import at /home/venser/bak-dip/chisel/testings/median_test/build/chiselsim/ChiselSimExample/Foo/adds-two-numbers/primary-sources/../generated-sources/testbench.sv:110:31
    extern int simulation_final();

#ifdef __cplusplus
}
#endif

#endif  // guard
