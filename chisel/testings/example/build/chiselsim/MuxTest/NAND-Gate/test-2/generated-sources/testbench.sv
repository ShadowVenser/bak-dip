module svsimTestbench;
  reg  [$bits(dut.x1)-1:0] x1 = '0;
  reg  [$bits(dut.x2)-1:0] x2 = '0;
  wire [$bits(dut.y)-1:0] y;

NandGate dut (
    .x1(x1),
    .x2(x2),
    .y(y)
);

  import "DPI-C" context function void initTestBenchScope();
  initial
    initTestBenchScope();
  // Port 0: x1
  export "DPI-C" function getBitWidthImpl_x1;
  function void getBitWidthImpl_x1;
    output int value;
    value = $bits(dut.x1);
  endfunction
  export "DPI-C" function setBitsImpl_x1;
  function void setBitsImpl_x1;
    input bit [$bits(dut.x1)-1:0] value_x1;
    x1 = value_x1;
  endfunction
  export "DPI-C" function getBitsImpl_x1;
  function void getBitsImpl_x1;
    output bit [$bits(dut.x1)-1:0] value_x1;
    value_x1 = x1;
  endfunction

  // Port 1: x2
  export "DPI-C" function getBitWidthImpl_x2;
  function void getBitWidthImpl_x2;
    output int value;
    value = $bits(dut.x2);
  endfunction
  export "DPI-C" function setBitsImpl_x2;
  function void setBitsImpl_x2;
    input bit [$bits(dut.x2)-1:0] value_x2;
    x2 = value_x2;
  endfunction
  export "DPI-C" function getBitsImpl_x2;
  function void getBitsImpl_x2;
    output bit [$bits(dut.x2)-1:0] value_x2;
    value_x2 = x2;
  endfunction

  // Port 2: y
  export "DPI-C" function getBitWidthImpl_y;
  function void getBitWidthImpl_y;
    output int value;
    value = $bits(dut.y);
  endfunction
  export "DPI-C" function getBitsImpl_y;
  function void getBitsImpl_y;
    output bit [$bits(dut.y)-1:0] value_y;
    value_y = y;
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
