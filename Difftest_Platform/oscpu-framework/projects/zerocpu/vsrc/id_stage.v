`include "defines.v"

module id_stage (
    input clk,
    input [`INST_BUS] instD,
    //regfile related 
    output rs1ReadEnable,
    output [`REG_BUS] rs1ReadAddr,
    output rs2ReadEnable,
    output [`REG_BUS] rs2ReadAddr,

    //Output
    output rdWriteEnableE,
    output [`REG_BUS] rdWriteAddrE,
    output [`DATA_BUS] imm,

    //control type related
    output aluBsrc,
    output reg [3:0] aluCtl
);
//rs
wire [4:0] rs1;
wire [4:0] rs2;

//divide 32bit instruction into sub-sections
wire [6:0] opcode;
wire [2:0] funt3;
//wire [6:0] funt7;

assign opcode = instD[6:0];
assign funt3 = instD[14:12];
//assign funt7 = instD[31:25];
assign rs1 = instD[19:15];
assign rs2 = instD[24:20];
assign rdWriteAddrE = instD[11:7];

//define the 1-bit flag for opcode
wire  opcode_001_0011 = (opcode == 7'b0010011);
wire  opcode_011_0011 = (opcode == 7'b0110011);
wire  opcode_011_1011 = (opcode == 7'b0111011);

//define the 1-bit flag for funt3
wire  funt3_000 = (funt3 == 3'b000);

//wire  funt3_101 = (funt3 == 3'b101);

//define the 1-bit flag for funt7
//wire funt7_0000000 = (funt7 == 7'b0000000);
//wire funt7_0100000 = (funt7 == 7'b0100000);

//instDructions
//Itype
wire Itype = opcode_001_0011;
wire ADDI = opcode_001_0011 & funt3_000;

//Rtype
wire Rtype = opcode_011_0011 | opcode_011_1011;
wire ADD = opcode_011_0011 & funt3_000;


//generate the aluCtl signal 
//TBD - Sub, Add
wire [7:0] aluType = {7'b0, ADDI};

always @(*) begin
    case (aluType)
        8'd1: aluCtl = {1'b0,3'b0};
        default : aluCtl = 4'b0;
    endcase
end

//TBD - always ON for ra_en and rb_en
assign rs1ReadEnable = Rtype | Itype;
assign rs2ReadEnable = Rtype;
assign rs1ReadAddr = rs1ReadEnable ? rs1 : 5'b0;
assign rs2ReadAddr = rs2ReadEnable ? rs2 : 5'b0;

//TBD - just consider addi 
assign aluBsrc = (ADDI);

//wire SRAI = opcode_001_0011 & funt3_101 & funt7_0100000;
assign imm = {52'b0,instD[31:20]};

//TBD - Rd Enable keep ON
assign rdWriteEnableE = Rtype | Itype;

endmodule
