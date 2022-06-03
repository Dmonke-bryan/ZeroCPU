`include "common.v"



module regs (
    input [`regs_addr-1:0] Ra,
    input [`regs_addr-1:0] Rb,
    input [`regs_addr-1:0] Rw,
    input [`data_width-1:0] busW,
    input RegWr,
    input clk, 
    output [`data_width-1:0] busA,
    output [`data_width-1:0] busB
);

//define a regs heap 
reg [`data_width-1:0] regsheap [`regs_num-1:0];

//initial the regshead with zero
integer i;
initial begin 
    for(i=0;i<32;i++)
        regsheap[i] = 64'h0;
end

//the address can be directly used for select which register

assign busA = (Ra == 5'd0)? 64'd0: regsheap[Ra];
assign busB = (Rb == 5'd0)? 64'd0: regsheap[Rb];

//write data into regsheap
//need to exclude x0

always @(negedge clk) begin
    if(RegWr)
        regsheap[Rw] <= busW;
end
   

endmodule
