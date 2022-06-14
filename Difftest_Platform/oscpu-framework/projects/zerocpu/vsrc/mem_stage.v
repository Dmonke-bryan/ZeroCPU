`include "defines.v"

module mem_stage (
    //INPUT
    input clk,
    input rst,
    input rdWriteEnableM,
    input [4:0] rdWriteAddrM,
    //OUTPUT
    output rdWriteEnableW,
    output [4:0] rdWriteAddrW
);

DFF #(1) rdWriteEnable_M2W(clk,rst, rdWriteEnableM, rdWriteEnableW);
DFF #(5) rdWriteAddr_M2W(clk,rst, rdWriteAddrM, rdWriteAddrW);
    
endmodule
