`include "common.v"

module dram (
    input clk,
    //read signals
    input rd_en, 
    input [`dram_addr-1:0] rd_addr,
    output reg [`data_width-1:0] rd_data,
    //write signals
    input wr_en,
    input [`dram_addr-1:0] wr_addr,
    input [`data_width-1:0] wr_data
   
);

//32-bit data width 
//depth 4K 


reg [`data_width-1:0] dram [`dram_depth-1:0];

always@(posedge clk) begin
    if(rd_en) 
        rd_data <= dram[rd_addr]; 
end

always@(negedge clk) begin
    if(wr_en)
        dram[wr_addr] <= wr_data; 
end


endmodule


