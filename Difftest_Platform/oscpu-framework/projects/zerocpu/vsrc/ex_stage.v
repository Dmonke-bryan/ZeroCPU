`include "defines.v"
module ex_stage (
    input [`DATA_BUS] ina,
    //input ra_en,
    input [`DATA_BUS] inb,
    //input rb_en,
    input [3:0] aluCtl,
    output [`DATA_BUS] res
    
);

assign res = (aluCtl == 4'h0) ? (ina + inb) : `ZERO_64;
    
endmodule
