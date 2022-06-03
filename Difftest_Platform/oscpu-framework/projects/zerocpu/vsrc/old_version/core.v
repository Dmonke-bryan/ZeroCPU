`include "common.v"
`include "pcgen.v"
`include "iram.v"
`include "contrGen.v"
`include "regs.v"
`include "alu.v"

module core (
    input clk,
    input rst_n,
    input [`DATA_BUS] ReadData,
    output ReadEnable,
    output WriteEnable,
    output [`ADDR_BUS] ReadAddr,
    output [`ADDR_BUS] WriteAddr,
    output [`DATA_BUS] WriteMask,
    output [`DATA_BUS] WriteData
);

wire [`iram_addr-1:0] nxt_pc;
wire [`inst_width-1:0] inst;

//pc generater 
pcgen u_pcgen(
    .clk    (clk    ),
    .rst_n  (rst_n  ),
    .nxt_pc (nxt_pc )
);

//read inst from extern virtual RAM
assign ReadEnable = 1'b1;

assign inst = ReadData[31:0];
assign ReadAddr = {{52{1'b0}},nxt_pc};

//instruction ram - read only
/*
iram iram_inst(
    .clk(clk),
    .rd_en(1'b1),
    .rd_addr(nxt_pc),
    .rd_data(inst),
    .wr_en(1'b0),
    .wr_addr(12'b0),
    .wr_data(32'b0)
);
*/

wire aluBsrc;
wire [3:0] aluCtl;
wire [4:0] rs1_addr;
wire [4:0] rs2_addr;
wire [4:0] rd_addr;
wire rdWriteEn;
wire [`data_width-1:0] imm;


//contrlGen - id stage
contrGen u_contrGen(
    .inst      (inst      ),
    .aluBsrc   (aluBsrc   ),
    .rs1_addr  (rs1_addr  ),
    .rs2_addr  (rs2_addr  ),
    .rdWriteEn (rdWriteEn ),
    .rd_addr   (rd_addr   ),
    .imm       (imm       ),
    .aluCtl    (aluCtl)    
);



wire [`data_width-1:0] busA;
wire [`data_width-1:0] busB;

wire [`data_width-1:0] ina;
wire [`data_width-1:0] inb;
wire [`data_width-1:0] res;


assign  ina = busA;
assign  inb = aluBsrc? imm : busB;

//alu - ex stage 
alu u_alu(
    .ina    (ina    ),
    .inb    (inb    ),
    .aluCtl (aluCtl ),
    .outy   (res   )
);


//regs - pick data from regsheap
regs u_regs(
    .Ra    (rs1_addr    ),
    .Rb    (rs2_addr    ),
    .Rw    (rd_addr    ),
    .busW  (res    ),
    .RegWr (rdWriteEn   ),
    .clk   (clk    ),
    .busA  (busA  ),
    .busB  (busB  )
);


    
endmodule
