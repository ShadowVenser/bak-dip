/* Machine-generated using Migen */
module top(
	input [71:0] median,
	output reg [7:0] median_1
);

reg [7:0] median2;
reg [7:0] median3;
reg [7:0] median4;
wire median_median0;
wire median_median1;
wire median_median2;
reg [7:0] median_median3;
reg [7:0] median_median4;
reg [7:0] median_median5;
reg [7:0] median5;
reg [7:0] median6;
reg [7:0] median7;
wire median_median6;
wire median_median7;
wire median_median8;
reg [7:0] median_median9;
reg [7:0] median_median10;
reg [7:0] median_median11;
reg [7:0] median8;
reg [7:0] median9;
reg [7:0] median10;
wire median_median12;
wire median_median13;
wire median_median14;
reg [7:0] median_median15;
reg [7:0] median_median16;
reg [7:0] median_median17;
reg [7:0] median11;
reg [7:0] median12;
reg [7:0] median13;
wire median_median18;
wire median_median19;
reg [7:0] median_median20;
wire median_median21;
wire median_median22;
wire median_median23;
reg [7:0] median_median24;
reg [7:0] median_median25;
reg [7:0] median_median26;
wire median_median27;
wire median_median28;
reg [7:0] median_median29;
wire median_median30;
wire median_median31;
wire median_median32;
reg [7:0] median_median33;
reg [7:0] median_median34;
reg [7:0] median_median35;
wire [23:0] complexslicelowerer0;
wire [23:0] complexslicelowerer1;
wire [23:0] complexslicelowerer_complexslicelowerer0;
wire [23:0] complexslicelowerer_complexslicelowerer1;
wire [23:0] complexslicelowerer_complexslicelowerer2;
wire [23:0] complexslicelowerer_complexslicelowerer3;
wire [23:0] complexslicelowerer2;
wire [23:0] complexslicelowerer_complexslicelowerer4;
wire [23:0] complexslicelowerer_complexslicelowerer5;
wire [23:0] complexslicelowerer3;
wire [23:0] complexslicelowerer4;
wire [23:0] complexslicelowerer_complexslicelowerer6;
wire [23:0] complexslicelowerer_complexslicelowerer7;
wire [23:0] complexslicelowerer_complexslicelowerer8;
wire [23:0] complexslicelowerer_complexslicelowerer9;
wire [23:0] complexslicelowerer5;
wire [23:0] complexslicelowerer_complexslicelowerer10;
wire [23:0] complexslicelowerer_complexslicelowerer11;
wire [23:0] complexslicelowerer6;
wire [23:0] complexslicelowerer7;
wire [23:0] complexslicelowerer_complexslicelowerer12;
wire [23:0] complexslicelowerer_complexslicelowerer13;
wire [23:0] complexslicelowerer_complexslicelowerer14;
wire [23:0] complexslicelowerer_complexslicelowerer15;
wire [23:0] complexslicelowerer8;
wire [23:0] complexslicelowerer_complexslicelowerer16;
wire [23:0] complexslicelowerer_complexslicelowerer17;

// synthesis translate_off
reg dummy_s;
initial dummy_s <= 1'd0;
// synthesis translate_on

assign median_median0 = (complexslicelowerer0[7:0] > complexslicelowerer1[15:8]);

// synthesis translate_off
reg dummy_d;
// synthesis translate_on
always @(*) begin
	median_median3 <= 8'd0;
	if (median_median0) begin
		median_median3 <= complexslicelowerer_complexslicelowerer0[7:0];
	end else begin
		median_median3 <= complexslicelowerer_complexslicelowerer1[15:8];
	end
// synthesis translate_off
	dummy_d <= dummy_s;
// synthesis translate_on
end

// synthesis translate_off
reg dummy_d_1;
// synthesis translate_on
always @(*) begin
	median_median4 <= 8'd0;
	if (median_median0) begin
		median_median4 <= complexslicelowerer_complexslicelowerer2[15:8];
	end else begin
		median_median4 <= complexslicelowerer_complexslicelowerer3[7:0];
	end
// synthesis translate_off
	dummy_d_1 <= dummy_s;
// synthesis translate_on
end
assign median_median1 = (median_median4 > complexslicelowerer2[23:16]);

