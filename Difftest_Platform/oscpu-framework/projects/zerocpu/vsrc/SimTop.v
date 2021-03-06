`timescale  1ns/1ps
`include "common.v"
`include "core.v"

module SimTop (
    input clock,
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

core u_core(
    .clk(),
    .rst_n(reset),
    .ReadEnable(ReadEnable),
    .ReadAddr(ReadAddr),
    .ReadData(ReadData),
    .WriteAddr(WriteAddr),
    .WriteData(WriteData),
    .WriteEnable(WriteEnable),
    .WriteMask(WriteMask)
);


endmodule //SimTop