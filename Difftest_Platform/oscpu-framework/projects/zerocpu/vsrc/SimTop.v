`timescale 1ns/1ps
`include "defines.v"
`include "zerocore.v"

/* verilator lint_off UNUSED */

module SimTop(
    input  clock,
    input  reset,
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

zerocore u_zerocore(
    .clk(clock),
    .rst(reset),
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
  .clock    ( clock ),
  .coreid   ( 8'd0 ),//8bit
  .index    ( 8'd0 ),//8bit
  .valid    ( 1'b1 ),
  .pc       ( pc ),//64bit
  .instr    ( inst ),//32bit
  .skip     ( 1'b0 ),
  .isRVC    ( 1'b0 ),
  .scFailed ( 1'b0 ),
  .wen      (    ),
  .wdest    (    ),//8bit
  .wdata    (    ) //64bit
);

DifftestArchIntRegState U_DifftestArchIntRegState (
  .clock              (clock),
  .coreid             (0),
  .gpr_0              (u_zerocore.u_regs.regsheap[0]),
  .gpr_1              (u_zerocore.u_regs.regsheap[1]),
  .gpr_2              (u_zerocore.u_regs.regsheap[2]),
  .gpr_3              (u_zerocore.u_regs.regsheap[3]),
  .gpr_4              (u_zerocore.u_regs.regsheap[4]),
  .gpr_5              (u_zerocore.u_regs.regsheap[5]),
  .gpr_6              (u_zerocore.u_regs.regsheap[6]),
  .gpr_7              (u_zerocore.u_regs.regsheap[7]),
  .gpr_8              (u_zerocore.u_regs.regsheap[8]),
  .gpr_9              (u_zerocore.u_regs.regsheap[9]),
  .gpr_10             (u_zerocore.u_regs.regsheap[10]),
  .gpr_11             (u_zerocore.u_regs.regsheap[11]),
  .gpr_12             (u_zerocore.u_regs.regsheap[12]),
  .gpr_13             (u_zerocore.u_regs.regsheap[13]),
  .gpr_14             (u_zerocore.u_regs.regsheap[14]),
  .gpr_15             (u_zerocore.u_regs.regsheap[15]),
  .gpr_16             (u_zerocore.u_regs.regsheap[16]),
  .gpr_17             (u_zerocore.u_regs.regsheap[17]),
  .gpr_18             (u_zerocore.u_regs.regsheap[18]),
  .gpr_19             (u_zerocore.u_regs.regsheap[19]),
  .gpr_20             (u_zerocore.u_regs.regsheap[20]),
  .gpr_21             (u_zerocore.u_regs.regsheap[21]),
  .gpr_22             (u_zerocore.u_regs.regsheap[22]),
  .gpr_23             (u_zerocore.u_regs.regsheap[23]),
  .gpr_24             (u_zerocore.u_regs.regsheap[24]),
  .gpr_25             (u_zerocore.u_regs.regsheap[25]),
  .gpr_26             (u_zerocore.u_regs.regsheap[26]),
  .gpr_27             (u_zerocore.u_regs.regsheap[27]),
  .gpr_28             (u_zerocore.u_regs.regsheap[28]),
  .gpr_29             (u_zerocore.u_regs.regsheap[29]),
  .gpr_30             (u_zerocore.u_regs.regsheap[30]),
  .gpr_31             (u_zerocore.u_regs.regsheap[31])
);

endmodule
