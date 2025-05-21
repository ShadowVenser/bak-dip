module nandGate 
(
  x1, x2, y
);
  
  input logic x1;
  input logic x2;
  output logic y;
  
  assign y = ~(x1 & x2);
  
endmodule
