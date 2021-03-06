
/* verilator lint_off UNDRIVEN */
/* verilator lint_off UNUSED */
//--xuezhen--
`timescale 1ns / 1ps
`include "defines.v"

module id_stage(input wire rst,
                input wire clk,
                input wire flushD,
                input wire stallD,
                input wire [`ADDR_BUS] pcD,
                input wire [31 : 0]instD,
                input wire [`REG_BUS]rs1DataD,
                input wire [`REG_BUS]rs2DataD,
                input wire [`REG_BUS]csrReadData,
                output wire rs1ReadEnable,
                output wire [4 : 0]rs1ReadAddr,
                output wire rs2ReadEnable,
                output wire [4 : 0]rs2ReadAddr,
                output wire rdWriteEnableE,
                output wire [4 : 0]rdWriteAddrE,
                output wire BusReadEnableE,
                output wire BusWriteEnableE,
                output wire [10 : 0] memFuncE,
                output wire [`ADDR_BUS] pcE,
                output wire [`INST_BUS] instE,
                output wire [14 : 0]instTypeE,
                output wire [13 : 0] instFuncE,
                output wire csrReadEnable,
                output wire [11 : 0]csrReadAddr,
                output wire [5 : 0] csrFuncE,
                output wire [11 : 0]csrWriteAddrE,
                output wire [`REG_BUS]csrReadDataE,
                output wire [`REG_BUS]rs1DataE,
                output wire [`REG_BUS]rs2DataE,
                output wire [`REG_BUS] imm);


    wire [6  : 0]opcode = instD[6  :  0];
    wire [4  : 0]rd     = instD[11 :  7];
    wire [2  : 0]func3  = instD[14 : 12];
    wire [6  : 0]func7  = instD[31 : 25];
    wire [5  : 0]func6  = instD[31 : 26];
    wire [4  : 0]rs1    = instD[19 : 15];
    wire [4  : 0]rs2    = instD[24 : 20];
    wire [63 : 0]immI   = {{52{instD[31]}},instD[31 : 20]};
    wire [63 : 0]immS   = {{52{instD[31]}},instD[31 : 25],instD[11 : 7]};
    wire [63 : 0]immB   = {{51{instD[31]}},instD[31],instD[7],instD[30 : 25],instD[11 : 8],1'b0};
    wire [63 : 0]immU   = {{32{instD[31]}},instD[31 : 12],{12{1'b0}}};
    wire [63 : 0]immJ   = {{43{instD[31]}},instD[31],instD[19 : 12],instD[20],instD[30 : 21],1'b0};
    wire [63 : 0]immCSR = {59'b0,instD[19 : 15]};
    
    
    // func3 bit
    wire func3_000 = func3 == 3'b000;
    
    wire func3_001 = func3 == 3'b001;
    
    wire func3_010 = func3 == 3'b010;
    
    wire func3_011 = func3 == 3'b011;
    
    wire func3_100 = func3 == 3'b100;
    
    wire func3_101 = func3 == 3'b101;
    
    wire func3_110 = func3 == 3'b110;
    
    wire func3_111 = func3 == 3'b111;
    
    wire func7_0  = func7 == 7'b0000000;
    wire func7_20 = func7 == 7'b0100000;
    wire func7_6  = func7 == 7'b0000110;  //?????????ptc??????
    
    wire func6_0  = func6 == 6'b000000;
    wire func6_10 = func6 == 6'b010000;
    
    // opcode bit
    wire opcode_0000011 = opcode == 7'b0000011; // ld lb lh lw lbu lhu  (load)  I
    
    wire opcode_0000111 = opcode == 7'b0000111;
    
    wire opcode_0001011 = opcode == 7'b0001011; //
    
    wire opcode_0001111 = opcode == 7'b0001111; // fence fence.i             I
    
    wire opcode_0010011 = opcode == 7'b0010011; // addi slti sltiu xori      I
    // ori andi slli srli srai
    wire opcode_0010111 = opcode == 7'b0010111; // auipc                     U
    
    wire opcode_0011011 = opcode == 7'b0011011; //addiw
    
    wire opcode_0011111 = opcode == 7'b0011111;
    
    wire opcode_0100011 = opcode == 7'b0100011; // sb sh sw sd         (store) S
    
    wire opcode_0100111 = opcode == 7'b0100111;
    wire opcode_0101011 = opcode == 7'b0101011;
    
    wire opcode_0101111 = opcode == 7'b0101111;
    
    wire opcode_0110011 = opcode == 7'b0110011; //add sub sll slt sltu       R
    //xor srl sra or and
    wire opcode_0110111 = opcode == 7'b0110111; //lui                        U
    
    wire opcode_0111011 = opcode == 7'b0111011; // Rtype 32
    
    wire opcode_0111111 = opcode == 7'b0111111;
    
    wire opcode_1000011 = opcode == 7'b1000011;
    
    wire opcode_1000111 = opcode == 7'b1000111;
    
    wire opcode_1001011 = opcode == 7'b1001011;
    
    wire opcode_1001111 = opcode == 7'b1001111;
    
    wire opcode_1010011 = opcode == 7'b1010011;
    
    wire opcode_1010111 = opcode == 7'b1010111;
    
    wire opcode_1011011 = opcode == 7'b1011011;
    
    wire opcode_1011111 = opcode == 7'b1011111;
    
    wire opcode_1100011 = opcode == 7'b1100011; //beq bne blt bge           B
    //bltu bgeu
    wire opcode_1100111 = opcode == 7'b1100111; //jalr                      I
    
    wire opcode_1101011 = opcode == 7'b1101011;
    
    wire opcode_1101111 = opcode == 7'b1101111; //jal                       J
    
    wire opcode_1110011 = opcode == 7'b1110011; //ecall ebreak csrrw        I
    //csrrs csrrc csrrwi csrrsi csrrci
    
    
    // ????????????
    wire Rtype = opcode_0110011 | opcode_0111011;
    wire Itype = opcode_0000011 | opcode_0001111 | opcode_0010011 |  //opcode_1110011 ??????i???
    opcode_0011011 | opcode_1100111;
    wire Stype   = opcode_0100011;
    wire Btype   = opcode_1100011;
    wire Utype   = opcode_0010111 | opcode_0110111;
    wire Jtype   = opcode_1101111;
    wire CSRtype = opcode_1110011;
     
    wire LUI   = opcode_0110111;
    wire AUIPC = opcode_0010111;

    wire csri    = CSRRWI | CSRRSI | CSRRCI;
    wire csr     = CSRRW | CSRRS | CSRRC;
    wire jump    = opcode_1100111 | opcode_1101111;
    wire branch  = opcode_1100011;
    wire load    = opcode_0000011;
    wire store   = opcode_0100011;
    wire mathImm = opcode_0010011 | opcode_0011011;
    wire mathReg = opcode_0110011 | opcode_0111011;
    wire type32  = opcode_0011011 | opcode_0111011;
    
    wire [14 : 0]instTypeE_r = {MRET,EBREAK,ECALL,csri, csr, LUI, AUIPC, JAL , JALR , branch ,load ,store ,mathImm, mathReg, type32};
    gen_en_dff #(15) instTypeE_dff(instTypeE_r,instTypeE, ~stallD, clk, rst | flushD);
    
    // ??????bit
    // Itype ??????
    wire ADDI  = func3_000 & opcode_0010011;
    wire SLTI  = func3_010 & opcode_0010011;
    wire SLTIU = func3_011 & opcode_0010011;
    wire XORI  = func3_100 & opcode_0010011;
    wire ORI   = func3_110 & opcode_0010011;
    wire ANDI  = func3_111 & opcode_0010011;
    wire SLLI  = func6_0 & func3_001 & opcode_0010011;
    wire SRLI  = func6_0 & func3_101 & opcode_0010011;
    wire SRAI  = func6_10 & func3_101 & opcode_0010011;
    
    wire ADDIW = func3_000 & opcode_0011011;
    wire SLLIW = func7_0 & func3_001 & opcode_0011011;
    wire SRLIW = func7_0 & func3_101 & opcode_0011011;
    wire SRAIW = func7_20 & func3_101 & opcode_0011011;
    
    wire JALR = func3_000 & opcode_1100111;
    
    
    // Rtype ??????
    wire ADD  = func7_0 & func3_000 & opcode_0110011;
    wire SUB  = func7_20 & func3_000 & opcode_0110011;
    wire SLL  = func7_0 & func3_001 & opcode_0110011;
    wire SLT  = func7_0 & func3_010 & opcode_0110011;
    wire SLTU = func7_0 & func3_011 & opcode_0110011;
    wire XOR  = func7_0 & func3_100 & opcode_0110011;
    wire SRL  = func7_0 & func3_101 & opcode_0110011;
    wire SRA  = func7_20 & func3_101 & opcode_0110011;
    wire OR   = func7_0 & func3_110 & opcode_0110011;
    wire AND  = func7_0 & func3_111 & opcode_0110011;
    
    wire ADDW = func7_0 & func3_000 & opcode_0111011;
    wire SUBW = func7_20 & func3_000 & opcode_0111011;
    wire SLLW = func7_0 & func3_001 & opcode_0111011;
    wire SRLW = func7_0 & func3_101 & opcode_0111011;
    wire SRAW = func7_20 & func3_101 & opcode_0111011;
    
    // Btype ??????
    wire BEQ  = func3_000 & opcode_1100011;
    wire BNE  = func3_001 & opcode_1100011;
    wire BLT  = func3_100 & opcode_1100011;
    wire BLTU = func3_110 & opcode_1100011;
    wire BGT  = func3_101 & opcode_1100011;
    wire BGTU = func3_111 & opcode_1100011;
    
    // Jtype ??????
    wire JAL = opcode_1101111;
    
    // load/store ??????
    wire LB  = func3_000 & opcode_0000011;
    wire LBU = func3_100 & opcode_0000011;
    wire LH  = func3_001 & opcode_0000011;
    wire LHU = func3_101 & opcode_0000011;
    wire LW  = func3_010 & opcode_0000011;
    wire LWU = func3_110 & opcode_0000011;
    wire LD  = func3_011 & opcode_0000011;
    
    wire SB = func3_000 & opcode_0100011;
    wire SH = func3_001 & opcode_0100011;
    wire SW = func3_010 & opcode_0100011;
    wire SD = func3_011 & opcode_0100011;
    
    wire [10 : 0] memFuncE_r = {LB,LBU,LH,LHU,LW,LWU,LD,SB,SH,SW,SD};
    gen_en_dff #(11) memFuncE_dff(memFuncE_r,memFuncE, ~stallD, clk, rst | flushD);
    
    // b100000000000000 ??????      b010000000000000 ??????
    // b001000000000000 ??????      b000100000000000 ??????
    // b000010000000000 ??????????????? b000001000000000 ????????????
    // b000000100000000 ????????????   b000000010000000 ??????
    // b000000001000000 ???        b000000000100000 ???
    // b000000000010000 ??????      b000000000001000 ???????????????
    // b000000000000010 ??????      b000000000000001 ?????????
    wire [13 : 0] instFuncE_r = {ADD|ADDI|ADDW|ADDIW,SUB|SUBW,
    SLL|SLLI|SLLW|SLLIW,SLT|SLTI|BLT,SLTU|SLTIU|BLTU,
    SRL|SRLI|SRLW|SRLIW,SRA|SRAI|SRAW|SRAIW,XOR|XORI,
    OR|ORI,AND|ANDI,BGT,BGTU,BEQ,BNE};
    
    gen_en_dff #(14) instFuncE_dff(instFuncE_r,instFuncE, ~stallD, clk, rst | flushD);
    
    // fence ??????
    wire FENCE  = func3_000 & opcode_0001111;
    wire FENCEI = func3_001 & opcode_0001111;
    
    wire [1 : 0]fenceFuncD = {FENCE,FENCEI};
    
    // csr ??????
    wire CSRRW  = func3_001 & opcode_1110011;
    wire CSRRS  = func3_010 & opcode_1110011;
    wire CSRRC  = func3_011 & opcode_1110011;
    wire CSRRWI = func3_101 & opcode_1110011;
    wire CSRRSI = func3_110 & opcode_1110011;
    wire CSRRCI = func3_111 & opcode_1110011;
    
    wire [5 : 0]csrFuncE_r = {CSRRW,CSRRS,CSRRC,CSRRWI,CSRRSI,CSRRCI};
    gen_en_dff #(6) csrFuncE_dff(csrFuncE_r, csrFuncE, ~stallD, clk, rst | flushD);
    gen_en_dff #(12) csrWriteAddrE_dff(csrReadAddr, csrWriteAddrE, ~stallD, clk, rst | flushD);

    // system ??????
    wire EBREAK = (instD[31 : 20] == 12'b1) &func3_000 & opcode_1110011;
    wire ECALL  = (instD[31 : 20] == 12'b0) &func3_000 & opcode_1110011;
    wire MRET = (instD[31 : 20] == 12'h302) &func3_000 & opcode_1110011;
  
    //pc ??????
    gen_en_dff #(64) pcE_dff(pcD, pcE, ~stallD, clk, rst | flushD);
    gen_en_dff #(32) instE_dff(instD, instE, ~stallD, clk, rst | flushD);
    
    
    // CSR ??????
    assign  csrReadEnable = CSRtype;
    assign  csrReadAddr       = instD[31 : 20];
    gen_en_dff #(64) csrReadDataE_dff(csrReadData, csrReadDataE, ~stallD, clk, rst | flushD);

    
    // ??????????????????Bus??????
    assign rs1ReadEnable = Rtype | Itype | Stype | Btype | csr;
    assign rs1ReadAddr   = rs1ReadEnable ? rs1 : 0;
    
    assign rs2ReadEnable = Rtype | Stype | Btype;
    assign rs2ReadAddr   = rs2ReadEnable ? rs2 : 0;
    
    wire BusReadEnableE_r  = load;
    wire BusWriteEnableE_r = store;
    gen_en_dff #(1) BusReadEnableE_dff(BusReadEnableE_r,BusReadEnableE, ~stallD, clk, rst | flushD);
    gen_en_dff #(1) BusWriteEnableE_dff(BusWriteEnableE_r,BusWriteEnableE, ~stallD, clk, rst | flushD);
    
    
    wire rdWriteEnableE_r      = (Rtype | Itype | Utype | Jtype | CSRtype) ;
    wire [4 : 0]rdWriteAddrE_r = (rdWriteEnableE_r == 1'b1) ? rd  : 0;
    gen_en_dff #(6) rd_dff({rdWriteEnableE_r,rdWriteAddrE_r},{rdWriteEnableE,rdWriteAddrE}, ~stallD, clk, rst | flushD);
    
    wire [63 : 0] imm_r = Btype ? immB :
    Stype ? immS :
    Itype ? immI :
    Jtype ? immJ :
    Utype ? immU :
    CSRtype ? immCSR : `ZERO_64;
    gen_en_dff #(64) imm_dff(imm_r, imm, ~stallD, clk, rst | flushD);
    
    gen_en_dff #(64) rs1DataE_dff(rs1DataD,rs1DataE, ~stallD, clk, rst | flushD);
    gen_en_dff #(64) rs2DataE_dff(rs2DataD,rs2DataE, ~stallD, clk, rst | flushD);
    
endmodule
