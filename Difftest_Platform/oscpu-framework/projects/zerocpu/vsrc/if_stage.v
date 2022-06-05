`include "defines.v"
module if_stage (
    input clk,
    input rst,
    output reg [`ADDR_BUS] pc
);



always @(posedge clk) begin
    if(rst) begin
        pc <= `ZERO_64;
    end else begin
        pc <= pc + 64'h4;
    end
end

    
endmodule
