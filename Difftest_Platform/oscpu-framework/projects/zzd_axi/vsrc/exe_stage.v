
/* verilator lint_off UNDRIVEN */
/* verilator lint_off UNUSED */
//--xuezhen--
`timescale 1ns / 1ps
`include "defines.v"

module exe_stage(input wire clk,
                 input wire rst,
                 input wire [`ADDR_BUS] pcE,
                 input wire [`INST_BUS] instE,
                 input wire flushE,
                 input wire stallE,
                 input wire [14 : 0]instTypeE,
                 input wire [13 : 0] instFuncE,
                 input wire [5 : 0] csrFuncE,
                 input wire [`REG_BUS]csrReadDataE,
                 input wire [11 : 0]csrWriteAddrE,
                 input wire [`REG_BUS]imm,
                 input wire [`REG_BUS]rs1DataE,
                 input wire [`REG_BUS]rs2DataE,
                 input wire rdWriteEnableE,
                 input wire [4 : 0]rdWriteAddrE,
                 input wire [`REG_BUS]rdWriteDataPre1, //上一周期写回数据
                 input wire [`REG_BUS]rdWriteDataPre2, //上上周期写回数据
                 input wire [1 : 0]Redirect1,          //差一周期重定向寄存器 2b‘10 rs2 2b’01 rs1
                 input wire [1 : 0]Redirect2,          //差二周期重定向寄存器 2b‘10 rs2 2b’01 rs1
                 input wire [10 : 0] memFuncE,
                 input wire BusReadEnableE,
                 input wire BusWriteEnableE,
                 output wire [10 : 0] memFuncM,
                 output wire [`ADDR_BUS]BusWriteAddrM,
                 output wire [`DATA_BUS]BusWriteDataM,
                 output wire [`ADDR_BUS]BusReadAddrM,
                 output wire BusReadEnableM ,
                 output wire BusWriteEnableM,
                 output wire rdWriteEnableM,
                 output wire [4 : 0]rdWriteAddrM,
                 output wire [14 : 0]instTypeM,
                 output wire [`REG_BUS]rdWriteDataM,
                 output wire [11 : 0]csrWriteAddrM,
                 output wire [`REG_BUS]csrWriteDataM,
                 output wire csrWriteEnableM,
                 output wire mecall,
                 output wire mret,
                 output wire LoadStoreE,
                 output wire jalbranch,
                 output wire [`ADDR_BUS] jumpAddr,
                 output wire [`ADDR_BUS] pcM,
                 output wire [`INST_BUS] instM);
    
    
    wire [`REG_BUS] rs1Data = Redirect1[0] ? rdWriteDataPre1 :
    Redirect2[0] ? rdWriteDataPre2 : rs1DataE;
    wire [`REG_BUS] rs2Data = Redirect1[1] ? rdWriteDataPre1 :
    Redirect2[1] ? rdWriteDataPre2 : rs2DataE;
    
    wire [`REG_BUS] op1 = rst ? `ZERO_64 : rs1Data;
    
    // mathimm 使用立即数计算
    wire [`REG_BUS] op2 = rst ? `ZERO_64 : instTypeE[2] ? imm : rs2Data;
    
    // 使用pc还是寄存器
    wire  [`REG_BUS] adder1 = (instTypeE[8] | instTypeE[5] | instTypeE[7]) ? pcE : rs1Data;
    // 是否是Rtype
    wire  [`REG_BUS] adder2 = instTypeE[1] ? rs2Data : imm;
    
    
    // csr 操作数
    wire [`REG_BUS] csrop1 = csrReadDataE;
    wire [`REG_BUS] csrop2 = instTypeE[11] ? imm :
    instTypeE[10] ? rs1Data : `ZERO_64;
    
    // b100000000000000 加法      b010000000000000 减法
    // b001000000000000 左移      b000100000000000 小于
    // b000010000000000 无符号小于 b000001000000000 逻辑右移
    // b000000100000000 算术右移   b000000010000000 异或
    // b000000001000000 或        b000000000100000 与
    // b000000000010000 大于      b000000000001000 无符号大于
    // b000000000000010 等于      b000000000000001 不等于
    // 数学运算
    
    wire [`REG_BUS] resADD  = adder1 + adder2;
    wire [`REG_BUS] resSUB  = op1 - op2;
    wire [`REG_BUS] resSLL  = op1 << (instTypeE[0] ? {1'b0,op2[4 : 0]} : op2[5 : 0]);
    wire [`REG_BUS] resLESU = {{63{1'b0}},op1 < op2};
    wire [`REG_BUS] resLES  = {{63{1'b0}},$signed(op1) < $signed(op2)};
    wire [`REG_BUS] resSRL  = op1 >> op2[5 : 0];
    wire [`REG_BUS] resSRA  = $signed(op1) >>> op2[5 : 0];
    wire [31 : 0] resSRLW   = op1[31 : 0] >> op2[4 : 0];
    wire [31 : 0] resSRAW   = $signed(op1[31 : 0]) >>> op2[4 : 0];
    wire [`REG_BUS] resXOR  = op1 ^ op2;
    wire [`REG_BUS] resOR   = op1 | op2;
    wire [`REG_BUS] resAND  = op1 & op2;
    wire [`REG_BUS] resBIGU = {{63{1'b0}},op1 >= op2};
    wire [`REG_BUS] resBIG  = {{63{1'b0}},$signed(op1) >= $signed(op2)};
    wire [`REG_BUS] resEQ   = {{63{1'b0}},op1 == op2};
    wire [`REG_BUS] resNEQ  = {{63{1'b0}},op1 != op2};
    
    wire [`REG_BUS] resCSRRW = csrop2;
    wire [`REG_BUS] resCSRRS = csrop1 | csrop2;
    wire [`REG_BUS] resCSRRC = csrop1 &~ csrop2;
    
    
    //csr 处理 写回
    wire [`REG_BUS] csrWriteDataM_r = csrFuncE[5]|csrFuncE[2] ? resCSRRW :
    csrFuncE[4]|csrFuncE[1] ? resCSRRS :
    csrFuncE[3]|csrFuncE[0] ? resCSRRC : `ZERO_64;

    wire csrWriteEnableM_r = instTypeE[10]|instTypeE[11];

    gen_en_dff #(12) csrWriteAddrM_clk_diff(csrWriteAddrE,csrWriteAddrM,~stallE, clk,rst | flushE);
    gen_en_dff #(64) csrWriteDataM_clk_diff(csrWriteDataM_r,csrWriteDataM,~stallE, clk,rst | flushE);
    gen_en_dff #(1) csrWriteEnableM_clk_diff(csrWriteEnableM_r,csrWriteEnableM,~stallE, clk,rst | flushE);
    
    
    wire [`ADDR_BUS] result = instFuncE[0] ? resNEQ :
    instFuncE[1] ? resEQ :
    instFuncE[2] ? resBIGU :
    instFuncE[3] ? resBIG :
    instFuncE[4] ? resAND :
    instFuncE[5] ? resOR :
    instFuncE[6] ? resXOR :
    instFuncE[7] ? (instTypeE[0] ? {32'b0,resSRAW} : resSRA) :
    instFuncE[8] ? (instTypeE[0] ? {32'b0,resSRLW} : resSRL) :
    instFuncE[9] ? resLESU :
    instFuncE[10] ? resLES :
    instFuncE[11] ? resSLL :
    instFuncE[12] ? resSUB :
    instFuncE[13] ? resADD :`ZERO_64;
    
    // load store 处理
    gen_en_dff #(11) memFuncM_clk_diff(memFuncE,memFuncM,~stallE, clk,rst | flushE);
    
    wire [`ADDR_BUS]BusWriteAddrM_r = (rst == 1'b1) ? `ZERO_64 : resADD;
    wire [`DATA_BUS]BusWriteDataM_r = (rst == 1'b1) ? `ZERO_64 : rs2Data;
    wire [`ADDR_BUS] BusReadAddr_r  = (rst == 1'b1) ? `ZERO_64 : resADD;
    wire BusReadEnable_r = (rst == 1'b1) ? 1'b0 : BusReadEnableE;
    
    gen_en_dff #(1)  BusReadEnableM_clk_diff(BusReadEnable_r,BusReadEnableM,~stallE, clk,rst | flushE);
    gen_en_dff #(64) BusReadAddrM_clk_diff(BusReadAddr_r,BusReadAddrM,~stallE, clk,rst | flushE);
    gen_en_dff #(64) BusWriteAddrM_clk_diff(BusWriteAddrM_r,BusWriteAddrM,~stallE, clk,rst | flushE);
    gen_en_dff #(64) BusWriteDataM_clk_diff(BusWriteDataM_r,BusWriteDataM,~stallE, clk,rst | flushE);
    gen_en_dff #(1) BusWriteEnableM_clk_diff(BusWriteEnableE,BusWriteEnableM,~stallE, clk,rst | flushE);
    
    
    
    // jump,brach 处理
    wire resBranch             = instTypeE[5] & result[0];
    wire jalbranch_r                = (rst == 1'b1) ? 1'b0 : (resBranch | instTypeE[6] | instTypeE[7]);
    wire [`ADDR_BUS]jumpAddr_r = jalbranch_r ? resADD : `ZERO_64;
    wire [`ADDR_BUS] pcSave    = pcE + 64'h4;
    
    // 给ctrl单元
    assign LoadStoreE = BusReadEnableE | BusWriteEnableE;
    assign mecall = instTypeE[12];
    assign mret = instTypeE[14];

    gen_en_dff #(1) jalbranch_dff(jalbranch_r,jalbranch,~stallE, clk,rst | flushE);
    gen_en_dff  #(64) jumpAddr_dff(jumpAddr_r ,jumpAddr,~stallE, clk,rst | flushE);
    
    
    // 写寄存器处理
    wire rdWriteEnableE_r = rdWriteEnableE ;
    wire [`REG_BUS] rdWriteDataM_r = (rst == 1'b1) ?`ZERO_64 :
    (instTypeE[6] | instTypeE[7]) ? pcSave :    //jalr jal
    instTypeE[0] ? {{32{result[31]}},result[31:0]} :  //32位操作指令
    instTypeE[8] ? resADD :                     //auipc
    instTypeE[9] ? imm :                  //lui
    (instTypeE[10] | instTypeE[11]) ? csrReadDataE : result;  // csr数据
    gen_en_dff #(64) rdWriteDataE_clk_diff(rdWriteDataM_r,rdWriteDataM,~stallE, clk,rst | flushE);
    gen_en_dff #(6) rd_r_clk_diff({rdWriteEnableE_r,rdWriteAddrE},{rdWriteEnableM,rdWriteAddrM},~stallE, clk,rst | flushE);
    
    // 信号传递
    gen_en_dff  #(15) instTypeM_dff(instTypeE,instTypeM,~stallE, clk,rst | flushE);
    gen_en_dff  #(32) instM_dff(instE,instM,~stallE, clk,rst | flushE);
    gen_en_dff  #(64) pcM_dff(pcE ,pcM,~stallE, clk,rst | flushE);
    
endmodule
