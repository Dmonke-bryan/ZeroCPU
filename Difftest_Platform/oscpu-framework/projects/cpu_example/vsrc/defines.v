
`timescale 1ns / 1ps


`define INST_BUS   31 : 0
`define DATA_BUS   63 : 0
`define ADDR_BUS   63 : 0
`define ZERO_8     8'b0000000
`define ZERO_16    16'h0000
`define ZERO_32    32'h00000000
`define ZERO_64    64'h00000000_00000000   
`define REG_BUS    63 : 0     

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