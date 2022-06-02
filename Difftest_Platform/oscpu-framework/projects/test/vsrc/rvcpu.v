
/* verilator lint_off UNUSED */
//--xuezhen--

`timescale 1ns / 1ps

`include "defines.v"


module rvcpu(
  input wire            clk,
  input wire            rst,
  input wire  [`INST_BUS]  instF,
  input wire [`DATA_BUS] RamReadData,
  

  output wire RamReadEnable,
  output wire RamWriteEnable,
  output wire [`ADDR_BUS] RamReadAddr,
  output wire [`DATA_BUS] RamWriteMask,
  output wire [`ADDR_BUS] RamWriteAddr,
  output wire [`DATA_BUS] RamWriteData,

  output wire [`ADDR_BUS]  pcF, 
  output wire           pcEnableF,

  output wire [`REG_BUS] regs_o[0 : 31] 
);


// if_stage -> id_stage
wire jump;
wire [`ADDR_BUS] jumpAddr;


// regfile -> id_stage
wire [`REG_BUS] rs1DataD;
wire [`REG_BUS] rs2DataD;

// id_stage -> exe_stage
wire  rs1ReadEnable;
wire  rs2ReadEnable;
wire  rdWriteEnableE;
wire  [4 : 0] rs1ReadAddr;
wire  [4 : 0] rs2ReadAddr;
wire  [4 : 0] rdWriteAddrE;

wire RamReadEnableE;
wire RamWriteEnableE;
wire [`ADDR_BUS] RamReadAddrE;
wire [`ADDR_BUS] RamWriteAddrE;
wire [`DATA_BUS] RamWriteDataE;
wire [`REG_BUS] op1E;
wire [`REG_BUS] op2E;

// exe_stage -> mem_stage 
wire  rdWriteEnableM;
wire [4 : 0] rdWriteAddrM;
wire [`DATA_BUS] rdWriteDataM;

// mem_stage -> wb_stage
wire rdWriteEnableW;
wire [4 : 0]rdWriteAddrW;
wire  [`REG_BUS]rdWriteDataW;

// exe_stage -> other stage

// exe_stage -> regfile


wire flushF;

if_stage If_stage(
  //input
  .clk(clk),
  .rst(rst),
  .jump(jump),
  .stallF(stallF),
  .flushF(flushF),
  .jumpAddr(jumpAddr),
  .instF(instF),
  //output
  .pcF(pcF),
  .pcD(pcD),
  .pcEnableF(pcEnableF),
  .instD(instD)
);

wire [`INST_BUS]instD;
wire [`ADDR_BUS]pcD;
wire flushD;
wire [10 : 0] memFuncE;
wire [`ADDR_BUS]pcE;
wire [9 : 0] instTypeE;
wire [13 : 0] instFuncE;
wire [`REG_BUS]rs1DataE;
wire [`REG_BUS]rs2DataE;
wire [`REG_BUS] imm; 
wire [`INST_BUS]instE;
id_stage Id_stage(
  //INPUT
  .clk(clk),
  .rst(rst),
  .flushD(flushD),
  .stallD(stallD),
  .pcD(pcD),
  .instD(instD),
  .rs1DataD(rs1DataD),
  .rs2DataD(rs2DataD),
  //OUTPUT
  .rs1ReadEnable(rs1ReadEnable),
  .rs1ReadAddr(rs1ReadAddr),
  .rs2ReadEnable(rs2ReadEnable),
  .rs2ReadAddr(rs2ReadAddr),
  .rdWriteEnableE(rdWriteEnableE),
  .rdWriteAddrE(rdWriteAddrE),

   //ram 部分
  .RamReadEnableE(RamReadEnableE),
  .RamWriteEnableE(RamWriteEnableE),
  .memFuncE(memFuncE),
  //执行数据 part
  .pcE(pcE),
  .instE(instE),
  .instTypeE(instTypeE),
  .instFuncE(instFuncE),
  .rs1DataE(rs1DataE),
  .rs2DataE(rs2DataE),  
  .imm(imm)
);

wire flushE;
wire [10 : 0] memFuncM;
wire [9 : 0] instTypeM;
wire [`ADDR_BUS] RamWriteAddrM;
wire  [`DATA_BUS] RamWriteDataM;
wire [`ADDR_BUS] RamReadAddrM;
wire         RamWriteEnableM;
wire         RamReadEnableM;

wire [`ADDR_BUS]pcM;
wire [`INST_BUS]instM;

