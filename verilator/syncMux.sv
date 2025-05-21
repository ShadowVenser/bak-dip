module syncMux 
(
  x1, x2, y, addr, clk, clr_n
);
  
  input logic [15:0] x1;
  input logic [15:0] x2;
  input logic addr;
  input logic clk;
  input logic clr_n;
  output logic [15:0] y;
  
  logic [15:0] out_value;
  
  always_comb begin
    out_value  = addr ? x2 : x1;
  end
  
  always_ff @(posedge clk or negedge clr_n)
  begin
    if (clr_n == 0)
      y <= 0;
    else
      y <= out_value;
  end
  
endmodule
