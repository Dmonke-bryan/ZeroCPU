/* verilator lint_off UNUSED */

`include "defines.v"

module wb_stage(
  input wire clk,
  input wire rst,
  input wire [`ADDR_BUS] pcW,
  input wire [`INST_BUS] instW,
  input wire rdWriteEnableW,
  input wire [4 : 0]rdWriteAddrW,
  input wire  [`REG_BUS]rdWriteDataW,

  output wire [`ADDR_BUS] pcO,
  output wire [`INST_BUS] instO,
  output wire rdWriteEnableO,
  output wire [4 : 0]rdWriteAddrO,
  output wire  [`REG_BUS]rdWriteDataO

);

gen_en_dff #(1) rdWriteEnableO_clk_diff(rdWriteEnableW,rdWriteEnableO,1'b0,1'b0, clk,rst);
gen_en_dff #(5) rdWriteAddrO_clk_diff(rdWriteAddrW,rdWriteAddrO,1'b0,1'b0, clk,rst);
gen_en_dff #(64)rdWriteDataO_clk_diff(rdWriteDataW,rdWriteDataO,1'b0,1'b0, clk,rst);

gen_en_dff  #(32) instO_dff(instW,instO,1'b0,1'b0,clk,rst);
gen_en_dff  #(64) pcO_dff(pcW ,pcO,1'b0,1'b0,clk,rst);

endmodule