/* verilator lint_off UNDRIVEN */
/* verilator lint_off UNUSED */

// use as a DFF module
`include "defines.v"


// 带使能端、复位后输出为0的触发器
module gen_en_dff #(
    parameter DW = 32)(

    input wire[DW-1:0] din,
    output wire[DW-1:0] qout,
    input wire stall,
    input wire flush,
    input wire clk,
    input wire rst

    );


    reg[DW-1:0] qout_r;

    always @ (posedge clk) begin
        if (rst) begin
            qout_r <= {DW{1'b0}};
        end 
        else if (flush == 1'b1) begin
            qout_r <= {DW{1'b0}};
        end
        else if (stall == 1'b1) begin
            qout_r <= qout_r;
        end
        else begin
            qout_r <= din;
        end
    end

    assign qout = qout_r;

endmodule
