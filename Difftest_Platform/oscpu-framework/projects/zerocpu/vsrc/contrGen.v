`include "common.v"

//id module
module contrGen (
    input [`inst_width-1:0] inst,
    output aluBsrc, //choose source B: reg - 0, imm -1
    output [4:0] rs1_addr,
    output [4:0] rs2_addr,
    output rdWriteEn,
    output [4:0] rd_addr,
    output [`data_width-1:0] imm,
    output reg [3:0] aluCtl
);

//divide 32bit instruction into sub-sections
wire [6:0] opcode;
wire [2:0] funt3;
//wire [6:0] funt7;


assign opcode = inst[6:0];
assign funt3 = inst[14:12];
//assign funt7 = inst[31:25];
assign rs1_addr = inst[19:15];
assign rs2_addr = inst[24:20];
assign rd_addr = inst[11:7];

//define the 1-bit flag for opcode
wire  opcode_001_0011 = (opcode == 7'b0010011);

//define the 1-bit flag for funt3
wire  funt3_000 = (funt3 == 3'b000);
//wire  funt3_101 = (funt3 == 3'b101);


//define the 1-bit flag for funt7
//wire funt7_0000000 = (funt7 == 7'b0000000);
//wire funt7_0100000 = (funt7 == 7'b0100000);

//instructions
//Itype
wire ADDI = opcode_001_0011 & funt3_000;

//wire SRAI = opcode_001_0011 & funt3_101 & funt7_0100000;

//generate the aluCtl signal 
//TBD - Sub, Add
wire [7:0] aluType = {7'b0, ADDI};

always @(*) begin
    case (aluType)
        8'd1: aluCtl = {1'b0,3'b0};
        default : aluCtl = 4'bz;
    endcase
end

//TBD - just consider addi 
assign aluBsrc = 1'b1;

//imm tyoe 
//TBD - just consider imm I-type
assign imm = {52'b0,inst[31:20]};

assign rdWriteEn = 1'b1;

endmodule


