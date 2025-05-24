module SyncMux(
        input [15:0] x1,
        input [15:0] x2,
        output reg [15:0] y,
        input addr,
        input sys_clk,
        input sys_rst
);

reg [15:0] syncmux;

// synthesis translate_off
reg dummy_s;
initial dummy_s <= 1'd0;
// synthesis translate_on


// synthesis translate_off
reg dummy_d;
// synthesis translate_on
always @(*) begin
        syncmux <= 16'd0;
        if (addr) begin
                syncmux <= x2;
        end else begin
                syncmux <= x1;
        end
// synthesis translate_off
        dummy_d <= dummy_s;
// synthesis translate_on
end

always @(posedge sys_clk) begin
        y <= syncmux;
        if (sys_rst) begin
                y <= 16'd0;
        end
end

endmodule