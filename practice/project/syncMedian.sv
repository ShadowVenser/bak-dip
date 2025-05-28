(* top =  1  *)
module syncMedian (
    input clk,
    input clr_n,
    input logic [7:0] arr [2:0][2:0],
    output logic [7:0] med
);

    innerMedian a_dev (
        .clk(clk),
        .clr_n(clr_n),
        .med(med),
        .arr_0(arr[0][0]),
        .arr_1(arr[0][1]),
        .arr_2(arr[0][2]),
        .arr_3(arr[1][0]),
        .arr_4(arr[1][1]),
        .arr_5(arr[1][2]),
        .arr_6(arr[2][0]),
        .arr_7(arr[2][1]),
        .arr_8(arr[2][2])
    );

endmodule

