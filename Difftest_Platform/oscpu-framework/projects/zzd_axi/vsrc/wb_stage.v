/* verilator lint_off UNUSED */
`timescale 1ns / 1ps
`include "defines.v"

module wb_stage(
  input wire clk,
  input wire rst,
  input wire stallW,
  input wire [14 : 0] instTypeW,
  input wire [`INST_BUS]instW,
  input wire [`REG_BUS]reg_a0
);

    
`ifdef DEBUG
    always @(posedge clk) begin
        if(stallW == 1'b0) begin
            if (instW[6 : 0] == 7'h7b) begin
                $write("%s",reg_a0[7:0]);
            end
        end
    end
`endif 

endmodule