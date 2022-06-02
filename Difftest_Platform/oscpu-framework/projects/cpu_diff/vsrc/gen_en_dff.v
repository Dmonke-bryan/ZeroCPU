/* verilator lint_off UNDRIVEN */
/* verilator lint_off UNUSED */
`timescale 1ns / 1ps
// use as a DFF module
`include "defines.v"


// 带使能端、复位后输出为0的触发器
module gen_en_dff #(parameter DW = 32)
                  (input wire[DW-1:0] din,
                    output wire[DW-1:0] qout,
                    input wire en,
                    input wire clk,
                    input wire rst);
    
    reg[DW-1:0] qout_r;
    
    always @ (posedge clk) begin
        if (rst == 1'b1) begin
            qout_r <= {DW{1'b0}};
        end
        else if (en == 1'b1) begin
            qout_r <= din;
        end
        else
            qout_r <= qout_r;
    end
    
    assign qout = qout_r;
    
endmodule
