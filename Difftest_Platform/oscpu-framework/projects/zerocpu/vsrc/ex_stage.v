`include "defines.v"

module ex_stage (
    //INPUT
    input clk,
    input rst,
    input [`DATA_BUS] ina,
    input [`DATA_BUS] inb,
    input [3:0] aluCtl,
    input rdWriteEnableE,
    input [4:0] rdWriteAddrE,
    //OUTPUT
    output [`DATA_BUS] outy,
    output reg rdWriteEnableM,
    output [4:0] rdWriteAddrM
    
);

wire [4:0] rdWriteAddrE_r;
wire rdWriteEnableE_r;

assign rdWriteAddrE_r = rdWriteAddrE;
assign rdWriteEnableE_r = rdWriteEnableE;

wire [`DATA_BUS] resADD = ina + inb;

assign outy = (aluCtl == 4'h0) ? resADD : `ZERO_64;

DFF #(1) rdWriteEnable_E2M(clk, rst, rdWriteEnableE_r, rdWriteEnableM);
DFF #(5) rdWriteAddr_E2M(clk, rst, rdWriteAddrE_r, rdWriteAddrM);
    
endmodule