exe_stage Exe_stage(
  .clk(clk),
  .rst(rst),
  // input
  .pcE(pcE),
  .instE(instE),
  .flushE(flushE),
  .stallE(stallE),
  .instTypeE(instTypeE),
  .instFuncE(instFuncE),
  .imm(imm),
  .rs1DataE(rs1DataE),
  .rs2DataE(rs2DataE),
  .rdWriteEnableE(rdWriteEnableE),
  .rdWriteAddrE(rdWriteAddrE),
  .rdWriteDataPre1(rdWriteDataM),
  .rdWriteDataPre2(rdWriteDataW),
  .Redirect1(Redirect1),
  .Redirect2(Redirect2),
  .LoadRedirect(LoadRedirect),
  
  // ram 输入部分
  .memFuncE(memFuncE),
  .RamReadEnableE(RamReadEnableE),
  .RamWriteEnableE(RamWriteEnableE),
  
  // ram 输出部分
  .RamWriteAddrM(RamWriteAddrM),
  .RamWriteDataM(RamWriteDataM),
  .RamReadAddrM(RamReadAddrM),
  .RamReadEnableM(RamReadEnableM),
  .RamWriteEnableM(RamWriteEnableM),
  .memFuncM(memFuncM),

  .rdWriteEnableM(rdWriteEnableM),
  .rdWriteAddrM(rdWriteAddrM),
  .rdWriteDataM(rdWriteDataM),
  .instTypeM(instTypeM),

  // jump 信号 load 信号
  .load(load),
  .jump(jump),
  .jumpAddr(jumpAddr),

  .pcM(pcM),
  .instM(instM)
  
);


wire [`ADDR_BUS]pcW;
wire [`INST_BUS]instW;

mem_stage Mem_stage(
  // input
  .clk(clk),
  .rst(rst),
  .pcM(pcM),
  .instM(instM),
  // ram 部分
  .memFuncM(memFuncM),
  .RamWriteAddrM(RamWriteAddrM),
  .RamWriteDataM(RamWriteDataM),
  .RamReadAddrM(RamReadAddrM),
  .RamReadDataM(RamReadData),
  .RamReadEnableM(RamReadEnableM),
  .RamWriteEnableM(RamWriteEnableM),
  // -> ram单元  
  .RamReadAddr(RamReadAddr),
  .RamWriteAddr(RamWriteAddr),
  .RamWriteData(RamWriteData),
  .RamWriteMask(RamWriteMask),
  .RamWriteEnable(RamWriteEnable),
  .RamReadEnable(RamReadEnable),

  //寄存器 部分
  .rdWriteEnableM(rdWriteEnableM),
  .rdWriteAddrM(rdWriteAddrM),
  .rdWriteDataM(rdWriteDataM),

  //output
  .rdWriteAddrW(rdWriteAddrW),
  .rdWriteDataW(rdWriteDataW),
  .rdWriteEnableW(rdWriteEnableW),

  .pcW(pcW),
  .instW(instW)
  
);

wire [1 : 0] Redirect1;
wire [1 : 0] Redirect2;
wire [1 : 0] LoadRedirect;

regfile Regfile(
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
  .ReadEnable2(rs2ReadEnable),

  .regs_o(regs_o)
);

wire load;
wire stallF;
wire stallD;
wire stallE;

ctrl Ctrl(
  .clk(clk),
  .rst(rst),
  .jump(jump),
  .load(load),
  .rdWriteAddrE(rdWriteAddrE),
  .rdWriteAddrM(rdWriteAddrM),
  .rs1ReadEnable(rs1ReadEnable),
  .rs2ReadEnable(rs2ReadEnable),
  .rs1ReadAddr(rs1ReadAddr),
  .rs2ReadAddr(rs2ReadAddr),
  .Redirect1(Redirect1),
  .Redirect2(Redirect2),
  .LoadRedirect(LoadRedirect),
  
  .flushD(flushD),
  .flushF(flushF),
  .flushE(flushE),
  .stallF(stallF),
  .stallD(stallD),
  .stallE(stallE)

);

wb_stage Wb_stage(
  .clk(clk),
  .rst(rst),
  .pcW(pcW),
  .instW(instW),
  .rdWriteAddrW(rdWriteAddrW),
  .rdWriteDataW(rdWriteDataW),
  .rdWriteEnableW(rdWriteEnableW),

  .pcO(pcO),
  .instO(instO),
  .rdWriteAddrO(rdWriteAddrO),
  .rdWriteDataO(rdWriteDataO),
  .rdWriteEnableO(rdWriteEnableO)

);

wire [`ADDR_BUS]pcO;
wire [`INST_BUS]instO;
wire rdWriteEnableO;
wire [4 : 0]rdWriteAddrO;
wire  [`REG_BUS]rdWriteDataO;

endmodule
