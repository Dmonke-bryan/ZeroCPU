/* verilator lint_off UNDRIVEN */
/* verilator lint_off UNUSED */
`timescale 1ns / 1ps
`include "defines.v"

module mem_stage(input rst,
                 input clk,
                 input stallM,
                 input flushM,
                 input wire [`ADDR_BUS] pcM,
                 input wire [`INST_BUS] instM,
                 input wire [10 : 0] memFuncM,
                 input wire [14 : 0]instTypeM,
                 input wire [`ADDR_BUS]BusWriteAddrM,
                 input wire [`DATA_BUS]BusWriteDataM,
                 input wire BusWriteEnableM,
                 input wire [`ADDR_BUS] BusReadAddrM,
                 input wire BusReadEnableM,
                 input wire [`DATA_BUS] BusReadDataM,
                 input wire [11 : 0]csrWriteAddrM,
                 input wire [`REG_BUS]csrWriteDataM,
                 input wire csrWriteEnableM,
                 output wire LoadStoreM,
                 output wire [`ADDR_BUS]BusWriteAddr,
                 output wire [`DATA_BUS]BusWriteData,
                 output wire BusWriteEnable,
                 output wire [`DATA_BUS] BusWriteMask,
                 output wire [`ADDR_BUS] BusReadAddr,
                 output wire BusReadEnable,
                 input wire rdWriteEnableM,
                 input wire [4 : 0]rdWriteAddrM,
                 input wire [`REG_BUS]rdWriteDataM,
                 output wire rdWriteEnableW,
                 output wire [4 : 0]rdWriteAddrW,
                 output wire [`REG_BUS]rdWriteDataW,
                 output wire [11 : 0]csrWriteAddrW,
                 output wire [`REG_BUS]csrWriteDataW,
                 output wire csrWriteEnableW,
                 output wire [14 : 0]instTypeW,
                 output wire [`ADDR_BUS] pcW,
                 output wire [`INST_BUS] instW);
    
    // memFunc = {LB,LBU,LH,LHU,LW,LWU,LD,SB,SH,SW,SD}
    
    wire [5 : 0] ReadShamt = {3'b0,BusReadAddrM[2 : 0]} << 3;
    
    wire [`DATA_BUS] loadRes8  = BusReadDataM>>ReadShamt;
    wire [`DATA_BUS] loadRes16 = BusReadDataM>>ReadShamt;
    wire [`DATA_BUS] loadRes32 = BusReadDataM>>ReadShamt;
    wire [`DATA_BUS] loadRes64 = BusReadDataM;
    
    wire [5 : 0] WriteShamt = {3'b0,BusWriteAddrM[2 : 0]} << 3;
    
    wire [`DATA_BUS] storeRes8     = BusWriteDataM<<WriteShamt;
    wire [`DATA_BUS] BusWriteMask8 = 64'hff<<WriteShamt;
    
    wire [`DATA_BUS] storeRes16     = BusWriteDataM<<WriteShamt;
    wire [`DATA_BUS] BusWriteMask16 = 64'hffff<<WriteShamt;
    
    wire [`DATA_BUS] storeRes32     = BusWriteDataM<<WriteShamt;
    wire [`DATA_BUS] BusWriteMask32 = 64'hffffffff<<WriteShamt;
    
    wire [`DATA_BUS] storeRes64     = BusWriteDataM;
    wire [`DATA_BUS] BusWriteMask64 = 64'hffff_ffff_ffff_ffff;
    
    wire [`DATA_BUS] BusWriteMask_r = 
    memFuncM[0] ? BusWriteMask64 :
    memFuncM[1] ? BusWriteMask32 :
    memFuncM[2] ? BusWriteMask16 :
    memFuncM[3] ? BusWriteMask8  : `ZERO_64;
    
    wire [`DATA_BUS] storeRes = 
    memFuncM[0] ? storeRes64 :
    memFuncM[1] ? storeRes32 :
    memFuncM[2] ? storeRes16 :
    memFuncM[3] ? storeRes8  : `ZERO_64;
    
    assign BusWriteData   = (rst == 1'b1) ? `ZERO_64 : storeRes;
    assign BusWriteAddr   = (rst == 1'b1) ? `ZERO_64 : BusWriteAddrM;
    assign BusWriteMask   = (rst == 1'b1) ? `ZERO_64 : BusWriteMask_r;
    assign BusWriteEnable = (rst == 1'b1) ? 1'b0 : BusWriteEnableM;
    assign BusReadEnable = (rst == 1'b1) ? 1'b0 : BusReadEnableM;
    assign BusReadAddr = (rst == 1'b1) ? `ZERO_64 : BusReadAddrM;

    wire [`DATA_BUS] rd8   = (rst == 1'b1) ? `ZERO_64 : {{56{loadRes8[7]}},loadRes8[7:0]};
    wire [`DATA_BUS] rd8u  = (rst == 1'b1) ? `ZERO_64 : {{56{1'b0}},loadRes8[7:0]};
    wire [`DATA_BUS] rd16  = (rst == 1'b1) ? `ZERO_64 : {{48{loadRes16[15]}},loadRes16[15:0]};
    wire [`DATA_BUS] rd16u = (rst == 1'b1) ? `ZERO_64 : {{48{1'b0}},loadRes16[15:0]};
    wire [`DATA_BUS] rd32  = (rst == 1'b1) ? `ZERO_64 : {{32{loadRes32[31]}},loadRes32[31:0]};
    wire [`DATA_BUS] rd32u = (rst == 1'b1) ? `ZERO_64 : {{32{1'b0}},loadRes32[31:0]};
    wire [`DATA_BUS] rd64  = (rst == 1'b1) ? `ZERO_64 : loadRes64;
    // {LB,LBU,LH,LHU,LW,LWU,LD,SB,SH,SW,SD}
    wire [`DATA_BUS] rdWriteDataM_r = 
    memFuncM[10] ? rd8 : memFuncM[9] ? rd8u :
    memFuncM[8]  ? rd16: memFuncM[7] ? rd16u:
    memFuncM[6]  ? rd32: memFuncM[5] ? rd32u:
    memFuncM[4]  ? rd64: rdWriteDataM;
    
    assign LoadStoreM = rst ? 1'b0 : BusWriteEnableM | BusReadEnable;

    
    gen_en_dff #(1) rdWriteEnableW_clk_diff(rdWriteEnableM,rdWriteEnableW,~stallM, clk,rst | flushM);
    gen_en_dff #(5) rdWriteAddrW_clk_diff(rdWriteAddrM,rdWriteAddrW,~stallM, clk,rst | flushM);
    gen_en_dff #(64)rdWriteDataW_clk_diff(rdWriteDataM_r,rdWriteDataW,~stallM, clk,rst | flushM);
    
    //信号传递
    gen_en_dff #(12) csrWriteAddrW_clk_diff(csrWriteAddrM,csrWriteAddrW,~stallM, clk,rst | flushM);
    gen_en_dff #(64) csrWriteDataW_clk_diff(csrWriteDataM,csrWriteDataW,~stallM, clk,rst | flushM);
    gen_en_dff #(1) csrWriteEnableW_clk_diff(csrWriteEnableM,csrWriteEnableW,~stallM, clk,rst | flushM);
    

    gen_en_dff  #(15) instTypeW_dff(instTypeM,instTypeW,~stallM, clk,rst | flushM);
    gen_en_dff  #(32) instW_dff(instM,instW,~stallM, clk,rst | flushM);
    gen_en_dff  #(64) pcW_dff(pcM ,pcW,~stallM, clk,rst | flushM);
     
endmodule
