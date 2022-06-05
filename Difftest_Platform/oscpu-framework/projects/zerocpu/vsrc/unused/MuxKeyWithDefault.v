`include "MuxKeyInternal.v"

module MuxKeyWithDefault #(
    parameter NR_KEY = 2,
    parameter KEY_LEN = 1,
    parameter DATA_LEN = 1
) (
    input [KEY_LEN-1:0] key,
    input [DATA_LEN-1:0] default_out,
    input [NR_KEY*(KEY_LEN+DATA_LEN)-1:0] lut,
    output [DATA_LEN-1:0] out
);

    MuxKeyInternal #(NR_KEY,KEY_LEN,DATA_LEN,1) i0 (key, default_out,lut,out);
    
endmodule