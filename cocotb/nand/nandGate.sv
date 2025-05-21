/* Machine-generated using Migen */
module nandGate(
	input x1,
	input x2,
	output y
);

wire nandgate;

assign nandgate = (x1 & x2);
assign y = (~nandgate);

endmodule
