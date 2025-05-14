/* Machine-generated using Migen */
module top(
	input [31:0] pwm_only_v2,
	input pwm_only_v2_1,
	input pwm_only_v2_2,
	input [1:0] pwm_only_v2_3,
	output reg [31:0] pwm_only_v2_4,
	output [7:0] pwm_only_v2_5,
	input sys_clk,
	input sys_rst
);

reg [31:0] pwm_only_v26 = 32'd0;
reg [31:0] pwm_only_v27 = 32'd0;
reg [31:0] pwm_only_v28 = 32'd0;
reg [31:0] pwm_only_v29 = 32'd0;
reg pwm_only_v210 = 1'd0;
reg pwm_only_v211 = 1'd0;
wire pwm_only_v212;
wire pwm_only_v213;
wire pwm_only_v214;
wire pwm_only_v215;

// synthesis translate_off
reg dummy_s;
initial dummy_s <= 1'd0;
// synthesis translate_on

assign pwm_only_v212 = ((pwm_only_v2_1 & (~pwm_only_v2_2)) & (~pwm_only_v2_3[1]));
assign pwm_only_v213 = ((pwm_only_v2_1 & (~pwm_only_v2_2)) & pwm_only_v2_3[1]);
assign pwm_only_v214 = (pwm_only_v213 & (~pwm_only_v2_3[0]));
assign pwm_only_v215 = (pwm_only_v213 & pwm_only_v2_3[0]);

// synthesis translate_off
reg dummy_d;
// synthesis translate_on
always @(*) begin
	pwm_only_v2_4 <= 32'd0;
	if ((pwm_only_v2_3[1] == 1'd0)) begin
		pwm_only_v2_4 <= pwm_only_v26;
	end else begin
		if ((pwm_only_v2_3[0] == 1'd0)) begin
			pwm_only_v2_4 <= pwm_only_v27;
		end else begin
			pwm_only_v2_4 <= pwm_only_v28;
		end
	end
// synthesis translate_off
	dummy_d <= dummy_s;
// synthesis translate_on
end
assign pwm_only_v2_5 = (({4{(~pwm_only_v210)}} <<< 3'd4) | {4{(~pwm_only_v211)}});

always @(posedge sys_clk) begin
	if (pwm_only_v212) begin
		pwm_only_v26 <= pwm_only_v2;
	end
	if (pwm_only_v214) begin
		pwm_only_v27 <= pwm_only_v2;
	end
	if (pwm_only_v215) begin
		pwm_only_v28 <= pwm_only_v2;
	end
	if ((pwm_only_v29 >= pwm_only_v26)) begin
		pwm_only_v29 <= 1'd0;
	end else begin
		pwm_only_v29 <= (pwm_only_v29 + 1'd1);
	end
	if ((pwm_only_v29 >= pwm_only_v27)) begin
		pwm_only_v210 <= 1'd1;
	end else begin
		if ((pwm_only_v29 == 1'd0)) begin
			pwm_only_v210 <= 1'd0;
		end else begin
			pwm_only_v210 <= pwm_only_v210;
		end
	end
	if ((pwm_only_v29 >= pwm_only_v28)) begin
		pwm_only_v211 <= 1'd1;
	end else begin
		if ((pwm_only_v29 == 1'd0)) begin
			pwm_only_v211 <= 1'd0;
		end else begin
			pwm_only_v211 <= pwm_only_v211;
		end
	end
	if (sys_rst) begin
		pwm_only_v26 <= 32'd0;
		pwm_only_v27 <= 32'd0;
		pwm_only_v28 <= 32'd0;
		pwm_only_v29 <= 32'd0;
		pwm_only_v210 <= 1'd0;
		pwm_only_v211 <= 1'd0;
	end
end

endmodule


