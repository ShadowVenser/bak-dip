module svsimTestbench;
  reg  [$bits(dut.arr_0_0)-1:0] arr_0_0 = '0;
  reg  [$bits(dut.arr_0_1)-1:0] arr_0_1 = '0;
  reg  [$bits(dut.arr_0_2)-1:0] arr_0_2 = '0;
  reg  [$bits(dut.arr_1_0)-1:0] arr_1_0 = '0;
  reg  [$bits(dut.arr_1_1)-1:0] arr_1_1 = '0;
  reg  [$bits(dut.arr_1_2)-1:0] arr_1_2 = '0;
  reg  [$bits(dut.arr_2_0)-1:0] arr_2_0 = '0;
  reg  [$bits(dut.arr_2_1)-1:0] arr_2_1 = '0;
  reg  [$bits(dut.arr_2_2)-1:0] arr_2_2 = '0;
  wire [$bits(dut.med)-1:0] med;

Median dut (
    .arr_0_0(arr_0_0),
    .arr_0_1(arr_0_1),
    .arr_0_2(arr_0_2),
    .arr_1_0(arr_1_0),
    .arr_1_1(arr_1_1),
    .arr_1_2(arr_1_2),
    .arr_2_0(arr_2_0),
    .arr_2_1(arr_2_1),
    .arr_2_2(arr_2_2),
    .med(med)
);

  import "DPI-C" context function void initTestBenchScope();
  initial
    initTestBenchScope();
  // Port 0: arr_0_0
  export "DPI-C" function getBitWidthImpl_arr_0_0;
  function void getBitWidthImpl_arr_0_0;
    output int value;
    value = $bits(dut.arr_0_0);
  endfunction
  export "DPI-C" function setBitsImpl_arr_0_0;
  function void setBitsImpl_arr_0_0;
    input bit [$bits(dut.arr_0_0)-1:0] value_arr_0_0;
    arr_0_0 = value_arr_0_0;
  endfunction
  export "DPI-C" function getBitsImpl_arr_0_0;
  function void getBitsImpl_arr_0_0;
    output bit [$bits(dut.arr_0_0)-1:0] value_arr_0_0;
    value_arr_0_0 = arr_0_0;
  endfunction

  // Port 1: arr_0_1
  export "DPI-C" function getBitWidthImpl_arr_0_1;
  function void getBitWidthImpl_arr_0_1;
    output int value;
    value = $bits(dut.arr_0_1);
  endfunction
  export "DPI-C" function setBitsImpl_arr_0_1;
  function void setBitsImpl_arr_0_1;
    input bit [$bits(dut.arr_0_1)-1:0] value_arr_0_1;
    arr_0_1 = value_arr_0_1;
  endfunction
  export "DPI-C" function getBitsImpl_arr_0_1;
  function void getBitsImpl_arr_0_1;
    output bit [$bits(dut.arr_0_1)-1:0] value_arr_0_1;
    value_arr_0_1 = arr_0_1;
  endfunction

  // Port 2: arr_0_2
  export "DPI-C" function getBitWidthImpl_arr_0_2;
  function void getBitWidthImpl_arr_0_2;
    output int value;
    value = $bits(dut.arr_0_2);
  endfunction
  export "DPI-C" function setBitsImpl_arr_0_2;
  function void setBitsImpl_arr_0_2;
    input bit [$bits(dut.arr_0_2)-1:0] value_arr_0_2;
    arr_0_2 = value_arr_0_2;
  endfunction
  export "DPI-C" function getBitsImpl_arr_0_2;
  function void getBitsImpl_arr_0_2;
    output bit [$bits(dut.arr_0_2)-1:0] value_arr_0_2;
    value_arr_0_2 = arr_0_2;
  endfunction

  // Port 3: arr_1_0
  export "DPI-C" function getBitWidthImpl_arr_1_0;
  function void getBitWidthImpl_arr_1_0;
    output int value;
    value = $bits(dut.arr_1_0);
  endfunction
  export "DPI-C" function setBitsImpl_arr_1_0;
  function void setBitsImpl_arr_1_0;
    input bit [$bits(dut.arr_1_0)-1:0] value_arr_1_0;
    arr_1_0 = value_arr_1_0;
  endfunction
  export "DPI-C" function getBitsImpl_arr_1_0;
  function void getBitsImpl_arr_1_0;
    output bit [$bits(dut.arr_1_0)-1:0] value_arr_1_0;
    value_arr_1_0 = arr_1_0;
  endfunction

  // Port 4: arr_1_1
  export "DPI-C" function getBitWidthImpl_arr_1_1;
  function void getBitWidthImpl_arr_1_1;
    output int value;
    value = $bits(dut.arr_1_1);
  endfunction
  export "DPI-C" function setBitsImpl_arr_1_1;
  function void setBitsImpl_arr_1_1;
    input bit [$bits(dut.arr_1_1)-1:0] value_arr_1_1;
    arr_1_1 = value_arr_1_1;
  endfunction
  export "DPI-C" function getBitsImpl_arr_1_1;
  function void getBitsImpl_arr_1_1;
    output bit [$bits(dut.arr_1_1)-1:0] value_arr_1_1;
    value_arr_1_1 = arr_1_1;
  endfunction

  // Port 5: arr_1_2
  export "DPI-C" function getBitWidthImpl_arr_1_2;
  function void getBitWidthImpl_arr_1_2;
    output int value;
    value = $bits(dut.arr_1_2);
  endfunction
  export "DPI-C" function setBitsImpl_arr_1_2;
  function void setBitsImpl_arr_1_2;
    input bit [$bits(dut.arr_1_2)-1:0] value_arr_1_2;
    arr_1_2 = value_arr_1_2;
  endfunction
  export "DPI-C" function getBitsImpl_arr_1_2;
  function void getBitsImpl_arr_1_2;
    output bit [$bits(dut.arr_1_2)-1:0] value_arr_1_2;
    value_arr_1_2 = arr_1_2;
  endfunction

  // Port 6: arr_2_0
  export "DPI-C" function getBitWidthImpl_arr_2_0;
  function void getBitWidthImpl_arr_2_0;
    output int value;
    value = $bits(dut.arr_2_0);
  endfunction
  export "DPI-C" function setBitsImpl_arr_2_0;
  function void setBitsImpl_arr_2_0;
    input bit [$bits(dut.arr_2_0)-1:0] value_arr_2_0;
    arr_2_0 = value_arr_2_0;
  endfunction
  export "DPI-C" function getBitsImpl_arr_2_0;
  function void getBitsImpl_arr_2_0;
    output bit [$bits(dut.arr_2_0)-1:0] value_arr_2_0;
    value_arr_2_0 = arr_2_0;
  endfunction

  // Port 7: arr_2_1
  export "DPI-C" function getBitWidthImpl_arr_2_1;
  function void getBitWidthImpl_arr_2_1;
    output int value;
    value = $bits(dut.arr_2_1);
  endfunction
  export "DPI-C" function setBitsImpl_arr_2_1;
  function void setBitsImpl_arr_2_1;
    input bit [$bits(dut.arr_2_1)-1:0] value_arr_2_1;
    arr_2_1 = value_arr_2_1;
  endfunction
  export "DPI-C" function getBitsImpl_arr_2_1;
  function void getBitsImpl_arr_2_1;
    output bit [$bits(dut.arr_2_1)-1:0] value_arr_2_1;
    value_arr_2_1 = arr_2_1;
  endfunction

  // Port 8: arr_2_2
  export "DPI-C" function getBitWidthImpl_arr_2_2;
  function void getBitWidthImpl_arr_2_2;
    output int value;
    value = $bits(dut.arr_2_2);
  endfunction
  export "DPI-C" function setBitsImpl_arr_2_2;
  function void setBitsImpl_arr_2_2;
    input bit [$bits(dut.arr_2_2)-1:0] value_arr_2_2;
    arr_2_2 = value_arr_2_2;
  endfunction
  export "DPI-C" function getBitsImpl_arr_2_2;
  function void getBitsImpl_arr_2_2;
    output bit [$bits(dut.arr_2_2)-1:0] value_arr_2_2;
    value_arr_2_2 = arr_2_2;
  endfunction

  // Port 9: med
  export "DPI-C" function getBitWidthImpl_med;
  function void getBitWidthImpl_med;
    output int value;
    value = $bits(dut.med);
  endfunction
  export "DPI-C" function getBitsImpl_med;
  function void getBitsImpl_med;
    output bit [$bits(dut.med)-1:0] value_med;
    value_med = med;
  endfunction

  // Simulation
  import "DPI-C" context task simulation_body();
  enum {INIT, RUN, DONE} simulationState = INIT;
  initial
    simulationState = RUN;
  always @(simulationState) begin
    if (simulationState == RUN) begin
      simulation_body();
      simulationState = DONE;
    end
  end
  import "DPI-C" context task simulation_final();
  final
    simulation_final();
  `ifdef SVSIM_BACKEND_SUPPORTS_DELAY_IN_PUBLIC_FUNCTIONS
  export "DPI-C" task run_simulation;
  task run_simulation;
    input int timesteps;
    output int finish;
    #timesteps;
    finish = 0;
  endtask
  `else
  import "DPI-C" function void run_simulation(input int timesteps, output int done);
  `endif

  // Tracing
  int traceSupported = 0;
  export "DPI-C" function simulation_initializeTrace;
  function void simulation_initializeTrace;
    input string traceFilePath;
    `ifdef SVSIM_ENABLE_VCD_TRACING_SUPPORT
      $dumpfile({traceFilePath,".vcd"});
      $dumpvars(0, dut);
      traceSupported = 1;
    `endif
    `ifdef SVSIM_ENABLE_VPD_TRACING_SUPPORT
      $vcdplusfile({traceFilePath,".vpd"});
      $dumpvars(0, dut);
      $vcdpluson(0, dut);
      traceSupported = 1;
    `endif
    `ifdef SVSIM_ENABLE_FSDB_TRACING_SUPPORT
      $fsdbDumpfile({traceFilePath,".fsdb"});
      $fsdbDumpvars(0, dut);
      traceSupported = 1;
    `endif
  endfunction
  export "DPI-C" function simulation_enableTrace;
  function void simulation_enableTrace;
    output int success;
    success = traceSupported;
    `ifdef SVSIM_ENABLE_VCD_TRACING_SUPPORT
    $dumpon;
    `elsif SVSIM_ENABLE_VPD_TRACING_SUPPORT
    $dumpon;
    `endif
    `ifdef SVSIM_ENABLE_FSDB_TRACING_SUPPORT
    $fsdbDumpon;
    `endif
  endfunction
  export "DPI-C" function simulation_disableTrace;
  function void simulation_disableTrace;
    output int success;
    success = traceSupported;
    `ifdef SVSIM_ENABLE_VCD_TRACING_SUPPORT
    $dumpoff;
    `elsif SVSIM_ENABLE_VPD_TRACING_SUPPORT
    $dumpoff;
    `endif
    `ifdef SVSIM_ENABLE_FSDB_TRACING_SUPPORT
    $fsdbDumpoff;
    `endif
  endfunction

endmodule
