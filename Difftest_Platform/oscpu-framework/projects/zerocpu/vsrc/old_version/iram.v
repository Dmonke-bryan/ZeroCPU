`include "common.v"

module iram (
    input clk,
    //read signals
    input rd_en,
    input [`iram_addr-1:0] rd_addr,
    output [`inst_width-1:0] rd_data,
    //write signals 
    input wr_en,
    input [`iram_addr-1:0] wr_addr,
    input [`inst_width-1:0] wr_data

);



//data width 32 
//depth 4K
reg [`inst_width-1:0] iram [`iram_depth-1:0];

initial begin
    iram[4] = 32'b0010_0001_0000_0010_1000_0011_0001_0011; //addi 528, x5, x6
end

/*
always@(posedge clk) begin
    if(rd_en) 
        rd_data <= iram[rd_addr]; 
end
*/

assign rd_data = rd_en ? iram[rd_addr]: 32'd0;

always@(negedge clk) begin
    if(wr_en)
        iram[wr_addr] <= wr_data; 
end


    
endmodule
