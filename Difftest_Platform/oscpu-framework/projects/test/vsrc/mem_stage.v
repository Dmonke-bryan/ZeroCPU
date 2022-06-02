/* verilator lint_off UNDRIVEN */
/* verilator lint_off UNUSED */

`include "defines.v"

module mem_stage(
  input rst,
  input clk,

  input wire [`ADDR_BUS] pcM,
  input wire [`INST_BUS] instM,
  // ram 部分
  input wire [10 : 0] memFuncM,
  input wire [`ADDR_BUS]RamWriteAddrM,
  input wire [`DATA_BUS]RamWriteDataM,
  input wire [`ADDR_BUS]RamReadAddrM,  
  input wire            RamReadEnableM,
  input wire            RamWriteEnableM,
  input wire [`ADDR_BUS] RamReadDataM,
  //给ram单元
  output wire [`ADDR_BUS]RamWriteAddr,
  output wire [`DATA_BUS]RamWriteData,
  output wire [`ADDR_BUS]RamReadAddr, 
  output wire            RamReadEnable,
  output wire            RamWriteEnable, 
  
  output wire  [`DATA_BUS] RamWriteMask,
  //寄存器 部分
  input wire rdWriteEnableM,
  input wire [4 : 0]rdWriteAddrM,
  input wire  [`REG_BUS]rdWriteDataM,

  output wire rdWriteEnableW,
  output wire [4 : 0]rdWriteAddrW,
  output wire  [`REG_BUS]rdWriteDataW,

  output wire [`ADDR_BUS] pcW,
  output wire [`INST_BUS] instW

);

// {LB,LBU,LH,LHU,LW,LWU,LD,SB,SH,SW,SD}
/*
always @(*) begin
  case(memFuncM)
  `LB,`LBU : result = RamReadDataM>>(RamReadAddrM[2 : 0]<<3);
  `LH,`LHU : result = RamReadDataM>>(RamReadAddrM[2 : 1]<<4);
  `LW,`LWU : result = RamReadDataM>>(RamReadAddrM[2]    <<5);
  `LD      : result = RamReadDataM;
  `SB      : begin
             result = RamWriteDataM<<(RamWriteAddrM[2 : 0]<<3);
             RamWriteMask_r = 64'hff<<(RamWriteAddrM[2 : 0]<<3);
             end
  `SH      : begin
             result = RamWriteDataM<<(RamWriteAddrM[2 : 1]<<4);
             RamWriteMask_r = 64'hffff<<(RamWriteAddrM[2 : 1]<<4);    
             end
  `SW      : begin
             result = RamWriteDataM<<(RamWriteAddrM[2]    <<5);
             RamWriteMask_r = 64'hffffffff<<(RamWriteAddrM[2]      <<5);    
             end
  `SD      : begin
             result = RamWriteDataM;
             RamWriteMask_r = 64'hffff_ffff_ffff_ffff;    
             end
  default  : begin
             result = 0;
             RamWriteMask_r = 0;
             end
  endcase
end
*/

wire [5 : 0] ReadShamt = {3'b0,RamReadAddrM[2 : 0]} << 3;

wire [`DATA_BUS] loadRes8  = RamReadDataM>>ReadShamt;
wire [`DATA_BUS] loadRes16 = RamReadDataM>>ReadShamt;
wire [`DATA_BUS] loadRes32 = RamReadDataM>>ReadShamt;
wire [`DATA_BUS] loadRes64 = RamReadDataM;

wire [5 : 0] WriteShamt = {3'b0,RamWriteAddrM[2 : 0]} << 3; 

wire [`DATA_BUS] storeRes8 = RamWriteDataM<<WriteShamt;
wire [`DATA_BUS] RamWriteMask8 = 64'hff<<WriteShamt;

wire [`DATA_BUS] storeRes16 = RamWriteDataM<<WriteShamt;
wire [`DATA_BUS] RamWriteMask16 = 64'hffff<<WriteShamt;    

wire [`DATA_BUS] storeRes32 = RamWriteDataM<<WriteShamt;
wire [`DATA_BUS] RamWriteMask32 = 64'hffffffff<<WriteShamt;

wire [`DATA_BUS] storeRes64 = RamWriteDataM;
wire [`DATA_BUS] RamWriteMask64 = 64'hffff_ffff_ffff_ffff; 

wire [`DATA_BUS] RamWriteMask_r = memFuncM[0] ? RamWriteMask64 :
                                  memFuncM[1] ? RamWriteMask32 :
                                  memFuncM[2] ? RamWriteMask16 :
                                  memFuncM[3] ? RamWriteMask8  : `ZERO_64;

wire [`DATA_BUS] storeRes = memFuncM[0] ? storeRes64 :
                            memFuncM[1] ? storeRes32 :
                            memFuncM[2] ? storeRes16 :
                            memFuncM[3] ? storeRes8  : `ZERO_64;

assign RamWriteData = (rst == 1'b1) ? `ZERO_64 : storeRes;
assign RamReadAddr = (rst == 1'b1) ? `ZERO_64 : RamReadAddrM;
assign RamWriteAddr = (rst == 1'b1) ? `ZERO_64 : RamWriteAddrM;
assign RamWriteMask = (rst == 1'b1) ? `ZERO_64 : RamWriteMask_r; 
assign RamWriteEnable = (rst == 1'b1) ? 1'b0 : RamWriteEnableM;
assign RamReadEnable = (rst == 1'b1) ? 1'b0 : RamReadEnableM;

wire [`DATA_BUS] rd8  = (rst == 1'b1) ? `ZERO_64 : {{56{loadRes8[7]}},loadRes8[7:0]};
wire [`DATA_BUS] rd8u = (rst == 1'b1) ? `ZERO_64 : {{56{1'b0}},loadRes8[7:0]};
wire [`DATA_BUS] rd16 = (rst == 1'b1) ? `ZERO_64 : {{48{loadRes16[15]}},loadRes16[15:0]};
wire [`DATA_BUS] rd16u = (rst == 1'b1) ? `ZERO_64 : {{48{1'b0}},loadRes16[15:0]};
wire [`DATA_BUS] rd32 = (rst == 1'b1) ? `ZERO_64 : {{32{loadRes32[31]}},loadRes32[31:0]};
wire [`DATA_BUS] rd32u = (rst == 1'b1) ? `ZERO_64 : {{32{1'b0}},loadRes32[31:0]};
wire [`DATA_BUS] rd64 = (rst == 1'b1) ? `ZERO_64 : loadRes64;
// {LB,LBU,LH,LHU,LW,LWU,LD,SB,SH,SW,SD}
wire [`DATA_BUS] rdWriteDataM_r = memFuncM[10] ? rd8 : memFuncM[9] ? rd8u : 
                                  memFuncM[8]  ? rd16: memFuncM[7] ? rd16u:
                                  memFuncM[6]  ? rd32: memFuncM[5] ? rd32u:
                                  memFuncM[4]  ? rd64: rdWriteDataM;


gen_en_dff #(1) rdWriteEnableW_clk_diff(rdWriteEnableM,rdWriteEnableW,1'b0,1'b0, clk,rst);
gen_en_dff #(5) rdWriteAddrW_clk_diff(rdWriteAddrM,rdWriteAddrW,1'b0,1'b0, clk,rst);
gen_en_dff #(64)rdWriteDataW_clk_diff(rdWriteDataM_r,rdWriteDataW,1'b0,1'b0, clk,rst);

gen_en_dff  #(32) instW_dff(instM,instW,1'b0,1'b0,clk,rst);
gen_en_dff  #(64) pcW_dff(pcM ,pcW,1'b0,1'b0,clk,rst);

endmodule