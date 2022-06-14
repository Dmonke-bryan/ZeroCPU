`include "defines.v"
`include "DFF.v"

module if_stage (
    input clk,
    input rst,
    output reg [`ADDR_BUS] pc,
    input [`INST_BUS] instF,
    output [`INST_BUS] instD
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

//DFF #(32) u_inst_F2D(clk,rst,instF,instD);

assign instD = instF;

endmodule
