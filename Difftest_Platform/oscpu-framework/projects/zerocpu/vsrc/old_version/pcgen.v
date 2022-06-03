`include "common.v"

module pcgen (
    input clk, 
    input rst_n,
    output [`iram_addr-1:0] nxt_pc
);

reg [`iram_addr-1:0] pc;


always @(posedge clk or negedge rst_n) begin
    if (!rst_n) begin
        pc <= 12'h0;
    end else begin
        pc <= pc + 12'd4;
    end
end 



assign nxt_pc = pc;
     
endmodule