// synthesis translate_off
reg dummy_d_2;
// synthesis translate_on
always @(*) begin
	median_median5 <= 8'd0;
	if (median_median1) begin
		median_median5 <= median_median4;
	end else begin
		median_median5 <= complexslicelowerer_complexslicelowerer4[23:16];
	end
// synthesis translate_off
	dummy_d_2 <= dummy_s;
// synthesis translate_on
end

// synthesis translate_off
reg dummy_d_3;
// synthesis translate_on
always @(*) begin
	median4 <= 8'd0;
	if (median_median1) begin
		median4 <= complexslicelowerer_complexslicelowerer5[23:16];
	end else begin
		median4 <= median_median4;
	end
// synthesis translate_off
	dummy_d_3 <= dummy_s;
// synthesis translate_on
end
assign median_median2 = (median_median3 > median_median5);

// synthesis translate_off
reg dummy_d_4;
// synthesis translate_on
always @(*) begin
	median2 <= 8'd0;
	if (median_median2) begin
		median2 <= median_median3;
	end else begin
		median2 <= median_median5;
	end
// synthesis translate_off
	dummy_d_4 <= dummy_s;
// synthesis translate_on
end

// synthesis translate_off
reg dummy_d_5;
// synthesis translate_on
always @(*) begin
	median3 <= 8'd0;
	if (median_median2) begin
		median3 <= median_median5;
	end else begin
		median3 <= median_median3;
	end
// synthesis translate_off
	dummy_d_5 <= dummy_s;
// synthesis translate_on
end
assign median_median6 = (complexslicelowerer3[7:0] > complexslicelowerer4[15:8]);

// synthesis translate_off
reg dummy_d_6;
// synthesis translate_on
always @(*) begin
	median_median9 <= 8'd0;
	if (median_median6) begin
		median_median9 <= complexslicelowerer_complexslicelowerer6[7:0];
	end else begin
		median_median9 <= complexslicelowerer_complexslicelowerer7[15:8];
	end
// synthesis translate_off
	dummy_d_6 <= dummy_s;
// synthesis translate_on
end

// synthesis translate_off
reg dummy_d_7;
// synthesis translate_on
always @(*) begin
	median_median10 <= 8'd0;
	if (median_median6) begin
		median_median10 <= complexslicelowerer_complexslicelowerer8[15:8];
	end else begin
		median_median10 <= complexslicelowerer_complexslicelowerer9[7:0];
	end
// synthesis translate_off
	dummy_d_7 <= dummy_s;
// synthesis translate_on
end
assign median_median7 = (median_median10 > complexslicelowerer5[23:16]);

// synthesis translate_off
reg dummy_d_8;
// synthesis translate_on
always @(*) begin
	median_median11 <= 8'd0;
	if (median_median7) begin
		median_median11 <= median_median10;
	end else begin
		median_median11 <= complexslicelowerer_complexslicelowerer10[23:16];
	end
// synthesis translate_off
	dummy_d_8 <= dummy_s;
// synthesis translate_on
end

// synthesis translate_off
reg dummy_d_9;
// synthesis translate_on
always @(*) begin
	median7 <= 8'd0;
	if (median_median7) begin
		median7 <= complexslicelowerer_complexslicelowerer11[23:16];
	end else begin
		median7 <= median_median10;
	end
// synthesis translate_off
	dummy_d_9 <= dummy_s;
// synthesis translate_on
end
assign median_median8 = (median_median9 > median_median11);

// synthesis translate_off
reg dummy_d_10;
// synthesis translate_on
always @(*) begin
	median5 <= 8'd0;
	if (median_median8) begin
		median5 <= median_median9;
	end else begin
		median5 <= median_median11;
	end
// synthesis translate_off
	dummy_d_10 <= dummy_s;
// synthesis translate_on
end

// synthesis translate_off
reg dummy_d_11;
// synthesis translate_on
always @(*) begin
	median6 <= 8'd0;
	if (median_median8) begin
		median6 <= median_median11;
	end else begin
		median6 <= median_median9;
	end
// synthesis translate_off
	dummy_d_11 <= dummy_s;
// synthesis translate_on
end
assign median_median12 = (complexslicelowerer6[7:0] > complexslicelowerer7[15:8]);

// synthesis translate_off
reg dummy_d_12;
// synthesis translate_on
always @(*) begin
	median_median15 <= 8'd0;
	if (median_median12) begin
		median_median15 <= complexslicelowerer_complexslicelowerer12[7:0];
	end else begin
		median_median15 <= complexslicelowerer_complexslicelowerer13[15:8];
	end
