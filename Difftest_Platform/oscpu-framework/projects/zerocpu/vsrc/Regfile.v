`include "defines.v"

module Regfile (
    input clk,
    input rst,
    input Ra_en,
    input Rb_en,
    input [`REG_BUS] Ra_addr,
    input [`REG_BUS] Rb_addr,
    output [`DATA_BUS] Ra,
    output [`DATA_BUS] Rb,

    input Rw_en,
    input [`REG_BUS] Rw_addr,
    input [`DATA_BUS] Rw
);

//32 registers
reg [`DATA_BUS] regsheap[31:0];

//init the regs' value 
integer i;
initial begin 
    for(i=0;i<32;i++)
        regsheap[i] = 64'h0;
end

assign Ra = rst ? `ZERO_64 : (Ra_en ? (Ra_addr == Rw_addr)? Rw : regsheap[Ra_addr]:`ZERO_64);
assign Rb = rst ? `ZERO_64 : (Rb_en ? (Rb_addr == Rw_addr)? Rw : regsheap[Rb_addr]:`ZERO_64);

always @(posedge clk) begin
    if(rst) begin
        regsheap[Rw_addr] <= `ZERO_64;
    end else if(Rw_en) begin
        regsheap[Rw_addr] <= Rw;
    end else begin
        regsheap[0] <= `ZERO_64;
    end
end

endmodule
