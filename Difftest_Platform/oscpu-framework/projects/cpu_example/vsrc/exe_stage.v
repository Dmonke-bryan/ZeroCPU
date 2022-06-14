
//--xuezhen--

`include "defines.v"

module exe_stage(
  input wire clk,
  input wire rst,
  input wire [`ADDR_BUS] pcE,
  input wire flushE,
  input wire stallE,
  /* verilator lint_off UNUSED */
  input wire [9 : 0]instTypeE, 
  /* verilator lint_on UNUSED*/
  input wire [13 : 0] instFuncE,
  input wire [`REG_BUS]imm,
  input wire [`REG_BUS]rs1DataE,
  input wire [`REG_BUS]rs2DataE,
  input wire rdWriteEnableE,
  input wire [4 : 0]rdWriteAddrE,
  input wire [`REG_BUS]rdWriteDataPre1,         //上一周期写回数据
  input wire [`REG_BUS]rdWriteDataPre2,         //上上周期写回数据
  input wire [1 : 0]Redirect1,          //差一周期重定向寄存器 2b‘10 rs2  2b’01 rs1
  input wire [1 : 0]Redirect2,          //差二周期重定向寄存器 2b‘10 rs2  2b’01 rs1
  input wire [1 : 0]LoadRedirect,       //load重定向到rddata写回阶段
 
  input wire [10 : 0] memFuncE,
  input wire RamReadEnableE ,
  input wire RamWriteEnableE ,
  
  output wire [10 : 0] memFuncM,
  output wire [`ADDR_BUS]RamWriteAddrM,
  output wire [`DATA_BUS]RamWriteDataM,
  output wire [`ADDR_BUS]RamReadAddrM,  
  output wire RamReadEnableM ,
  output wire RamWriteEnableM ,

  output wire rdWriteEnableM,
  output wire [4 : 0]rdWriteAddrM,
  /* verilator lint_off UNDRIVEN */
  output wire [9 : 0]instTypeM,
  /* verilator lint_on UNDRIVEN */
  output wire [`REG_BUS]rdWriteDataM,
  
  // -> ctrl单元
  output wire load,
  output wire jump,
  output wire [`ADDR_BUS] jumpAddr
);


wire [`REG_BUS] rs1Data = Redirect1[0] ? rdWriteDataPre1 : 
                          Redirect2[0] ? rdWriteDataPre2 : 
                          LoadRedirect[0] ? rdWriteDataPre2 : rs1DataE;
wire [`REG_BUS] rs2Data = Redirect1[1] ? rdWriteDataPre1 : 
                          Redirect2[1] ? rdWriteDataPre2 : 
                          LoadRedirect[1] ? rdWriteDataPre2 : rs2DataE;

wire [`REG_BUS] op1 = rs1Data;

// mathimm 使用立即数计算
wire [`REG_BUS] op2 = (instTypeE[2] | instTypeE[5] ) ? imm : rs2Data;

// 使用pc还是寄存器
wire  [`REG_BUS] adder1 = (instTypeE[8] | instTypeE[5] | instTypeE[7] ) ? pcE : rs1Data;
// 是否是Rtype
wire  [`REG_BUS] adder2 = instTypeE[1] ? rs2Data : imm;
// b100000000000000 加法      b010000000000000 减法
// b001000000000000 左移      b000100000000000 小于
// b000010000000000 无符号小于 b000001000000000 逻辑右移
// b000000100000000 算术右移   b000000010000000 异或
// b000000001000000 或        b000000000100000 与
// b000000000010000 大于      b000000000001000 无符号大于
// b000000000000010 等于      b000000000000001 不等于
// 数学运算

