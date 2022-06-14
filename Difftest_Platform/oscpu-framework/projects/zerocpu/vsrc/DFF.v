`include "defines.v"
/* verilator lint_off MULTITOP */
/* verilator lint_off UNUSED */
//DFF module
//wen port
//rst:  0 
module DFF #(
    parameter WIDTH = 32
) (
    input clk,
    input rst,
    //input wen,
    input [WIDTH-1:0] din,
    output [WIDTH-1:0] dout
);

reg [WIDTH-1:0] dout_r;
    always @(posedge clk) begin
        if(rst) begin 
            dout_r<={WIDTH{1'b0}};
        end
        else begin
            dout_r<=din;
        end 
    end

assign dout = dout_r;

endmodule

