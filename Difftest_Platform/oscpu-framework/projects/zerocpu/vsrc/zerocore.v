`timescale 1ns/1ps

/* verilator lint_off UNDRIVEN */

`include "defines.v"
`include "if_stage.v"
`include "id_stage.v"
`include "ex_stage.v"
`include "Regfile.v"
`include "DFF.v"

module zerocore (
    input clk,
    input rst,
    //interface with inst/data RAM
    /* verilator lint_off UNUSED */
    input [`DATA_BUS] RamReadData,
    output RamReadEnable,
    output RamWriteEnable,
    output [`ADDR_BUS] RamReadAddr,
    output [`ADDR_BUS] RamWriteAddr,
    output [`DATA_BUS] RamWriteMask,
    output [`DATA_BUS] RamWriteData
);
    
wire [`ADDR_BUS] pc;

if_stage u_if(
    .clk(clk),
    .rst(rst),
    .pc(pc)
);

//read inst from extern virtual RAM
wire [`INST_BUS] instF;
assign RamReadEnable = 1'b0;

/* verilator lint_off UNUSED */
assign instF = RamReadData[31:0];
assign RamReadAddr = pc;


wire aluBsrc;
wire [3:0] aluCtl;
wire [`REG_BUS] ra_addr;
wire [4:0] rb_addr;
wire [4:0] rd_addr;
wire [`DATA_BUS] ra;
wire [`DATA_BUS] rb;
wire [`DATA_BUS] rw;
wire rd_en;
wire [`DATA_BUS] imm;
wire ra_en;
wire rb_en;

wire [`INST_BUS] instD;

DFF #(32) u_inst_F2D(.clk(clk),.rst(rst),.wen(1'b1),.din(instF),.dout(instD));

id_stage u_id(
    .inst(instD),
    .ra_en(ra_en),
    .ra_addr(ra_addr),
    .rb_en(rb_en),
    .rb_addr(rb_addr),
    .rd_en(rd_en),
    .rd_addr(rd_addr),
    .imm(imm),
    .aluBsrc(aluBsrc),
    .aluCtl(aluCtl)
);


wire [`DATA_BUS] ina;
wire [`DATA_BUS] inb;
wire [`DATA_BUS] res;
assign ina = ra;
assign inb = aluBsrc ? imm : rb;
assign res = rw;


ex_stage u_ex(
    .ina(ina),
    //.ra_en(ra_en),
    .inb(inb),
    //.rb_en(rb_en),
    .aluCtl(aluCtl),
    .res(res)
);

Regfile u_regs(
    .clk(clk),
    .rst(rst),
    .Ra_en(ra_en),
    .Rb_en(rb_en),
    .Ra_addr(ra_addr),
    .Rb_addr(rb_addr),
    .Ra(ina),
    .Rb(rb),
    .Rw_en(rd_en),
    .Rw_addr(rd_addr),
    .Rw(rw)
);



endmodule