wire [`REG_BUS] resADD = adder1 + adder2;
wire [`REG_BUS] resSUB = op1 - op2;
wire [`REG_BUS] resSLL =  op1 << op2[5 : 0];
wire [`REG_BUS] resLES =  {{63{1'b0}},op1 < op2};
wire [`REG_BUS] resLESU =  {{63{1'b0}},$signed(op1) < $signed(op2)};
wire [`REG_BUS] resSRL =  op1 >> op2[5 : 0];
wire [`REG_BUS] resSRA =  $signed(op1) >>> op2[5 : 0];
wire [`REG_BUS] resXOR =  op1 ^ op2;
wire [`REG_BUS] resOR  =  op1 | op2;
wire [`REG_BUS] resAND =  op1 & op2;
wire [`REG_BUS] resBIG =  {{63{1'b0}},op1 > op2};
wire [`REG_BUS] resBIGU =  {{63{1'b0}},$signed(op1) > $signed(op2)};
wire [`REG_BUS] resEQ =  {{63{1'b0}},op1 == op2};
wire [`REG_BUS] resNEQ =  {{63{1'b0}},op1 != op2};

wire [`ADDR_BUS] result = instFuncE[0] ? resNEQ :
              instFuncE[1] ? resEQ :
              instFuncE[2] ? resBIGU :
              instFuncE[3] ? resBIG :
              instFuncE[4] ? resAND :
              instFuncE[5] ? resOR :
              instFuncE[6] ? resXOR :
              instFuncE[7] ? resSRA :
              instFuncE[8] ? resSRL :
              instFuncE[9] ? resLESU :
              instFuncE[10] ? resLES :
              instFuncE[11] ? resSLL :
              instFuncE[12] ? resSUB :
              instFuncE[13] ? resADD :`ZERO_64;

// load store 处理
gen_en_dff #(11) memFuncM_clk_diff(memFuncE,memFuncM,stallE,flushE, clk,rst);

wire [`ADDR_BUS]RamWriteAddrM_r = (rst == 1'b1) ? `ZERO_64 : resADD;
wire [`ADDR_BUS]RamWriteDataM_r = (rst == 1'b1) ? `ZERO_64 : rs2Data;
wire [`ADDR_BUS]RamReadAddrM_r = (rst == 1'b1) ? `ZERO_64 : resADD;

gen_en_dff #(64) RamWriteAddrM_clk_diff(RamWriteAddrM_r,RamWriteAddrM,stallE,flushE, clk,rst);
gen_en_dff #(64) RamWriteDataM_clk_diff(RamWriteDataM_r,RamWriteDataM,stallE,flushE, clk,rst);
gen_en_dff #(64) RamReadAddrM_clk_diff(RamReadAddrM_r,RamReadAddrM,stallE,flushE, clk,rst);
gen_en_dff #(1) RamReadEnableM_clk_diff(RamReadEnableE,RamReadEnableM,stallE,flushE, clk,rst);
gen_en_dff #(1) RamWriteEnableM_clk_diff(RamWriteEnableE,RamWriteEnableM,stallE,flushE, clk,rst);



// jump,brach 处理
wire resBranch = instTypeE[5] & result[0]; 
wire jump_r = (rst == 1'b1) ? 1'b0 : (resBranch | instTypeE[6] | instTypeE[7]);
wire [`ADDR_BUS]jumpAddr_r = jump_r ? resADD : `ZERO_64;
wire [`ADDR_BUS] pcSave = pcE + 64'h4;

// 给ctrl单元
assign load = instTypeE[4];
gen_en_dff #(1) jump_dff(jump_r,jump,stallE,flushE,clk,rst);
gen_en_dff  #(64) pcM_dff(jumpAddr_r ,jumpAddr,stallE,flushE,clk,rst);


// 写寄存器处理
wire rdWriteEnableE_r = rdWriteEnableE ;
wire [`REG_BUS] rdWriteDataM_r = (rst == 1'b1) ?`ZERO_64 :
                                 (instTypeE[6] | instTypeE[7]) ? pcSave :    //jalr jal
                                 instTypeE[0] ? {{32{1'b0}},result[31:0]} :  //32位操作指令
                                 instTypeE[8] ? resADD :                     //auipc
                                 instTypeE[9] ? imm : result;                //lui
gen_en_dff #(64) rdWriteDataE_clk_diff(rdWriteDataM_r,rdWriteDataM,stallE,flushE, clk,rst);
gen_en_dff #(6) rd_r_clk_diff({rdWriteEnableE_r,rdWriteAddrE},{rdWriteEnableM,rdWriteAddrM},stallE,flushE, clk,rst);


endmodule
