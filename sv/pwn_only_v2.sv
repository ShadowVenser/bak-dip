module pwm_only_v2
(
	clk, wr_data, cs, wr_n, addr, clr_n, rd_data, pwm_out
);

	input clk;
	input [31:0] wr_data;
	input cs;
	input wr_n;
	input [1:0] addr;
	input clr_n;
	output [31:0] rd_data;
	output [7:0] pwm_out;

	/////////////////////////////////////////////////////////////////////
	// Registers and wires
	
	reg [31:0] div;
	reg [31:0] duty_a;
	reg [31:0] duty_b;
	reg [31:0] counter;
	reg		  off_a;
	reg		  off_b;
	reg [31:0] rd_data;
	wire div_en, duty_en;

	/////////////////////////////////////////////////////////////////////
	// Avalon slave interface
	
	//chip select and address decoder
	assign div_en = cs & !wr_n & !addr[1];
	assign duty_en = cs & !wr_n & addr[1];
	assign duty_a_en = duty_en & !addr[0];
	assign duty_b_en = duty_en & addr[0];

	//register write
	always @(posedge clk or negedge clr_n)
	begin
		if (clr_n == 0)
		begin
			div <= 0;
			duty_a <= 0;
			duty_b <= 0;
		end
		else
		begin
			if (div_en)	div <= wr_data;
			if (duty_a_en) duty_a <= wr_data;
			if (duty_b_en) duty_b <= wr_data;
		end		
	end

	//register read
	always @(*)
	begin
		if (addr[1] == 0)
			rd_data = div;
		else
			if (addr[0] == 0)
				rd_data = duty_a;
			else
				rd_data = duty_b;
	end
	
	/////////////////////////////////////////////////////////////////////
	// PWM logic
	
	//PWM counter
	always @(posedge clk or negedge clr_n)
	begin
		if (clr_n == 0)
			counter <= 0;
		else
			if (counter >= div)
				counter <= 0;
			else	
				counter <= counter + 1;
	end
	
	//PWM compare
	always @(posedge clk or negedge clr_n)
	begin
		if (clr_n == 0)
			off_a <= 0;
		else
			if (counter >= duty_a)
				off_a <= 1;
			else
				if (counter == 0)
					off_a <= 0;
				else
					off_a <= off_a;
	end
	
	always @(posedge clk or negedge clr_n)
	begin
		if (clr_n == 0)
			off_b <= 0;
		else
			if (counter >= duty_b)
				off_b <= 1;
			else
				if (counter == 0)
					off_b <= 0;
				else
					off_b <= off_b;
	end

	assign pwm_out = {4{!off_a}} << 4 | {4{!off_b}};
	
endmodule
