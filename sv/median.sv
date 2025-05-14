module median
(
    arr, med
);

    input [7:0] arr [2:0][2:0];
    output [7:0] med;

    wire [7:0] row1 [2:0];
    wire [7:0] row2 [2:0];
    wire [7:0] row3 [2:0];

    assign row1 = arr[0];
    assign row2 = arr[1];
    assign row3 = arr[2];
    
    //// First Column in scheme
    
    wire [7:0] f_subs [8:0];
    wire f_sels [8:0];

    wire [7:0] f_high [2:0];
    wire [7:0] f_med  [2:0];
    wire [7:0] f_low  [2:0];

    //   First triplet
    assign f_sels[0] = row1[0] > row1[1];
	assign f_subs[0] = (f_sels[0]) ? row1[0] : row1[1];
    assign f_subs[1] = (~f_sels[0]) ? row1[0] : row1[1];
	 
    assign f_sels[1] = f_subs[1] > row1[2]; 
	assign f_subs[2] = (f_sels[1]) ? f_subs[1] : row1[2];
    assign f_low[0] = (~f_sels[1]) ? f_subs[1] : row1[2]; 

    assign f_sels[2] = f_subs[0] > f_subs[2]; 
	assign f_high[0] = (f_sels[2]) ? f_subs[0] : f_subs[2];
    assign f_med[0]  = (~f_sels[2]) ? f_subs[0] : f_subs[2];

    //  Second triplet
    assign f_sels[3] = row2[0] > row2[1];
	assign f_subs[3] = (f_sels[3]) ? row2[0] : row2[1];
    assign f_subs[4] = (~f_sels[3]) ? row2[0] : row2[1];
	 
    assign f_sels[4] = f_subs[4] > row2[2]; 
	assign f_subs[5] = (f_sels[4]) ? f_subs[4] : row2[2];
    assign f_low[1] = (~f_sels[4]) ? f_subs[4] : row2[2]; 

    assign f_sels[5] = f_subs[3] > f_subs[5]; 
	assign f_high[1] = (f_sels[5]) ? f_subs[3] : f_subs[5];
    assign f_med[1]  = (~f_sels[5]) ? f_subs[3] : f_subs[5];

    //  Third triplet
    assign f_sels[6] = row3[0] > row3[1];
	assign f_subs[6] = (f_sels[6]) ? row3[0] : row3[1];
    assign f_subs[7] = (~f_sels[6]) ? row3[0] : row3[1];
	 
    assign f_sels[7] = f_subs[7] > row3[2]; 
	assign f_subs[8] = (f_sels[7]) ? f_subs[7] : row3[2];
    assign f_low[2] = (~f_sels[7]) ? f_subs[7] : row3[2]; 

    assign f_sels[8] = f_subs[6] > f_subs[8]; 
	assign f_high[2] = (f_sels[8]) ? f_subs[6] : f_subs[8];
    assign f_med[2]  = (~f_sels[8]) ? f_subs[6] : f_subs[8];


    //// Second column in scheme

    wire [7:0] s_subs [4:0];
    wire s_sels [6:0];

    wire [7:0] s_high;
    wire [7:0] s_med;
    wire [7:0] s_low;

    // First pair
    assign s_sels[0] = f_high[0] > f_high[1];
    assign s_subs[0] = s_sels[0] ? f_high[1] : f_high[0];

    assign s_sels[1] = s_subs[0] > f_high[2];
    assign s_high = s_sels[1] ? f_high[2] : s_subs[0];

    // Second triplet
    assign s_sels[2] = f_med[0] > f_med[1];
    assign s_subs[1] = (s_sels[2]) ? f_med[0] : f_med[1];
    assign s_subs[2] = (~s_sels[2]) ? f_med[0] : f_med[1];

    assign s_sels[3] = s_subs[2] > f_med[2];
    assign s_subs[3] = s_sels[3] ? s_subs[2] : f_med[2];

    assign s_sels[4] = s_subs[1] > s_subs[3];
    assign s_med = s_sels[4] ? s_subs[3] : s_subs[1];

    // Third pair
    assign s_sels[5] = f_low[0] > f_low[1];
    assign s_subs[4] = s_sels[5] ? f_low[0] : f_low[1];

    assign s_sels[6] = s_subs[4] > f_low[2];
    assign s_low = s_sels[6] ? s_subs[4] : f_low[2];


    //// Third column in scheme

    wire [7:0] t_subs [2:0];
    wire t_sels [2:0];

    // Last triplet
    assign t_sels[0] = s_high > s_med;
    assign t_subs[0] = (t_sels[0]) ? s_high : s_med;
    assign t_subs[1] = (~t_sels[0]) ? s_high : s_med;

    assign t_sels[1] = t_subs[1] > s_low;
    assign t_subs[2] = t_sels[1] ? t_subs[1] : s_low;

    assign t_sels[2] = t_subs[0] > t_subs[2];
    assign med = t_sels[2] ? t_subs[2] : t_subs[0];

endmodule