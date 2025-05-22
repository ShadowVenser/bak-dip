(* top =  1  *)
(* generator = "Amaranth" *)
module syncMux(x2, addr, clk, clr_n, y, x1);
  wire [15:0] \$1 ;
  input addr;
  wire addr;
  input clk;
  wire clk;
  wire \clk$6 ;
  input clr_n;
  wire clr_n;
  wire rst;
  input [15:0] x1;
  wire [15:0] x1;
  input [15:0] x2;
  wire [15:0] x2;
  output [15:0] y;
  reg [15:0] y = 16'h0000;
  assign rst = ~ clr_n;
  assign \$1  = addr ? x2 : x1;
  always @(posedge clk, negedge clr_n)
    if (!clr_n) y <= 16'h0000;
    else y <= \$1 ;
  assign \clk$6  = clk;
endmodule