// synthesis translate_off
	dummy_d_12 <= dummy_s;
// synthesis translate_on
end

// synthesis translate_off
reg dummy_d_13;
// synthesis translate_on
always @(*) begin
	median_median16 <= 8'd0;
	if (median_median12) begin
		median_median16 <= complexslicelowerer_complexslicelowerer14[15:8];
	end else begin
		median_median16 <= complexslicelowerer_complexslicelowerer15[7:0];
	end
// synthesis translate_off
	dummy_d_13 <= dummy_s;
// synthesis translate_on
end
assign median_median13 = (median_median16 > complexslicelowerer8[23:16]);

// synthesis translate_off
reg dummy_d_14;
// synthesis translate_on
always @(*) begin
	median_median17 <= 8'd0;
	if (median_median13) begin
		median_median17 <= median_median16;
	end else begin
		median_median17 <= complexslicelowerer_complexslicelowerer16[23:16];
	end
// synthesis translate_off
	dummy_d_14 <= dummy_s;
// synthesis translate_on
end

// synthesis translate_off
reg dummy_d_15;
// synthesis translate_on
always @(*) begin
	median10 <= 8'd0;
	if (median_median13) begin
		median10 <= complexslicelowerer_complexslicelowerer17[23:16];
	end else begin
		median10 <= median_median16;
	end
// synthesis translate_off
	dummy_d_15 <= dummy_s;
// synthesis translate_on
end
assign median_median14 = (median_median15 > median_median17);

// synthesis translate_off
reg dummy_d_16;
// synthesis translate_on
always @(*) begin
	median8 <= 8'd0;
	if (median_median14) begin
		median8 <= median_median15;
	end else begin
		median8 <= median_median17;
	end
// synthesis translate_off
	dummy_d_16 <= dummy_s;
// synthesis translate_on
end

// synthesis translate_off
reg dummy_d_17;
// synthesis translate_on
always @(*) begin
	median9 <= 8'd0;
	if (median_median14) begin
		median9 <= median_median17;
	end else begin
		median9 <= median_median15;
	end
// synthesis translate_off
	dummy_d_17 <= dummy_s;
// synthesis translate_on
end
assign median_median18 = (median2 > median5);

// synthesis translate_off
reg dummy_d_18;
// synthesis translate_on
always @(*) begin
	median_median20 <= 8'd0;
	if (median_median18) begin
		median_median20 <= median5;
	end else begin
		median_median20 <= median2;
	end
// synthesis translate_off
	dummy_d_18 <= dummy_s;
// synthesis translate_on
end
assign median_median19 = (median_median20 > median8);

// synthesis translate_off
reg dummy_d_19;
// synthesis translate_on
always @(*) begin
	median11 <= 8'd0;
	if (median_median19) begin
		median11 <= median8;
	end else begin
		median11 <= median_median20;
	end
// synthesis translate_off
	dummy_d_19 <= dummy_s;
// synthesis translate_on
end
assign median_median21 = (median3 > median6);

// synthesis translate_off
reg dummy_d_20;
// synthesis translate_on
always @(*) begin
	median_median24 <= 8'd0;
	if (median_median21) begin
		median_median24 <= median3;
	end else begin
		median_median24 <= median6;
	end
// synthesis translate_off
	dummy_d_20 <= dummy_s;
// synthesis translate_on
end

// synthesis translate_off
reg dummy_d_21;
// synthesis translate_on
always @(*) begin
	median_median25 <= 8'd0;
	if (median_median21) begin
		median_median25 <= median6;
	end else begin
		median_median25 <= median3;
	end
// synthesis translate_off
	dummy_d_21 <= dummy_s;
// synthesis translate_on
end
assign median_median22 = (median_median25 > median9);

// synthesis translate_off
reg dummy_d_22;
// synthesis translate_on
always @(*) begin
	median_median26 <= 8'd0;
	if (median_median22) begin
		median_median26 <= median_median25;
	end else begin
		median_median26 <= median9;
	end
// synthesis translate_off
	dummy_d_22 <= dummy_s;
// synthesis translate_on
end
assign median_median23 = (median_median24 > median_median26);

