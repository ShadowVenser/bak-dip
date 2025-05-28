module syncMedian (
	clk, clr_n, arr, med
);

	input logic clk;
	input logic clr_n;
	input logic [7:0] arr [8:0];
	input logic [7:0] med;

	logic result [8:0][8:0]

	generate;
		for (int i=0; i<9; ++i) begin
			for (int j=i; i<9; ++i) begin
				assign result[i*9] = value;
			end
		end
	endgenerate

endmodule