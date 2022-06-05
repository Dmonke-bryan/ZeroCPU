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
    input wen,
    input [WIDTH-1:0] din,
    output reg [WIDTH-1:0] dout
);
    always @(posedge clk) begin
        if(rst) dout<={WIDTH{1'b0}};
        else if(wen) dout<=din;
    end

endmodule