// synthesis translate_off
reg dummy_d_23;
// synthesis translate_on
always @(*) begin
	median12 <= 8'd0;
	if (median_median23) begin
		median12 <= median_median26;
	end else begin
		median12 <= median_median24;
	end
// synthesis translate_off
	dummy_d_23 <= dummy_s;
// synthesis translate_on
end
assign median_median27 = (median4 < median7);

// synthesis translate_off
reg dummy_d_24;
// synthesis translate_on
always @(*) begin
	median_median29 <= 8'd0;
	if (median_median27) begin
		median_median29 <= median7;
	end else begin
		median_median29 <= median4;
	end
// synthesis translate_off
	dummy_d_24 <= dummy_s;
// synthesis translate_on
end
assign median_median28 = (median_median29 < median10);

// synthesis translate_off
reg dummy_d_25;
// synthesis translate_on
always @(*) begin
	median13 <= 8'd0;
	if (median_median28) begin
		median13 <= median10;
	end else begin
		median13 <= median_median29;
	end
// synthesis translate_off
	dummy_d_25 <= dummy_s;
// synthesis translate_on
end
assign median_median30 = (median11 > median12);

// synthesis translate_off
reg dummy_d_26;
// synthesis translate_on
always @(*) begin
	median_median33 <= 8'd0;
	if (median_median30) begin
		median_median33 <= median11;
	end else begin
		median_median33 <= median12;
	end
// synthesis translate_off
	dummy_d_26 <= dummy_s;
// synthesis translate_on
end

// synthesis translate_off
reg dummy_d_27;
// synthesis translate_on
always @(*) begin
	median_median34 <= 8'd0;
	if (median_median30) begin
		median_median34 <= median12;
	end else begin
		median_median34 <= median11;
	end
// synthesis translate_off
	dummy_d_27 <= dummy_s;
// synthesis translate_on
end
assign median_median31 = (median_median34 > median13);

// synthesis translate_off
reg dummy_d_28;
// synthesis translate_on
always @(*) begin
	median_median35 <= 8'd0;
	if (median_median31) begin
		median_median35 <= median_median34;
	end else begin
		median_median35 <= median13;
	end
// synthesis translate_off
	dummy_d_28 <= dummy_s;
// synthesis translate_on
end
assign median_median32 = (median_median33 > median_median35);

// synthesis translate_off
reg dummy_d_29;
// synthesis translate_on
always @(*) begin
	median_1 <= 8'd0;
	median_1 <= median3;
	if (median_median32) begin
		median_1 <= median_median35;
	end else begin
		median_1 <= median_median33;
	end
// synthesis translate_off
	dummy_d_29 <= dummy_s;
// synthesis translate_on
end
assign complexslicelowerer0 = median[23:0];
assign complexslicelowerer1 = median[23:0];
assign complexslicelowerer_complexslicelowerer0 = median[23:0];
assign complexslicelowerer_complexslicelowerer1 = median[23:0];
assign complexslicelowerer_complexslicelowerer2 = median[23:0];
assign complexslicelowerer_complexslicelowerer3 = median[23:0];
assign complexslicelowerer2 = median[23:0];
assign complexslicelowerer_complexslicelowerer4 = median[23:0];
assign complexslicelowerer_complexslicelowerer5 = median[23:0];
assign complexslicelowerer3 = median[47:24];
assign complexslicelowerer4 = median[47:24];
assign complexslicelowerer_complexslicelowerer6 = median[47:24];
assign complexslicelowerer_complexslicelowerer7 = median[47:24];
assign complexslicelowerer_complexslicelowerer8 = median[47:24];
assign complexslicelowerer_complexslicelowerer9 = median[47:24];
assign complexslicelowerer5 = median[47:24];
assign complexslicelowerer_complexslicelowerer10 = median[47:24];
assign complexslicelowerer_complexslicelowerer11 = median[47:24];
assign complexslicelowerer6 = median[71:48];
assign complexslicelowerer7 = median[71:48];
assign complexslicelowerer_complexslicelowerer12 = median[71:48];
assign complexslicelowerer_complexslicelowerer13 = median[71:48];
assign complexslicelowerer_complexslicelowerer14 = median[71:48];
assign complexslicelowerer_complexslicelowerer15 = median[71:48];
assign complexslicelowerer8 = median[71:48];
assign complexslicelowerer_complexslicelowerer16 = median[71:48];
assign complexslicelowerer_complexslicelowerer17 = median[71:48];

endmodule


