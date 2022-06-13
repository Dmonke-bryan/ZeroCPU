`include "defines.v"
module ex_stage (
    input [`DATA_BUS] ina,
    //input ra_en,
    input [`DATA_BUS] inb,
    //input rb_en,
    input [3:0] aluCtl,
    output [`DATA_BUS] outy
    
);

wire [`DATA_BUS] resADD = ina + inb;

assign outy = (aluCtl == 4'h0) ? resADD : `ZERO_64;
    
endmodule
