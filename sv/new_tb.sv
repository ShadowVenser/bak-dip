`timescale 1 ps/ 1 ps

module new_tb();

	//inputs
	logic clk;
	logic [31:0] wr_data;
	logic cs;
	logic wr_n;
	logic [1:0]  addr;
	logic clr_n;

	//outputs
	logic [31:0] rd_data;
	logic [7:0] pwm_out;

	//testbench variables
	int test_ptr;
	logic [31:0] test_value;

	//device under test
	pwm_only_v2 dut (
		.clk(clk),
		.wr_data(wr_data),
		.cs(cs),
		.wr_n(wr_n),
		.addr(addr),
		.clr_n(clr_n),
		.rd_data(rd_data),
		.pwm_out(pwm_out)
	);

	//create clock
	initial
	begin
		clk = 0;
		forever #10 clk = ~clk;
	end

	//reset circuit and run several tasks
	//in tests: 
	initial
	begin

		//Reset module
		clr_n = 0;
		@(negedge clk) clr_n = 1;
		test_ptr = 1;

		//test 1: Max div
		test_value = 16'hFFFF;
		@(posedge clk) one_full_pwm_count(test_value, $random() & 16'hFFFF, $random() & 16'hFFFF, test_ptr);
		test_ptr = test_ptr + 1;

		//test 2: Min div
		@(posedge clk) one_full_pwm_count(1, 0, 1, test_ptr);
		test_ptr = test_ptr + 1;

		//test 3: Max / Min duty
		test_value = $random() & 16'hFFFF;
		@(posedge clk) one_full_pwm_count(test_value, test_value, 0, test_ptr);
		test_ptr = test_ptr + 1;

		//test 5: Random tests pull

		repeat(20)
		begin
			test_value = $random() & 16'hFFFF;
			@(posedge clk) one_full_pwm_count(
				test_value, 
				$urandom_range(test_value),
				$urandom_range(test_value), 
				test_ptr);
			test_ptr = test_ptr + 1;
		end

		repeat(2) @(posedge clk);
		$stop;
	end

	//basic pwm test
	task one_full_pwm_count;

		//task inputs
		input logic[31:0] div;
		input logic[31:0] duty_a;
		input logic[31:0] duty_b;
		input int test_pointer;

		//task variables
		logic[31:0] count_a;
		logic[31:0] count_b;

		//task
		begin
			$display("\n--- test %u ---\ndiv = %u; duty_a = %u; duty_b = %u", test_pointer, div, duty_a, duty_b);
			wr_n = 0; cs = 1;
			@(negedge clk) addr = 'b10; wr_data = duty_a;
			@(negedge clk) addr = 'b11; wr_data = duty_b;
			@(negedge clk) addr = 0; wr_data = div;
			@(negedge clk) cs = 0; wr_n = 1; wr_data = 0;
			count_a = 0; count_b = 0;
			repeat(div + 1) 
			begin
				@(negedge clk) 
				count_a += pwm_out[7]; 
				count_b += pwm_out[0]; 
			end
			wr_n = 0; cs = 1;
			@(negedge clk) addr = 0;
			@(negedge clk) addr = 'b10;
			@(negedge clk) addr = 'b11;
			if ((count_a == duty_a) && (count_b == duty_b))
				$display("Test Successful!\n--- end of test %u ---\n", test_pointer);
			else
			begin
				$display("Test is Wrong!!! True duty_a = %u, True duty_a = %u\n--- test %u ends with errors ---\n", count_a, count_b, test_pointer);
				$stop;
			end
		end

	endtask : one_full_pwm_count

endmodule : new_tb