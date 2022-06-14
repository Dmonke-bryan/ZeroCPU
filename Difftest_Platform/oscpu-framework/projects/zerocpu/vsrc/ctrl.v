`timescale 1ns/1ps

module ctrl (
    //INPUT 
    input clk,
    input rst,
    input [4:0] rs1ReadAddr,
    input [4:0] rs2ReadAddr,
    input [4:0] rdWriteAddrE,
    input [4:0] rdWriteAddrM,
    input rs1ReadEnable,
    input rs2ReadEnable,
    //OUTPUT 
    output [1:0]    Redirect1,
    output [1:0]    Redirect2
);
    
wire [1:0] Redirect1_r;
wire [1:0] Redirect2_r;

assign Redirect1_r = {rs2ReadAddr!=5'b0, rs1ReadAddr!=5'b0} & {(rdWriteAddrE == rs2ReadAddr)&rs2ReadEnable,(rdWriteAddrE == rs1ReadAddr)&rs1ReadEnable};
assign Redirect2_r = (~Redirect1_r)& {rs2ReadAddr!=5'b0, rs1ReadAddr!=5'b0} & {(rdWriteAddrM == rs2ReadAddr)&rs2ReadEnable,(rdWriteAddrM == rs1ReadAddr)&rs1ReadEnable};

DFF #(2) Redirect1_dff(clk,rst, Redirect1_r,Redirect1);
DFF #(2) Redirect2_dff(clk,rst, Redirect2_r,Redirect2);

endmodule
