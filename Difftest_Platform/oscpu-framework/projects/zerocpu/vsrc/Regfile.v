`include "defines.v"

module Regfile (
    input clk,
    input rst,

    //Read data from regfiles
    input ReadEnable1,
    input ReadEnable2,
    input [4:0] ReadAddr1,
    input [4:0] ReadAddr2,
    output [`DATA_BUS] ReadData1,
    output [`DATA_BUS] ReadData2,

    //Write data into regfiles
    input WriteEnable,
    input [4:0] WriteAddr,
    input [`DATA_BUS] WriteData
);

//32 registers
reg [`DATA_BUS] regs[31:0];

//init the regs' value 
/*
integer i;
initial begin 
    for(i=0;i<32;i++)
        regsheap[i] = 64'h0;
end
*/

always @(posedge clk ) begin
    if(rst) begin
            regs[0]  <= `ZERO_64;
            regs[1]  <= `ZERO_64;
            regs[2]  <= `ZERO_64;
            regs[3]  <= `ZERO_64;
            regs[4]  <= `ZERO_64;
            regs[5]  <= `ZERO_64;
            regs[6]  <= `ZERO_64;
            regs[7]  <= `ZERO_64;
            regs[8]  <= `ZERO_64;
            regs[9]  <= `ZERO_64;
            regs[10] <= `ZERO_64;
            regs[11] <= `ZERO_64;
            regs[12] <= `ZERO_64;
            regs[13] <= `ZERO_64;
            regs[14] <= `ZERO_64;
            regs[15] <= `ZERO_64;
            regs[16] <= `ZERO_64;
            regs[17] <= `ZERO_64;
            regs[18] <= `ZERO_64;
            regs[19] <= `ZERO_64;
            regs[20] <= `ZERO_64;
            regs[21] <= `ZERO_64;
            regs[22] <= `ZERO_64;
            regs[23] <= `ZERO_64;
            regs[24] <= `ZERO_64;
            regs[25] <= `ZERO_64;
            regs[26] <= `ZERO_64;
            regs[27] <= `ZERO_64;
            regs[28] <= `ZERO_64;
            regs[29] <= `ZERO_64;
            regs[30] <= `ZERO_64;
            regs[31] <= `ZERO_64;
    end
end

assign ReadData1 = rst ? `ZERO_64 : (ReadEnable1 ? (ReadAddr1 == WriteAddr)? WriteData : regs[ReadAddr1]:`ZERO_64);
assign ReadData2 = rst ? `ZERO_64 : (ReadEnable2 ? (ReadAddr2 == WriteAddr)? WriteData : regs[ReadAddr2]:`ZERO_64);

always @(posedge clk) begin
    if(rst) begin
        regs[WriteAddr] <= `ZERO_64;
    end else if(WriteEnable) begin
        regs[WriteAddr] <= WriteData;
    end else begin
        regs[0] <= `ZERO_64;
    end
end

endmodule

