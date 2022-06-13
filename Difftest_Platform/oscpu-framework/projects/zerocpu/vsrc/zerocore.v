`timescale 1ns/1ps

/* verilator lint_off UNDRIVEN */

`include "defines.v"
`include "if_stage.v"
`include "id_stage.v"
`include "ex_stage.v"
`include "Regfile.v"


module zerocore (
    input clk,
    input rst,
    //interface with inst/data RAM
    /* verilator lint_off UNUSED */
    input [`DATA_BUS] RamReadData,
    output RamReadEnable,
    output RamWriteEnable,
    output [`ADDR_BUS] RamReadAddr,
    output [`ADDR_BUS] RamWriteAddr,
    output [`DATA_BUS] RamWriteMask,
    output [`DATA_BUS] RamWriteData
);
    
//wire [`ADDR_BUS] pc;
wire [`ADDR_BUS] pcF;



//read inst from extern virtual RAM
wire [`INST_BUS] instF;

wire [`INST_BUS] instM;
wire [`ADDR_BUS] pcM;

wire [`ADDR_BUS] pcD;
wire [`INST_BUS] instD;

wire [`INST_BUS] instW;
wire [`ADDR_BUS] pcW;

wire [`INST_BUS] instE;
wire [`ADDR_BUS] pcE;

wire [`DATA_BUS] ina;
wire [`DATA_BUS] inb;



wire aluBsrc;
wire [3:0] aluCtl;
wire [`DATA_BUS] imm;

//id stage -> exe stage
wire  rs1ReadEnable;
wire  rs2ReadEnable;

wire  [4 : 0] rs1ReadAddr;
wire  [4 : 0] rs2ReadAddr;

//regfile -> exe stage
wire [`DATA_BUS] rs1DataD;
wire [`DATA_BUS] rs2DataD;

wire [`DATA_BUS] rs1DataE;
wire [`DATA_BUS] rs2DataE;


// exe stage -> wb stage
wire rdWriteEnableW;
wire [4 : 0]rdWriteAddrW;
wire [`DATA_BUS]rdWriteDataW;


//assign RamReadEnable = 1'b0;
assign RamReadEnable = 1'b1; //for local test

assign RamReadAddr = pcF;
assign instF = RamReadData[31:0];


if_stage u_if(
    .clk(clk),
    .rst(rst),
    .pc(pcF),
    .instF(instF),
    .instD(instD)
);



id_stage u_id(
    .inst(instD),
    .ra_en(rs1ReadEnable),
    .ra_addr(rs1ReadAddr),
    .rb_en(rs2ReadEnable),
    .rb_addr(rs2ReadAddr),
    .rd_en(rdWriteEnableW),
    .rd_addr(rdWriteAddrW),
    .imm(imm),
    .aluBsrc(aluBsrc),
    .aluCtl(aluCtl)
);



DFF #(64) rs1Data_D2E(clk, rst, 1'b1, rs1DataD,rs1DataE);
DFF #(64) rs2Data_D2E(clk, rst, 1'b1, rs2DataD,rs2DataE);

assign ina = rs1DataE;
assign inb = aluBsrc ? imm : rs2DataE;

//assign rdWriteDataW = rs1DataE + rs2DataE;
//assign rdWriteDataW = 64'h65;


ex_stage u_ex(
    .ina(ina),
    //.ra_en(ra_en),
    .inb(inb),
    //.rb_en(rb_en),
    .aluCtl(aluCtl),
    .outy(rdWriteDataW)
);


Regfile u_regs(
    .clk(clk),
    .rst(rst),
    .WriteAddr(rdWriteAddrW),
    .WriteData(rdWriteDataW),
    .WriteEnable(rdWriteEnableW),
    
    .ReadAddr1(rs1ReadAddr),
    .ReadData1(rs1DataD),
    .ReadEnable1(rs1ReadEnable),
    .ReadAddr2(rs2ReadAddr),
    .ReadData2(rs2DataD),
    .ReadEnable2(rs2ReadEnable)
    );


endmodule
