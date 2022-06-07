`include "defines.v"
module if_stage (
    input clk,
    input rst,
    output reg [`ADDR_BUS] pc
);



always @(posedge clk) begin
    if(rst) begin
        //pc <= 64'h80000000;
        pc <= 64'h0;
    end else begin
        //pc <= pc + 64'h4;
        pc <= pc + 64'h1;
    end
end

    
endmodule
