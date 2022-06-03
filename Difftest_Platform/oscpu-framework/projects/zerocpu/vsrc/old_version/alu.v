`include "common.v"

module  alu (
    input [`data_width-1:0] ina,
    input [`data_width-1:0] inb,
    input [3:0] aluCtl,
    output [`data_width-1:0] outy
);

assign outy = (aluCtl==4'h0)? (ina + inb) : 64'd0;
    
endmodule
