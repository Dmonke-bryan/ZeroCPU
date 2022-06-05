`timescale 1ns/1ps

`include "defines.v"
`include "if_stage.v"
`include "id_stage.v"
`include "ex_stage.v"
`include "Regfile.v"

module zerocore (
    input clk,
    input rst,
    //interface with inst/data RAM
    input [`DATA_BUS] ReadData,
    output ReadEnable,
    output WriteEnable,
    output [`ADDR_BUS] ReadAddr,
    output [`ADDR_BUS] WriteAddr,
    output [`DATA_BUS] WriteMask,
    output [`DATA_BUS] WriteData
);
    
wire [`ADDR_BUS] pc;

if_stage u_if(
    .clk(clk),
    .rst(rst),
    .pc(pc)
);

//read inst from extern virtual RAM
wire [`INST_BUS] inst;
assign ReadEnable = 1'b1;

assign inst = ReadData[31:0];
assign ReadAddr = {{52{1'b0}},pc};


wire aluBsrc;
wire [3:0] aluCtl;
wire [`REG_BUS] ra_addr;
wire [4:0] rb_addr;
wire [4:0] rd_addr;
wire [`DATA_BUS] ra;
wire [`DATA_BUS] rb;
wire rd_en;
wire [`DATA_BUS] imm;
wire ra_en;
wire rb_en;

id_stage u_id(
    .inst(inst),
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


wire [`DATA_BUS] rb_ex;
wire [`DATA_BUS] res;
assign rb_ex = aluBsrc ? imm : rb;

ex_stage u_ex(
    .ra(ra),
    .ra_en(ra_en),
    .rb(rb_ex),
    .rb_en(rb_en),
    .aluCtl(aluCtl),
    .res(res)
);

Regfile u_regs(
    .clk(clkS),
    .rst(rst),
    .Ra_en(ra_en),
    .Rb_en(rb_en),
    .Ra_addr(ra_addr),
    .Rb_addr(rb_addr),
    .Ra(ra),
    .Rb(rb),
    .Rw_en(rd_en),
    .Rw_addr(rd_addr),
    .Rw(res)
);



endmodule