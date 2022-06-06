`timescale 1ns/1ps
`include "defines.v"
`include "zerocore.v"
/* verilator lint_off UNUSED */

module SimTop(
    input  clk,
    input  rst,
    input  [63:0] io_logCtrl_log_begin,
    input  [63:0] io_logCtrl_log_end,
    input  [63:0] io_logCtrl_log_level,
    input         io_perfInfo_clean,
    input         io_perfInfo_dump,

    output        io_uart_out_valid,
    output [7:0]  io_uart_out_ch,
    output        io_uart_in_valid,
    input  [7:0]  io_uart_in_ch
);

wire ReadEnable;
wire WriteEnable;
wire [`DATA_BUS] ReadData;
wire [`ADDR_BUS] ReadAddr;
wire [`ADDR_BUS] WriteAddr;
wire [`DATA_BUS] WriteData;
wire [`DATA_BUS] WriteMask;

RAMHelper u_RAMHelper(
  .clk(clock),
  .ren(ReadEnable),
  .rIdx(ReadAddr),
  .rdata(ReadData),
  .wIdx(WriteAddr),
  .wdata(WriteData),
  .wmask(WriteMask),
  .wen(WriteEnable)
);

zerocore u_core(
    .clk(clk),
    .rst(rst),
    .RamReadEnable(ReadEnable),
    .RamReadAddr(ReadAddr),
    .RamReadData(ReadData),
    .RamWriteAddr(WriteAddr),
    .RamWriteData(WriteData),
    .RamWriteEnable(WriteEnable),
    .RamWriteMask(WriteMask)
);

wire [`INST_BUS] inst;
wire [`ADDR_BUS] pc;

assign inst = ReadData[31:0];
assign pc = ReadAddr;
    
DifftestInstrCommit U_inst_commit(
  .clock    ( clk ),
  .coreid   ( 8'd0 ),//8bit
  .index    ( 8'd0 ),//8bit
  .valid    ( 1'b1 ),
  .pc       ( pc ),//64bit
  .instr    ( instr ),//32bit
  .skip     ( 1'b0 ),
  .isRVC    ( 1'b0 ),
  .scFailed ( 1'b0 ),
  .wen      (    ),
  .wdest    (    ),//8bit
  .wdata    (    ) //64bit
);

DifftestArchIntRegState U_DifftestArchIntRegState (
  .clock              (clk),
  .coreid             (0),
  .gpr_0              (zerocore.Regfile.regsheap[0]),
  .gpr_1              (zerocore.Regfile.regsheap[1]),
  .gpr_2              (zerocore.Regfile.regsheap[2]),
  .gpr_3              (zerocore.Regfile.regsheap[3]),
  .gpr_4              (zerocore.Regfile.regsheap[4]),
  .gpr_5              (zerocore.Regfile.regsheap[5]),
  .gpr_6              (zerocore.Regfile.regsheap[6]),
  .gpr_7              (zerocore.Regfile.regsheap[7]),
  .gpr_8              (zerocore.Regfile.regsheap[8]),
  .gpr_9              (zerocore.Regfile.regsheap[9]),
  .gpr_10             (zerocore.Regfile.regsheap[10]),
  .gpr_11             (zerocore.Regfile.regsheap[11]),
  .gpr_12             (zerocore.Regfile.regsheap[12]),
  .gpr_13             (zerocore.Regfile.regsheap[13]),
  .gpr_14             (zerocore.Regfile.regsheap[14]),
  .gpr_15             (zerocore.Regfile.regsheap[15]),
  .gpr_16             (zerocore.Regfile.regsheap[16]),
  .gpr_17             (zerocore.Regfile.regsheap[17]),
  .gpr_18             (zerocore.Regfile.regsheap[18]),
  .gpr_19             (zerocore.Regfile.regsheap[19]),
  .gpr_20             (zerocore.Regfile.regsheap[20]),
  .gpr_21             (zerocore.Regfile.regsheap[21]),
  .gpr_22             (zerocore.Regfile.regsheap[22]),
  .gpr_23             (zerocore.Regfile.regsheap[23]),
  .gpr_24             (zerocore.Regfile.regsheap[24]),
  .gpr_25             (zerocore.Regfile.regsheap[25]),
  .gpr_26             (zerocore.Regfile.regsheap[26]),
  .gpr_27             (zerocore.Regfile.regsheap[27]),
  .gpr_28             (zerocore.Regfile.regsheap[28]),
  .gpr_29             (zerocore.Regfile.regsheap[29]),
  .gpr_30             (zerocore.Regfile.regsheap[30]),
  .gpr_31             (zerocore.Regfile.regsheap[31])
);

endmodule
