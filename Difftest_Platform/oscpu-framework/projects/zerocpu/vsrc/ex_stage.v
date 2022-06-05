`include "defines.v"
module ex_stage (
    input [`DATA_BUS] ra,
    input ra_en,
    input [`DATA_BUS] rb,
    input rb_en,
    input [3:0] aluCtl,
    output [`DATA_BUS] res
    
);

assign res = (aluCtl == 4'h0) ? (ra + rb) : `ZERO_64;
    
endmodule