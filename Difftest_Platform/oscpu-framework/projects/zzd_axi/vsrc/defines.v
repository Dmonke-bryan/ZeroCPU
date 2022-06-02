`timescale 1ns / 1ps
/* verilator lint_off UNDRIVEN */
/* verilator lint_off UNUSED */

`define DEBUG


`define INST_BUS   31 : 0
`define DATA_BUS   63 : 0
`define ADDR_BUS   63 : 0

`define SIZE_B              2'b00
`define SIZE_H              2'b01
`define SIZE_W              2'b10
`define SIZE_D              2'b11

`define ZERO_8     8'b0000000
`define ZERO_16    16'h0000
`define ZERO_32    32'h00000000
`define ZERO_64    64'h00000000_00000000
`define REG_BUS    63 : 0

`define AXI_ADDR_WIDTH      64
`define AXI_DATA_WIDTH      64
`define AXI_ID_WIDTH        4
`define AXI_USER_WIDTH      1

`define REQ_READ            1'b0
`define REQ_WRITE           1'b1

// b10000000000000 加法      b01000000000000 减法
// b00100000000000 左移      b00010000000000 小于
// b00001000000000 无符号小于 b00000100000000 逻辑右移
// b00000010000000 算术右移   b00000001000000 异或
// b00000000100000 或        b00000000010000 与
// b00000000001000 大于      b00000000000100 无符号大于
// b00000000000010 等于      b00000000000001 不等于
`define ADD  14'b10000000000000
`define SUB  14'b01000000000000
`define SLL  14'b00100000000000
`define LES  14'b00010000000000
`define LESU 14'b00001000000000
`define SRL  14'b00000100000000
`define SRA  14'b00000010000000
`define XOR  14'b00000001000000
`define OR   14'b00000000100000
`define AND  14'b00000000010000
`define BIG  14'b00000000001000
`define BIGU 14'b00000000000100
`define EQ   14'b00000000000010
`define NEQ  14'b00000000000001

// {LB,LBU,LH,LHU,LW,LWU,LD,SB,SH,SW,SD}
`define LB   11'b10000000000
`define LBU  11'b01000000000
`define LH   11'b00100000000
`define LHU  11'b00010000000
`define LW   11'b00001000000
`define LWU  11'b00000100000
`define LD   11'b00000010000
`define SB   11'b00000001000
`define SH   11'b00000000100
`define SW   11'b00000000010
`define SD   11'b00000000001


`define sstatus      12'h100
`define mstatus      12'h300
`define misa         12'h301
`define mie          12'h304
`define mtvec        12'h305
`define mcounteren   12'h306
`define mvendorid    12'hf11
`define marchid      12'hf12
`define mimpid       12'hf13
`define mhartid      12'hf14
`define mscratch     12'h340
`define mepc         12'h341
`define mcause       12'h342
`define mtval        12'h343
`define mip          12'h344
`define mcycle       12'hb00
`define minstret     12'hb02
`define dcsr         12'h7b0
`define dpc          12'h7b1
`define dscratch     12'h7b2
