`timescale 1ns / 1ps
/* verilator lint_off UNDRIVEN */
/* verilator lint_off UNUSED */

`define DEBUG
`define START_ADDR 64'h80000000

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


   
module ysyx_210407(
    input         clock,
    input         reset,
     
    input         io_interrupt,
    
    //axi master
    input                               io_master_awready,
    output                              io_master_awvalid,
    output [31:0]                       io_master_awaddr,
    output [2:0]                        io_master_awprot,
    output [3:0]                        io_master_awid,
    output [7:0]                        io_master_awlen,
    output [2:0]                        io_master_awsize,
    output [1:0]                        io_master_awburst,
    output                              io_master_awlock,
    output [3:0]                        io_master_awcache,
    output [3:0]                        io_master_awqos,
    
    input                               io_master_wready,
    output                              io_master_wvalid,
    output [63:0]                       io_master_wdata,
    output [7:0]                        io_master_wstrb,
    output                              io_master_wlast,
    
    output                              io_master_bready,
    input                               io_master_bvalid,
    input  [1:0]                        io_master_bresp,
    input  [3:0]                        io_master_bid,

    input                               io_master_arready,
    output                              io_master_arvalid,
    output [31:0]                       io_master_araddr,
    output [2:0]                        io_master_arprot,
    output [3:0]                        io_master_arid,
    output [7:0]                        io_master_arlen,
    output [2:0]                        io_master_arsize,
    output [1:0]                        io_master_arburst,
    output                              io_master_arlock,
    output [3:0]                        io_master_arcache,
    output [3:0]                        io_master_arqos,
    
    output                              io_master_rready,
    input                               io_master_rvalid,
    input  [1:0]                        io_master_rresp,
    input  [63:0]                       io_master_rdata,
    input                               io_master_rlast,
    input  [3:0]                        io_master_rid,

    
    // axi slave
    output                               io_slave_awready,
    input                                io_slave_awvalid,
    input   [31:0]                      io_slave_awaddr ,
    input   [3:0]                       io_slave_awid   ,
    input   [7:0]                       io_slave_awlen  ,
    input   [2:0]                       io_slave_awsize ,
    input   [1:0]                       io_slave_awburst,
    output                               io_slave_wready ,
    input                                io_slave_wvalid ,
    input   [63:0]                      io_slave_wdata  ,
    input   [7:0]                       io_slave_wstrb  ,
    input                                io_slave_wlast  ,
    input                                io_slave_bready ,
    output                               io_slave_bvalid ,
    output  [1:0]                       io_slave_bresp  ,
    output  [3:0]                       io_slave_bid    ,
    output                               io_slave_arready,
    input                                io_slave_arvalid,
    input   [31:0]                      io_slave_araddr ,
    input   [3:0]                       io_slave_arid   ,
    input   [7:0]                       io_slave_arlen  ,
    input   [2:0]                       io_slave_arsize ,
    input   [1:0]                       io_slave_arburst,
    input                                io_slave_rready ,
    output                               io_slave_rvalid ,
    output  [1:0]                       io_slave_rresp  ,
    output  [63:0]                      io_slave_rdata  ,
    output                               io_slave_rlast  ,
    output  [3:0]                       io_slave_rid
);

    assign io_slave_awready  = 1'b0;     
    assign io_slave_wready   = 1'b0;   
    assign io_slave_bvalid   = 1'b0;   
    assign io_slave_bresp    = 2'b0;  
    assign io_slave_bid      = 4'b0;
    assign io_slave_arready  = 1'b0;    

    assign io_slave_rvalid   = 1'b0;    
    assign io_slave_rresp    = 2'b0;     
    assign io_slave_rdata    = 64'b0;     
    assign io_slave_rlast    = 1'b0;    
    assign io_slave_rid      = 4'b0;  


    wire aw_ready;
    wire aw_valid;
    wire [`AXI_ADDR_WIDTH-1:0] aw_addr;
    wire [2:0] aw_prot;
    wire [`AXI_ID_WIDTH-1:0] aw_id;
    wire [`AXI_USER_WIDTH-1:0] aw_user;
    wire [7:0] aw_len;
    wire [2:0] aw_size;
    wire [1:0] aw_burst;
    wire aw_lock;
    wire [3:0] aw_cache;
    wire [3:0] aw_qos;
    wire [3:0] aw_region;

    wire w_ready;
    wire w_valid;
    wire [`AXI_DATA_WIDTH-1:0] w_data;
    wire [`AXI_DATA_WIDTH/8-1:0] w_strb;
    wire w_last;
    wire [`AXI_USER_WIDTH-1:0] w_user;
    
    wire b_ready;
    wire b_valid;
    wire [1:0] b_resp;
    wire [`AXI_ID_WIDTH-1:0] b_id;
    wire [`AXI_USER_WIDTH-1:0] b_user;

    wire ar_ready;
    wire ar_valid;
    wire [`AXI_ADDR_WIDTH-1:0] ar_addr;
    wire [2:0] ar_prot;
    wire [`AXI_ID_WIDTH-1:0] ar_id;
    wire [`AXI_USER_WIDTH-1:0] ar_user;
    wire [7:0] ar_len;
    wire [2:0] ar_size;
    wire [1:0] ar_burst;
    wire ar_lock;
    wire [3:0] ar_cache;
    wire [3:0] ar_qos;
    wire [3:0] ar_region;
    
    wire r_ready;
    wire r_valid;
    wire [1:0] r_resp;
    wire [`AXI_DATA_WIDTH-1:0] r_data;
    wire r_last;
    wire [`AXI_ID_WIDTH-1:0] r_id;
    wire [`AXI_USER_WIDTH-1:0] r_user;

    assign ar_ready                                 = io_master_arready;
    assign io_master_arvalid             = ar_valid;
    assign io_master_araddr         = ar_addr[31 :0];
    assign io_master_arprot         = ar_prot;
    assign io_master_arid           = ar_id;
    assign io_master_arlen          = ar_len;
    assign io_master_arsize         = ar_size;
    assign io_master_arburst        = ar_burst;
    assign io_master_arlock         = ar_lock;
    assign io_master_arcache        = ar_cache;
    assign io_master_arqos          = ar_qos;
    
    assign aw_ready =             io_master_awready;
    assign io_master_awvalid             = aw_valid;
    assign io_master_awaddr         = aw_addr[31 : 0];     
    assign io_master_awprot         = aw_prot ;  
    assign io_master_awid           = aw_id;     
    assign io_master_awlen          = aw_len;   
    assign io_master_awsize         = aw_size;    
    assign io_master_awburst        = aw_burst;    
    assign io_master_awlock         = aw_lock;    
    assign io_master_awcache        = aw_cache;     
    assign io_master_awqos          = aw_qos;   

    assign w_ready =               io_master_wready; 
    assign io_master_wvalid         = w_valid; 
    assign io_master_wdata          = w_data;    
    assign io_master_wstrb          = w_strb;    
    assign io_master_wlast          = w_last;     

    assign io_master_bready              = b_ready;  
    assign b_valid = io_master_bvalid;
    assign b_resp = io_master_bresp; 
    assign b_id = io_master_bid;  


    assign io_master_rready              = r_ready;
    assign r_valid                                  = io_master_rvalid;
    assign r_resp                                   = io_master_rresp;
    assign r_data                                   = io_master_rdata;
    assign r_last                                   = io_master_rlast;
    assign r_id                                     = io_master_rid;

    ysyx_210407_axi u_ysyx_210407_axi (
        .clock                          (clock),
        .reset                          (reset),

        .rw_valid_i                     (if_valid),
        .rw_ready_o                     (if_ready),
        .rw_req_i                       (req),
        .data_read_o                    (if_data_read),
        .data_write_i                   (if_data_write),
        .data_write_mask_i              (if_data_write_mask),
        .rw_addr_i                      (if_addr),
        .rw_size_i                      (if_size),
        .rw_resp_o                      (if_resp),

        .axi_aw_ready_i                 (aw_ready),
        .axi_aw_valid_o                 (aw_valid),
        .axi_aw_addr_o                  (aw_addr),
        .axi_aw_prot_o                  (aw_prot),
        .axi_aw_id_o                    (aw_id),
        .axi_aw_user_o                  (aw_user),
        .axi_aw_len_o                   (aw_len),
        .axi_aw_size_o                  (aw_size),
        .axi_aw_burst_o                 (aw_burst),
        .axi_aw_lock_o                  (aw_lock),
        .axi_aw_cache_o                 (aw_cache),
        .axi_aw_qos_o                   (aw_qos),
        .axi_aw_region_o                (aw_region),

        .axi_w_ready_i                  (w_ready),
        .axi_w_valid_o                  (w_valid),
        .axi_w_data_o                   (w_data),
        .axi_w_strb_o                   (w_strb),
        .axi_w_last_o                   (w_last),
        .axi_w_user_o                   (w_user),
        
        .axi_b_ready_o                  (b_ready),
        .axi_b_valid_i                  (b_valid),
        .axi_b_resp_i                   (b_resp),
        .axi_b_id_i                     (b_id),
        .axi_b_user_i                   (b_user),

        .axi_ar_ready_i                 (ar_ready),
        .axi_ar_valid_o                 (ar_valid),
        .axi_ar_addr_o                  (ar_addr),
        .axi_ar_prot_o                  (ar_prot),
        .axi_ar_id_o                    (ar_id),
        .axi_ar_user_o                  (ar_user),
        .axi_ar_len_o                   (ar_len),
        .axi_ar_size_o                  (ar_size),
        .axi_ar_burst_o                 (ar_burst),
        .axi_ar_lock_o                  (ar_lock),
        .axi_ar_cache_o                 (ar_cache),
        .axi_ar_qos_o                   (ar_qos),
        .axi_ar_region_o                (ar_region),
        
        .axi_r_ready_o                  (r_ready),
        .axi_r_valid_i                  (r_valid),
        .axi_r_resp_i                   (r_resp),
        .axi_r_data_i                   (r_data),
        .axi_r_last_i                   (r_last),
        .axi_r_id_i                     (r_id),
        .axi_r_user_i                   (r_user)
    );

    wire if_valid;
    wire if_ready;
    wire if_read_enable;
    wire if_write_enable;
    wire req = reset ? 1'b0 : if_read_enable ? `REQ_READ : if_write_enable ? `REQ_WRITE : 1'b0;
    wire [63:0] if_data_read;
    wire [63:0] if_data_write;
    wire [7 :0] if_data_write_mask;
    wire [63:0] if_addr;
    wire [1:0] if_size;
    wire [1:0] if_resp;


wire [`INST_BUS] inst;
wire [`ADDR_BUS] pc;
wire pcEnable;

ysyx_210407_rvcpu u_ysyx_210407_rvcpu(
  .clk(clock),
  .rst(reset),
  .if_valid           (if_valid),
  .if_ready           (if_ready),
  .if_read_enable     (if_read_enable),
  .if_write_enable    (if_write_enable),
  .if_data_read       (if_data_read),
  .if_data_write      (if_data_write),
  .if_data_write_mask (if_data_write_mask),
  .if_addr            (if_addr),
  .if_size            (if_size),
  .if_resp            (if_resp)
);




endmodule

/* verilator lint_off UNUSED */
//--xuezhen--

`timescale 1ns / 1ps

`include "defines.v"


module ysyx_210407_rvcpu(input wire clk,
             input wire rst,
            output                              if_valid,
            input                               if_ready,
            output                              if_read_enable,
            output                              if_write_enable,
            input  [63:0]                       if_data_read,
            output  [63:0]                      if_data_write,
            output  [7 :0]                      if_data_write_mask,
            output [63:0]                       if_addr,
            output [1:0]                        if_size,
            input  [1:0]                        if_resp);
    
    
    wire CoreLock;
    // if_stage -> id_stage
    wire jump;
    wire [`ADDR_BUS] jumpAddr;
    
    
    // regfile -> id_stage
    wire [`REG_BUS] rs1DataD;
    wire [`REG_BUS] rs2DataD;
    
    // id_stage -> exe_stage
    wire  rs1ReadEnable;
    wire  rs2ReadEnable;
    wire  rdWriteEnableE;
    wire  [4 : 0] rs1ReadAddr;
    wire  [4 : 0] rs2ReadAddr;
    wire  [4 : 0] rdWriteAddrE;
    
    wire BusReadEnableE;
    wire BusWriteEnableE;
    wire [`ADDR_BUS] BusReadAddrE;
    wire [`ADDR_BUS] BusWriteAddrE;
    wire [`DATA_BUS] BusWriteDataE;
    wire [`REG_BUS] op1E;
    wire [`REG_BUS] op2E;
    
    // exe_stage -> mem_stage
    wire  rdWriteEnableM;
    wire [4 : 0] rdWriteAddrM;
    wire [`DATA_BUS] rdWriteDataM;
    
    // mem_stage -> wb_stage
    wire rdWriteEnableW;
    wire [4 : 0]rdWriteAddrW;
    wire  [`REG_BUS]rdWriteDataW;
    
    // exe_stage -> other stage
    
    // exe_stage -> regfile
    
    
    
    wire flushF;
    wire [`ADDR_BUS]pcF;
    wire pcEnable;
    /*
    wire CoreLock = BusReadEnable & (~ RamReadVaild) |
                    (~instVaild); 
*/
    ysyx_210407_if_stage u_ysyx_210407_if_stage(
    //input
    .clk(clk),
    .rst(rst),
    .jump(jump),
    .stallF(stallF),
    .flushF(flushF),
    .jAddr(jAddr),
    .instF(instF),
    .CoreLock(CoreLock),
    //output
    .pcF(pcF),
    .pcD(pcD),
    .pcEnable(pcEnable),
    .instD(instD)
    );

    reg RamReadEnable;
    reg RamWriteEnable;
    reg [`ADDR_BUS] RamReadData;
    reg [`ADDR_BUS] RamReadAddr;
    reg [`ADDR_BUS] RamWriteAddr;
    reg [`DATA_BUS] RamWriteData;
    reg [`DATA_BUS] RamWriteMask;

    assign if_valid = (~if_ready) & (pcEnable | RamReadEnable | RamWriteEnable);
    assign if_size = `SIZE_D;
    assign CoreLock = ~(if_ready);
    assign if_read_enable = (~RamWriteEnable) & (RamReadEnable | pcEnable);
    assign if_write_enable = RamWriteEnable;
    assign if_addr[2 : 0] = 3'b0;
    assign if_addr[63 : 3] = RamReadEnable ? RamReadAddr[63 : 3] : RamWriteEnable ? RamWriteAddr[63 : 3] : pcF[63 : 3];
    wire [31 : 0] instF = (RamReadEnable | RamWriteEnable) ? 32'b0 : (pcF[2] ? if_data_read[63 : 32] : if_data_read[31 : 0]);
    wire RamReadData = RamReadEnable ? if_data_read : 64'b0;
    assign if_data_write = RamWriteEnable ? RamWriteData : 64'b0;
    assign if_data_write_mask = {RamWriteMask[63],RamWriteMask[55],RamWriteMask[47],RamWriteMask[39],
                                RamWriteMask[31],RamWriteMask[23],RamWriteMask[15],RamWriteMask[0]};


    
    wire [`INST_BUS]instD;
    wire [`ADDR_BUS]pcD;
    wire flushD;
    wire [10 : 0] memFuncE;
    wire [`ADDR_BUS]pcE;
    wire [14 : 0] instTypeE;
    wire [13 : 0] instFuncE;
    wire [5 : 0] csrFuncE;
    wire [`REG_BUS]csrReadDataE;
    wire [11 : 0] csrWriteAddrE;
    wire [`REG_BUS]rs1DataE;
    wire [`REG_BUS]rs2DataE;
    wire [`REG_BUS] imm;
    wire [`INST_BUS]instE;
    ysyx_210407_id_stage u_ysyx_210407_id_stage(
    //INPUT
    .clk(clk),
    .rst(rst),
    .flushD(flushD),
    .stallD(stallD),
    .pcD(pcD),
    .instD(instD),
    .rs1DataD(rs1DataD),
    .rs2DataD(rs2DataD),
    .csrReadData(csrReadData),
    //OUTPUT
    .rs1ReadEnable(rs1ReadEnable),
    .rs1ReadAddr(rs1ReadAddr),
    .rs2ReadEnable(rs2ReadEnable),
    .rs2ReadAddr(rs2ReadAddr),
    .rdWriteEnableE(rdWriteEnableE),
    .rdWriteAddrE(rdWriteAddrE),
    
    //Bus 部分
    .BusReadEnableE(BusReadEnableE),
    .BusWriteEnableE(BusWriteEnableE),
    .memFuncE(memFuncE),
    //执行数据 part
    .pcE(pcE),
    .instE(instE),
    .instTypeE(instTypeE),
    .instFuncE(instFuncE),
    .csrReadEnable(csrReadEnable),
    .csrReadAddr(csrReadAddr),
    .csrWriteAddrE(csrWriteAddrE),
    .csrFuncE(csrFuncE),
    .csrReadDataE(csrReadDataE),
    .rs1DataE(rs1DataE),
    .rs2DataE(rs2DataE),
    .imm(imm)
    );
    
    wire flushE;
    wire [10 : 0] memFuncM;
    wire [14 : 0] instTypeM;
    wire [`ADDR_BUS] BusWriteAddrM;
    wire  [`DATA_BUS] BusWriteDataM;
    wire [`ADDR_BUS] BusReadAddrM;
    wire         BusWriteEnableM;
    wire         BusReadEnableM;
    
    wire [`ADDR_BUS]pcM;
    wire [`INST_BUS]instM;

    wire [11 : 0] csrWriteAddrM;
    wire         csrWriteEnableM;
    wire  [`REG_BUS]csrWriteDataM;
    
    ysyx_210407_ex_stage u_ysyx_210407_ex_stage(
    .clk(clk),
    .rst(rst),
    // input
    .pcE(pcE),
    .instE(instE),
    .flushE(flushE),
    .stallE(stallE),
    .instTypeE(instTypeE),
    .instFuncE(instFuncE),
    .csrFuncE(csrFuncE),
    .csrReadDataE(csrReadDataE),
    .csrWriteAddrE(csrWriteAddrE),
    .imm(imm),
    .rs1DataE(rs1DataE),
    .rs2DataE(rs2DataE),
    .rdWriteEnableE(rdWriteEnableE),
    .rdWriteAddrE(rdWriteAddrE),
    .rdWriteDataPre1(rdWriteDataM),
    .rdWriteDataPre2(rdWriteDataW),
    .Redirect1(Redirect1),
    .Redirect2(Redirect2),
    
    // Bus 输入部分
    .memFuncE(memFuncE),
    .BusReadEnableE(BusReadEnableE),
    .BusWriteEnableE(BusWriteEnableE),
    
    // Bus 输出部分
    .BusWriteAddrM(BusWriteAddrM),
    .BusWriteDataM(BusWriteDataM),
    .BusReadAddrM(BusReadAddrM),
    .BusReadEnableM(BusReadEnableM),
    .BusWriteEnableM(BusWriteEnableM),
    .memFuncM(memFuncM),

    //csr 
    .LoadStoreE(LoadStoreE),
    .csrWriteDataM(csrWriteDataM),
    .csrWriteEnableM(csrWriteEnableM),
    .csrWriteAddrM(csrWriteAddrM),
    
    .rdWriteEnableM(rdWriteEnableM),
    .rdWriteAddrM(rdWriteAddrM),
    .rdWriteDataM(rdWriteDataM),
    .instTypeM(instTypeM),
    
    // jump 信号 load 信号
    .mecall(mecall),
    .mret(mret),
    .jalbranch(jalbranch),
    .jumpAddr(jumpAddr),
    
    .pcM(pcM),
    .instM(instM)
    
    );
    
    
    wire [`ADDR_BUS]pcW;
    wire [`INST_BUS]instW;
    wire flushM;
    wire [14 : 0] instTypeW;

    wire [11 : 0] csrWriteAddrW;
    wire         csrWriteEnableW;
    wire  [`REG_BUS]csrWriteDataW;

    wire [`ADDR_BUS] BusReadAddr;
    wire [`ADDR_BUS] BusWriteAddr;
    reg [`DATA_BUS] BusReadData; 
    wire [`DATA_BUS] BusWriteData;
    wire [`DATA_BUS] BusWriteMask;
    wire BusReadEnable;
    wire BusWriteEnable;

    reg [`ADDR_BUS] ClintReadAddr;
    reg [`ADDR_BUS] ClintWriteAddr;
    reg [`DATA_BUS] ClintReadData; 
    reg [`DATA_BUS] ClintWriteData;
    reg [`DATA_BUS] ClintWriteMask;
    reg ClintReadEnable;
    reg ClintWriteEnable;  


    always @(*) begin
        if(BusReadAddr[63 : 32] == 32'h0200) begin
            RamReadAddr = `ZERO_64;
            RamReadEnable = 1'b0;
            ClintReadAddr = BusReadAddr;
            ClintReadEnable = BusReadEnable;
            BusReadData = ClintReadData;
        end
        else begin
            RamReadAddr = BusReadAddr;
            RamReadEnable = BusReadEnable;
            ClintReadAddr = `ZERO_64;
            ClintReadEnable = 1'b0;
            BusReadData = RamReadData;
        end
    end

    always @(*) begin
        if(BusReadAddr[63 : 32] == 32'h0200) begin
            RamWriteAddr = `ZERO_64;
            RamWriteData = `ZERO_64;
            RamWriteEnable =1'b0;
            RamWriteMask = `ZERO_64;
            ClintWriteAddr = BusWriteAddr;
            ClintWriteData = BusWriteData;
            ClintWriteEnable = BusWriteEnable;
        end
        else begin
            ClintWriteAddr = `ZERO_64;
            ClintWriteData = `ZERO_64;
            ClintWriteEnable = 1'b0; 
            RamWriteAddr = BusWriteAddr;
            RamWriteData = BusWriteData;
            RamWriteEnable =BusWriteEnable;
            RamWriteMask = BusWriteMask;
        end
    end

    wire LoadStoreE;
    wire LoadStoreM;

    ysyx_210407_me_stage u_ysyx_210407_me_stage(
    // input
    .clk(clk),
    .rst(rst),
    .pcM(pcM),
    .instM(instM),
    .stallM(stallM),
    .flushM(flushM),
    .instTypeM(instTypeM),
    // Bus 部分
    .memFuncM(memFuncM),
    .BusWriteAddrM(BusWriteAddrM),
    .BusWriteDataM(BusWriteDataM),
    .BusReadAddrM(BusReadAddrM),
    .BusReadDataM(BusReadData),
    .BusReadEnableM(BusReadEnableM),
    .BusWriteEnableM(BusWriteEnableM),
    // -> Bus单元
    .BusWriteAddr(BusWriteAddr),
    .BusWriteData(BusWriteData),
    .BusWriteMask(BusWriteMask),
    .BusWriteEnable(BusWriteEnable),
    .BusReadEnable(BusReadEnable),
    .BusReadAddr(BusReadAddr),
    
    //寄存器 部分
    .rdWriteEnableM(rdWriteEnableM),
    .rdWriteAddrM(rdWriteAddrM),
    .rdWriteDataM(rdWriteDataM),

    //csr 部分
    .csrWriteDataM(csrWriteDataM),
    .csrWriteEnableM(csrWriteEnableM),
    .csrWriteAddrM(csrWriteAddrM),

    //output
    .LoadStoreM(LoadStoreM),
    .rdWriteAddrW(rdWriteAddrW),
    .rdWriteDataW(rdWriteDataW),
    .rdWriteEnableW(rdWriteEnableW),

    .csrWriteDataW(csrWriteDataW),
    .csrWriteEnableW(csrWriteEnableW),
    .csrWriteAddrW(csrWriteAddrW),
    
    .instTypeW(instTypeW),
    .pcW(pcW),
    .instW(instW)
   
    );

    wire [1 : 0] Redirect1;
    wire [1 : 0] Redirect2;
    wire [1 : 0] LoadRedirect;
    
    ysyx_210407_regfile u_ysyx_210407_regfile(
    .clk(clk),
    .rst(rst),
    .stallW(stallW),
    .WriteAddr(rdWriteAddrW),
    .WriteData(rdWriteDataW),
    .WriteEnable(rdWriteEnableW),
    
    .ReadAddr1(rs1ReadAddr),
    .ReadData1(rs1DataD),
    .ReadEnable1(rs1ReadEnable),
    .ReadAddr2(rs2ReadAddr),
    .ReadData2(rs2DataD),
    .ReadEnable2(rs2ReadEnable)
    );
    

    wire csrReadEnable;
    wire [11 : 0] csrReadAddr;
    wire [`REG_BUS] csrReadData; 

    wire [1 : 0]IRQtype;
    wire IRQret;
    wire [62 : 0]IRQcause;

    wire [`ADDR_BUS] mepcWriteData;
    wire [`ADDR_BUS]irqAddr;


    reg ITtime;
    wire [`REG_BUS]mepc_o;

    ysyx_210407_csrfile u_ysyx_210407_csrfile(
    .clk(clk),
    .rst(rst),
    .CoreLock(CoreLock),
    .pcW(pcW),
    .IRQtype(IRQtype),
    .IRQret(IRQret),
    .retAddr(mepcWriteData),
    .ClintReadAddr(ClintReadAddr),
    .ClintReadData(ClintReadData),
    .ClintReadEnable(ClintReadEnable),
    .ClintWriteAddr(ClintWriteAddr),
    .ClintWriteData(ClintWriteData),
    .ClintWriteEnable(ClintWriteEnable),
    .WriteCSR(csrWriteAddrW),
    .WriteData(csrWriteDataW),
    .WriteEnable(csrWriteEnableW),
    .ReadCSR(csrReadAddr),
    .ReadData(csrReadData),
    .ReadEnable(csrReadEnable),
    .irqAddr(irqAddr),
    .ITtime(ITtime),
    .mepc_o(mepc_o));
 


    wire load;
    wire stallF;
    wire stallD;
    wire stallE;
    wire stallM;
    wire stallW;
    
    wire mret;
    wire [`ADDR_BUS] jAddr;

    wire mecall;
    wire jalbranch;
    
    ysyx_210407_ctrl u_ysyx_210407_ctrl(
    .clk(clk),
    .rst(rst),
    .CoreLock(CoreLock),
    .jalbranch(jalbranch),
    .jumpAddr(jumpAddr),
    .mret(mret),
    .mepc_o(mepc_o),
    .LoadStoreE(LoadStoreE),
    .LoadStoreM(LoadStoreM),
    .mecall(mecall),
    .IRQtypeW(IRQtype),
    .IRQretW(IRQret),
    .ITtime(ITtime),
    .irqAddr(irqAddr),
    .mepcWriteDataW(mepcWriteData),

    .pcF(pcF),
    .pcD(pcD),
    .pcE(pcE),
    .pcM(pcM),
    .pcW(pcW),
    .instW(instW),

    .BusReadEnable(BusReadEnable),
    .BusWriteEnableM(BusWriteEnableM),
    .BusWriteAddrM(BusWriteAddrM),
    .BusReadAddr(BusReadAddr),
    .rdWriteAddrE(rdWriteAddrE),
    .rdWriteAddrM(rdWriteAddrM),
    .rs1ReadEnable(rs1ReadEnable),
    .rs2ReadEnable(rs2ReadEnable),
    .rs1ReadAddr(rs1ReadAddr),
    .rs2ReadAddr(rs2ReadAddr),
    .Redirect1(Redirect1),
    .Redirect2(Redirect2),
    
    .flushD(flushD),
    .flushF(flushF),
    .flushE(flushE),
    .flushM(flushM),
    .stallF(stallF),
    .stallD(stallD),
    .stallE(stallE),
    .stallM(stallM),
    .stallW(stallW),
    .jump(jump),
    .jAddr(jAddr)
    
    );
    
    wire mret;

    ysyx_210407_wb_stage u_ysyx_210407_wb_stage(
    .clk(clk),
    .rst(rst),
    .stallW(stallW),
    .instW(instW),
    .instTypeW(instTypeW),
    .reg_a0(u_ysyx_210407_regfile.regs[10])
    
    );
    
    
endmodule


module ysyx_210407_if_stage(input wire clk,
                input wire rst,
                input wire jump,
                input wire stallF,
                input wire flushF,
                input wire CoreLock,
                input wire [`ADDR_BUS] jAddr,
                input wire [`INST_BUS]instF,
                output wire [`ADDR_BUS] pcF,
                output wire [`ADDR_BUS] pcD,
                output wire pcEnable,
                output wire [`INST_BUS]instD);
    
    wire            pcEnableF_r;
    reg  [`REG_BUS] pc;
    
    // fetch an instruction
    
    always @(posedge clk) begin
        if (rst == 1'b1) begin
            pc <= `START_ADDR;
        end
        else if (jump == 1'b1)
            pc <= jAddr + 4;
        else if (stallF == 1'b1)
            pc <= pc;
        else begin
            pc <= pc + 4;
        end
    end
    
    assign pcF = rst ? 64'h80000000 : jump ? jAddr : pc;
    ysyx_210407_gen_en_dff #(64) pcD_dff(pcF,pcD,~stallF,clk,rst);
    assign pcEnable = (rst == 1'b1) ? 1'b0 : 1'b1;
    //ysyx_210407_gen_en_dff #(1) pcEnableF_dff(pcEnableF_r,pcEnableF,~stallF,clk,rst);
    ysyx_210407_gen_en_dff #(32) instD_dff(instF,instD,~stallF,clk,rst);

    
endmodule
    

module ysyx_210407_id_stage(input wire rst,
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
    wire func7_6  = func7 == 7'b0000110;  //自定义ptc指令
    
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
    
    
    // 指令类别
    wire Rtype = opcode_0110011 | opcode_0111011;
    wire Itype = opcode_0000011 | opcode_0001111 | opcode_0010011 |  //opcode_1110011 开除i籍
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
    ysyx_210407_gen_en_dff #(15) instTypeE_dff(instTypeE_r,instTypeE, ~stallD, clk, rst | flushD);
    
    // 指令bit
    // Itype 指令
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
    
    
    // Rtype 指令
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
    
    // Btype 指令
    wire BEQ  = func3_000 & opcode_1100011;
    wire BNE  = func3_001 & opcode_1100011;
    wire BLT  = func3_100 & opcode_1100011;
    wire BLTU = func3_110 & opcode_1100011;
    wire BGT  = func3_101 & opcode_1100011;
    wire BGTU = func3_111 & opcode_1100011;
    
    // Jtype 指令
    wire JAL = opcode_1101111;
    
    // load/store 指令
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
    ysyx_210407_gen_en_dff #(11) memFuncE_dff(memFuncE_r,memFuncE, ~stallD, clk, rst | flushD);
    
    // b100000000000000 加法      b010000000000000 减法
    // b001000000000000 左移      b000100000000000 小于
    // b000010000000000 无符号小于 b000001000000000 逻辑右移
    // b000000100000000 算术右移   b000000010000000 异或
    // b000000001000000 或        b000000000100000 与
    // b000000000010000 大于      b000000000001000 无符号大于
    // b000000000000010 等于      b000000000000001 不等于
    wire [13 : 0] instFuncE_r = {ADD|ADDI|ADDW|ADDIW,SUB|SUBW,
    SLL|SLLI|SLLW|SLLIW,SLT|SLTI|BLT,SLTU|SLTIU|BLTU,
    SRL|SRLI|SRLW|SRLIW,SRA|SRAI|SRAW|SRAIW,XOR|XORI,
    OR|ORI,AND|ANDI,BGT,BGTU,BEQ,BNE};
    
    ysyx_210407_gen_en_dff #(14) instFuncE_dff(instFuncE_r,instFuncE, ~stallD, clk, rst | flushD);
    
    // fence 指令
    wire FENCE  = func3_000 & opcode_0001111;
    wire FENCEI = func3_001 & opcode_0001111;
    
    wire [1 : 0]fenceFuncD = {FENCE,FENCEI};
    
    // csr 指令
    wire CSRRW  = func3_001 & opcode_1110011;
    wire CSRRS  = func3_010 & opcode_1110011;
    wire CSRRC  = func3_011 & opcode_1110011;
    wire CSRRWI = func3_101 & opcode_1110011;
    wire CSRRSI = func3_110 & opcode_1110011;
    wire CSRRCI = func3_111 & opcode_1110011;
    
    wire [5 : 0]csrFuncE_r = {CSRRW,CSRRS,CSRRC,CSRRWI,CSRRSI,CSRRCI};
    ysyx_210407_gen_en_dff #(6) csrFuncE_dff(csrFuncE_r, csrFuncE, ~stallD, clk, rst | flushD);
    ysyx_210407_gen_en_dff #(12) csrWriteAddrE_dff(csrReadAddr, csrWriteAddrE, ~stallD, clk, rst | flushD);

    // system 指令
    wire EBREAK = (instD[31 : 20] == 12'b1) &func3_000 & opcode_1110011;
    wire ECALL  = (instD[31 : 20] == 12'b0) &func3_000 & opcode_1110011;
    wire MRET = (instD[31 : 20] == 12'h302) &func3_000 & opcode_1110011;
  
    //pc 传递
    ysyx_210407_gen_en_dff #(64) pcE_dff(pcD, pcE, ~stallD, clk, rst | flushD);
    ysyx_210407_gen_en_dff #(32) instE_dff(instD, instE, ~stallD, clk, rst | flushD);
    
    
    // CSR 读写
    assign  csrReadEnable = CSRtype;
    assign  csrReadAddr       = instD[31 : 20];
    ysyx_210407_gen_en_dff #(64) csrReadDataE_dff(csrReadData, csrReadDataE, ~stallD, clk, rst | flushD);

    
    // 寄存器读写与Bus读写
    assign rs1ReadEnable = Rtype | Itype | Stype | Btype | csr;
    assign rs1ReadAddr   = rs1ReadEnable ? rs1 : 0;
    
    assign rs2ReadEnable = Rtype | Stype | Btype;
    assign rs2ReadAddr   = rs2ReadEnable ? rs2 : 0;
    
    wire BusReadEnableE_r  = load;
    wire BusWriteEnableE_r = store;
    ysyx_210407_gen_en_dff #(1) BusReadEnableE_dff(BusReadEnableE_r,BusReadEnableE, ~stallD, clk, rst | flushD);
    ysyx_210407_gen_en_dff #(1) BusWriteEnableE_dff(BusWriteEnableE_r,BusWriteEnableE, ~stallD, clk, rst | flushD);
    
    
    wire rdWriteEnableE_r      = (Rtype | Itype | Utype | Jtype | CSRtype) ;
    wire [4 : 0]rdWriteAddrE_r = (rdWriteEnableE_r == 1'b1) ? rd  : 0;
    ysyx_210407_gen_en_dff #(6) rd_dff({rdWriteEnableE_r,rdWriteAddrE_r},{rdWriteEnableE,rdWriteAddrE}, ~stallD, clk, rst | flushD);
    
    wire [63 : 0] imm_r = Btype ? immB :
    Stype ? immS :
    Itype ? immI :
    Jtype ? immJ :
    Utype ? immU :
    CSRtype ? immCSR : `ZERO_64;
    ysyx_210407_gen_en_dff #(64) imm_dff(imm_r, imm, ~stallD, clk, rst | flushD);
    
    ysyx_210407_gen_en_dff #(64) rs1DataE_dff(rs1DataD,rs1DataE, ~stallD, clk, rst | flushD);
    ysyx_210407_gen_en_dff #(64) rs2DataE_dff(rs2DataD,rs2DataE, ~stallD, clk, rst | flushD);
    
endmodule


module ysyx_210407_ex_stage(input wire clk,
                 input wire rst,
                 input wire [`ADDR_BUS] pcE,
                 input wire [`INST_BUS] instE,
                 input wire flushE,
                 input wire stallE,
                 input wire [14 : 0]instTypeE,
                 input wire [13 : 0] instFuncE,
                 input wire [5 : 0] csrFuncE,
                 input wire [`REG_BUS]csrReadDataE,
                 input wire [11 : 0]csrWriteAddrE,
                 input wire [`REG_BUS]imm,
                 input wire [`REG_BUS]rs1DataE,
                 input wire [`REG_BUS]rs2DataE,
                 input wire rdWriteEnableE,
                 input wire [4 : 0]rdWriteAddrE,
                 input wire [`REG_BUS]rdWriteDataPre1, //上一周期写回数据
                 input wire [`REG_BUS]rdWriteDataPre2, //上上周期写回数据
                 input wire [1 : 0]Redirect1,          //差一周期重定向寄存器 2b‘10 rs2 2b’01 rs1
                 input wire [1 : 0]Redirect2,          //差二周期重定向寄存器 2b‘10 rs2 2b’01 rs1
                 input wire [10 : 0] memFuncE,
                 input wire BusReadEnableE,
                 input wire BusWriteEnableE,
                 output wire [10 : 0] memFuncM,
                 output wire [`ADDR_BUS]BusWriteAddrM,
                 output wire [`DATA_BUS]BusWriteDataM,
                 output wire [`ADDR_BUS]BusReadAddrM,
                 output wire BusReadEnableM ,
                 output wire BusWriteEnableM,
                 output wire rdWriteEnableM,
                 output wire [4 : 0]rdWriteAddrM,
                 output wire [14 : 0]instTypeM,
                 output wire [`REG_BUS]rdWriteDataM,
                 output wire [11 : 0]csrWriteAddrM,
                 output wire [`REG_BUS]csrWriteDataM,
                 output wire csrWriteEnableM,
                 output wire mecall,
                 output wire mret,
                 output wire LoadStoreE,
                 output wire jalbranch,
                 output wire [`ADDR_BUS] jumpAddr,
                 output wire [`ADDR_BUS] pcM,
                 output wire [`INST_BUS] instM);
    
    
    wire [`REG_BUS] rs1Data = Redirect1[0] ? rdWriteDataPre1 :
    Redirect2[0] ? rdWriteDataPre2 : rs1DataE;
    wire [`REG_BUS] rs2Data = Redirect1[1] ? rdWriteDataPre1 :
    Redirect2[1] ? rdWriteDataPre2 : rs2DataE;
    
    wire [`REG_BUS] op1 = rst ? `ZERO_64 : rs1Data;
    
    // mathimm 使用立即数计算
    wire [`REG_BUS] op2 = rst ? `ZERO_64 : instTypeE[2] ? imm : rs2Data;
    
    // 使用pc还是寄存器
    wire  [`REG_BUS] adder1 = (instTypeE[8] | instTypeE[5] | instTypeE[7]) ? pcE : rs1Data;
    // 是否是Rtype
    wire  [`REG_BUS] adder2 = instTypeE[1] ? rs2Data : imm;
    
    
    // csr 操作数
    wire [`REG_BUS] csrop1 = csrReadDataE;
    wire [`REG_BUS] csrop2 = instTypeE[11] ? imm :
    instTypeE[10] ? rs1Data : `ZERO_64;
    
    // b100000000000000 加法      b010000000000000 减法
    // b001000000000000 左移      b000100000000000 小于
    // b000010000000000 无符号小于 b000001000000000 逻辑右移
    // b000000100000000 算术右移   b000000010000000 异或
    // b000000001000000 或        b000000000100000 与
    // b000000000010000 大于      b000000000001000 无符号大于
    // b000000000000010 等于      b000000000000001 不等于
    // 数学运算
    
    wire [`REG_BUS] resADD  = adder1 + adder2;
    wire [`REG_BUS] resSUB  = op1 - op2;
    wire [`REG_BUS] resSLL  = op1 << (instTypeE[0] ? {1'b0,op2[4 : 0]} : op2[5 : 0]);
    wire [`REG_BUS] resLESU = {{63{1'b0}},op1 < op2};
    wire [`REG_BUS] resLES  = {{63{1'b0}},$signed(op1) < $signed(op2)};
    wire [`REG_BUS] resSRL  = op1 >> op2[5 : 0];
    wire [`REG_BUS] resSRA  = $signed(op1) >>> op2[5 : 0];
    wire [31 : 0] resSRLW   = op1[31 : 0] >> op2[4 : 0];
    wire [31 : 0] resSRAW   = $signed(op1[31 : 0]) >>> op2[4 : 0];
    wire [`REG_BUS] resXOR  = op1 ^ op2;
    wire [`REG_BUS] resOR   = op1 | op2;
    wire [`REG_BUS] resAND  = op1 & op2;
    wire [`REG_BUS] resBIGU = {{63{1'b0}},op1 >= op2};
    wire [`REG_BUS] resBIG  = {{63{1'b0}},$signed(op1) >= $signed(op2)};
    wire [`REG_BUS] resEQ   = {{63{1'b0}},op1 == op2};
    wire [`REG_BUS] resNEQ  = {{63{1'b0}},op1 != op2};
    
    wire [`REG_BUS] resCSRRW = csrop2;
    wire [`REG_BUS] resCSRRS = csrop1 | csrop2;
    wire [`REG_BUS] resCSRRC = csrop1 &~ csrop2;
    
    
    //csr 处理 写回
    wire [`REG_BUS] csrWriteDataM_r = csrFuncE[5]|csrFuncE[2] ? resCSRRW :
    csrFuncE[4]|csrFuncE[1] ? resCSRRS :
    csrFuncE[3]|csrFuncE[0] ? resCSRRC : `ZERO_64;

    wire csrWriteEnableM_r = instTypeE[10]|instTypeE[11];

    ysyx_210407_gen_en_dff #(12) csrWriteAddrM_clk_diff(csrWriteAddrE,csrWriteAddrM,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff #(64) csrWriteDataM_clk_diff(csrWriteDataM_r,csrWriteDataM,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff #(1) csrWriteEnableM_clk_diff(csrWriteEnableM_r,csrWriteEnableM,~stallE, clk,rst | flushE);
    
    
    wire [`ADDR_BUS] result = instFuncE[0] ? resNEQ :
    instFuncE[1] ? resEQ :
    instFuncE[2] ? resBIGU :
    instFuncE[3] ? resBIG :
    instFuncE[4] ? resAND :
    instFuncE[5] ? resOR :
    instFuncE[6] ? resXOR :
    instFuncE[7] ? (instTypeE[0] ? {32'b0,resSRAW} : resSRA) :
    instFuncE[8] ? (instTypeE[0] ? {32'b0,resSRLW} : resSRL) :
    instFuncE[9] ? resLESU :
    instFuncE[10] ? resLES :
    instFuncE[11] ? resSLL :
    instFuncE[12] ? resSUB :
    instFuncE[13] ? resADD :`ZERO_64;
    
    // load store 处理
    ysyx_210407_gen_en_dff #(11) memFuncM_clk_diff(memFuncE,memFuncM,~stallE, clk,rst | flushE);
    
    wire [`ADDR_BUS]BusWriteAddrM_r = (rst == 1'b1) ? `ZERO_64 : resADD;
    wire [`DATA_BUS]BusWriteDataM_r = (rst == 1'b1) ? `ZERO_64 : rs2Data;
    wire [`ADDR_BUS] BusReadAddr_r  = (rst == 1'b1) ? `ZERO_64 : resADD;
    wire BusReadEnable_r = (rst == 1'b1) ? 1'b0 : BusReadEnableE;
    
    ysyx_210407_gen_en_dff #(1)  BusReadEnableM_clk_diff(BusReadEnable_r,BusReadEnableM,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff #(64) BusReadAddrM_clk_diff(BusReadAddr_r,BusReadAddrM,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff #(64) BusWriteAddrM_clk_diff(BusWriteAddrM_r,BusWriteAddrM,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff #(64) BusWriteDataM_clk_diff(BusWriteDataM_r,BusWriteDataM,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff #(1) BusWriteEnableM_clk_diff(BusWriteEnableE,BusWriteEnableM,~stallE, clk,rst | flushE);
    
    
    
    // jump,brach 处理
    wire resBranch             = instTypeE[5] & result[0];
    wire jalbranch_r                = (rst == 1'b1) ? 1'b0 : (resBranch | instTypeE[6] | instTypeE[7]);
    wire [`ADDR_BUS]jumpAddr_r = jalbranch_r ? resADD : `ZERO_64;
    wire [`ADDR_BUS] pcSave    = pcE + 64'h4;
    
    // 给ctrl单元
    assign LoadStoreE = BusReadEnableE | BusWriteEnableE;
    assign mecall = instTypeE[12];
    assign mret = instTypeE[14];

    ysyx_210407_gen_en_dff #(1) jalbranch_dff(jalbranch_r,jalbranch,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff  #(64) jumpAddr_dff(jumpAddr_r ,jumpAddr,~stallE, clk,rst | flushE);
    
    
    // 写寄存器处理
    wire rdWriteEnableE_r = rdWriteEnableE ;
    wire [`REG_BUS] rdWriteDataM_r = (rst == 1'b1) ?`ZERO_64 :
    (instTypeE[6] | instTypeE[7]) ? pcSave :    //jalr jal
    instTypeE[0] ? {{32{result[31]}},result[31:0]} :  //32位操作指令
    instTypeE[8] ? resADD :                     //auipc
    instTypeE[9] ? imm :                  //lui
    (instTypeE[10] | instTypeE[11]) ? csrReadDataE : result;  // csr数据
    ysyx_210407_gen_en_dff #(64) rdWriteDataE_clk_diff(rdWriteDataM_r,rdWriteDataM,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff #(6) rd_r_clk_diff({rdWriteEnableE_r,rdWriteAddrE},{rdWriteEnableM,rdWriteAddrM},~stallE, clk,rst | flushE);
    
    // 信号传递
    ysyx_210407_gen_en_dff  #(15) instTypeM_dff(instTypeE,instTypeM,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff  #(32) instM_dff(instE,instM,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff  #(64) pcM_dff(pcE ,pcM,~stallE, clk,rst | flushE);
    
endmodule


module ysyx_210407_me_stage(input rst,
                 input clk,
                 input stallM,
                 input flushM,
                 input wire [`ADDR_BUS] pcM,
                 input wire [`INST_BUS] instM,
                 input wire [10 : 0] memFuncM,
                 input wire [14 : 0]instTypeM,
                 input wire [`ADDR_BUS]BusWriteAddrM,
                 input wire [`DATA_BUS]BusWriteDataM,
                 input wire BusWriteEnableM,
                 input wire [`ADDR_BUS] BusReadAddrM,
                 input wire BusReadEnableM,
                 input wire [`DATA_BUS] BusReadDataM,
                 input wire [11 : 0]csrWriteAddrM,
                 input wire [`REG_BUS]csrWriteDataM,
                 input wire csrWriteEnableM,
                 output wire LoadStoreM,
                 output wire [`ADDR_BUS]BusWriteAddr,
                 output wire [`DATA_BUS]BusWriteData,
                 output wire BusWriteEnable,
                 output wire [`DATA_BUS] BusWriteMask,
                 output wire [`ADDR_BUS] BusReadAddr,
                 output wire BusReadEnable,
                 input wire rdWriteEnableM,
                 input wire [4 : 0]rdWriteAddrM,
                 input wire [`REG_BUS]rdWriteDataM,
                 output wire rdWriteEnableW,
                 output wire [4 : 0]rdWriteAddrW,
                 output wire [`REG_BUS]rdWriteDataW,
                 output wire [11 : 0]csrWriteAddrW,
                 output wire [`REG_BUS]csrWriteDataW,
                 output wire csrWriteEnableW,
                 output wire [14 : 0]instTypeW,
                 output wire [`ADDR_BUS] pcW,
                 output wire [`INST_BUS] instW);
    
    // memFunc = {LB,LBU,LH,LHU,LW,LWU,LD,SB,SH,SW,SD}
    
    wire [5 : 0] ReadShamt = {3'b0,BusReadAddrM[2 : 0]} << 3;
    
    wire [`DATA_BUS] loadRes8  = BusReadDataM>>ReadShamt;
    wire [`DATA_BUS] loadRes16 = BusReadDataM>>ReadShamt;
    wire [`DATA_BUS] loadRes32 = BusReadDataM>>ReadShamt;
    wire [`DATA_BUS] loadRes64 = BusReadDataM;
    
    wire [5 : 0] WriteShamt = {3'b0,BusWriteAddrM[2 : 0]} << 3;
    
    wire [`DATA_BUS] storeRes8     = BusWriteDataM<<WriteShamt;
    wire [`DATA_BUS] BusWriteMask8 = 64'hff<<WriteShamt;
    
    wire [`DATA_BUS] storeRes16     = BusWriteDataM<<WriteShamt;
    wire [`DATA_BUS] BusWriteMask16 = 64'hffff<<WriteShamt;
    
    wire [`DATA_BUS] storeRes32     = BusWriteDataM<<WriteShamt;
    wire [`DATA_BUS] BusWriteMask32 = 64'hffffffff<<WriteShamt;
    
    wire [`DATA_BUS] storeRes64     = BusWriteDataM;
    wire [`DATA_BUS] BusWriteMask64 = 64'hffff_ffff_ffff_ffff;
    
    wire [`DATA_BUS] BusWriteMask_r = 
    memFuncM[0] ? BusWriteMask64 :
    memFuncM[1] ? BusWriteMask32 :
    memFuncM[2] ? BusWriteMask16 :
    memFuncM[3] ? BusWriteMask8  : `ZERO_64;
    
    wire [`DATA_BUS] storeRes = 
    memFuncM[0] ? storeRes64 :
    memFuncM[1] ? storeRes32 :
    memFuncM[2] ? storeRes16 :
    memFuncM[3] ? storeRes8  : `ZERO_64;
    
    assign BusWriteData   = (rst == 1'b1) ? `ZERO_64 : storeRes;
    assign BusWriteAddr   = (rst == 1'b1) ? `ZERO_64 : BusWriteAddrM;
    assign BusWriteMask   = (rst == 1'b1) ? `ZERO_64 : BusWriteMask_r;
    assign BusWriteEnable = (rst == 1'b1) ? 1'b0 : BusWriteEnableM;
    assign BusReadEnable = (rst == 1'b1) ? 1'b0 : BusReadEnableM;
    assign BusReadAddr = (rst == 1'b1) ? `ZERO_64 : BusReadAddrM;

    wire [`DATA_BUS] rd8   = (rst == 1'b1) ? `ZERO_64 : {{56{loadRes8[7]}},loadRes8[7:0]};
    wire [`DATA_BUS] rd8u  = (rst == 1'b1) ? `ZERO_64 : {{56{1'b0}},loadRes8[7:0]};
    wire [`DATA_BUS] rd16  = (rst == 1'b1) ? `ZERO_64 : {{48{loadRes16[15]}},loadRes16[15:0]};
    wire [`DATA_BUS] rd16u = (rst == 1'b1) ? `ZERO_64 : {{48{1'b0}},loadRes16[15:0]};
    wire [`DATA_BUS] rd32  = (rst == 1'b1) ? `ZERO_64 : {{32{loadRes32[31]}},loadRes32[31:0]};
    wire [`DATA_BUS] rd32u = (rst == 1'b1) ? `ZERO_64 : {{32{1'b0}},loadRes32[31:0]};
    wire [`DATA_BUS] rd64  = (rst == 1'b1) ? `ZERO_64 : loadRes64;
    // {LB,LBU,LH,LHU,LW,LWU,LD,SB,SH,SW,SD}
    wire [`DATA_BUS] rdWriteDataM_r = 
    memFuncM[10] ? rd8 : memFuncM[9] ? rd8u :
    memFuncM[8]  ? rd16: memFuncM[7] ? rd16u:
    memFuncM[6]  ? rd32: memFuncM[5] ? rd32u:
    memFuncM[4]  ? rd64: rdWriteDataM;
    
    assign LoadStoreM = rst ? 1'b0 : BusWriteEnableM | BusReadEnable;

    
    ysyx_210407_gen_en_dff #(1) rdWriteEnableW_clk_diff(rdWriteEnableM,rdWriteEnableW,~stallM, clk,rst | flushM);
    ysyx_210407_gen_en_dff #(5) rdWriteAddrW_clk_diff(rdWriteAddrM,rdWriteAddrW,~stallM, clk,rst | flushM);
    ysyx_210407_gen_en_dff #(64)rdWriteDataW_clk_diff(rdWriteDataM_r,rdWriteDataW,~stallM, clk,rst | flushM);
    
    //信号传递
    ysyx_210407_gen_en_dff #(12) csrWriteAddrW_clk_diff(csrWriteAddrM,csrWriteAddrW,~stallM, clk,rst | flushM);
    ysyx_210407_gen_en_dff #(64) csrWriteDataW_clk_diff(csrWriteDataM,csrWriteDataW,~stallM, clk,rst | flushM);
    ysyx_210407_gen_en_dff #(1) csrWriteEnableW_clk_diff(csrWriteEnableM,csrWriteEnableW,~stallM, clk,rst | flushM);
    

    ysyx_210407_gen_en_dff  #(15) instTypeW_dff(instTypeM,instTypeW,~stallM, clk,rst | flushM);
    ysyx_210407_gen_en_dff  #(32) instW_dff(instM,instW,~stallM, clk,rst | flushM);
    ysyx_210407_gen_en_dff  #(64) pcW_dff(pcM ,pcW,~stallM, clk,rst | flushM);
     
endmodule


module ysyx_210407_wb_stage(
  input wire clk,
  input wire rst,
  input wire stallW,
  input wire [14 : 0] instTypeW,
  input wire [`INST_BUS]instW,
  input wire [`REG_BUS]reg_a0
);

    
`ifdef DEBUG
    always @(posedge clk) begin
        if(stallW == 1'b0) begin
            if (instW[6 : 0] == 7'h7b) begin
                $write("%s",reg_a0[7:0]);
            end
        end
    end
`endif 

endmodule


module ysyx_210407_ctrl (input jalbranch,                     //跳转和分支指令
             input [`ADDR_BUS]jumpAddr,
             input LoadStoreE,                     //ram读取指令
             input LoadStoreM,                       //ram读取指令
             input mecall,                     //陷阱信号
             input mret,
             input ITtime,                   //时钟中断信号
             input CoreLock,                 //整个内核暂停
             input wire [`ADDR_BUS]irqAddr,  //中断基地址
             input wire [`REG_BUS] mepc_o, 
             input wire clk,
             input wire rst,
             input wire [`ADDR_BUS]pcF,
             input wire [`ADDR_BUS]pcD,
             input wire [`ADDR_BUS]pcE,
             input wire [`ADDR_BUS]pcM,
             input wire [`ADDR_BUS]pcW,
             input wire [`INST_BUS]instW,
             input wire [`ADDR_BUS] BusWriteAddrM,
             input wire [`ADDR_BUS] BusReadAddr,
             input wire BusReadEnable,
             input wire BusWriteEnableM,
             input wire [4 : 0]rdWriteAddrE, //差一周期的写回数据
             input wire [4 : 0]rdWriteAddrM, //差两周期的写回数据
             input wire rs1ReadEnable,       //寄存器1读使能
             input wire rs2ReadEnable,       //寄存器2读使能
             input wire [4 : 0]rs1ReadAddr,
             input wire [4 : 0]rs2ReadAddr,  //需要读取的两个寄存器数据
             output wire [1 : 0]Redirect1,   //差一周期重定向寄存器 2b‘10 rs2 2b’01 rs1
             output wire [1 : 0]Redirect2,   //差二周期重定向寄存器 2b‘10 rs2 2b’01 rs1
             output flushF,
             output flushD,
             output flushE,
             output flushM,
             output stallF,
             output stallD,
             output stallE,
             output stallM,
             output stallW,
             output wire  jump,
             output  wire [`ADDR_BUS]jAddr,
             output  wire [`ADDR_BUS]mepcWriteDataW,
             output wire [1 : 0]IRQtypeW,      // 10 trap 01 ITtime
             output wire IRQretW
             );
    
    
    // 差一个周期有读取ram冲突和普通寄存器冲突
    wire [1 : 0] Redirect1_r = {rs2ReadAddr!=5'b0,rs1ReadAddr!=5'b0} & {(rdWriteAddrE == rs2ReadAddr)&rs2ReadEnable,
    (rdWriteAddrE == rs1ReadAddr)&rs1ReadEnable};
    
    // 差两个周期有读取ram冲突和普通寄存器冲突
    wire [1 : 0] Redirect2_r = ((~Redirect1_r) &
    {rs2ReadAddr!=5'b0,rs1ReadAddr!=5'b0} &
    {(rdWriteAddrM == rs2ReadAddr)&rs2ReadEnable,
    (rdWriteAddrM == rs1ReadAddr)&rs1ReadEnable});


    wire [1 : 0] IRQtype_r = {rst ? 1'b0 : mecall,
                    rst ? 1'b0 : ITtime_r};

    wire IRQret_r = mret;
    assign jAddr = (IRQtype_r != 2'b0) ? irqAddr : 
                   mret ? mepc_o : 
                   jalbranch ? jumpAddr : `ZERO_64;

    wire ITtime_r  = rst ? 1'b0 : ((pcE != `ZERO_64) & ~jalbranch) & (itWhit|ITtime);
    reg itWhit;
    always @ (posedge clk) begin
       if(rst == 1'b1) begin
           itWhit <= 1'b0;
       end 
       else if((pcE == `ZERO_64) | jalbranch) begin
           itWhit <= itWhit | ITtime;
       end
       else begin
           itWhit <= 1'b0;
       end
    end

    wire [`ADDR_BUS] mepcWriteData_r = mecall ? pcE : 
                     ITtime_r ? (pcE != `ZERO_64) ? pcE :
                              (pcD != `ZERO_64) ? pcD :
                              (pcF != `ZERO_64) ? pcF :`ZERO_64 :`ZERO_64;    
    
    assign stallF = ~flushF & (rst ? 1'b0 : 
                              CoreLock ? 1'b1 : 
                              (LoadStoreE | LoadStoreM) ? 1'b1 : 
                              IRQret ? 1'b1 :
                              IRQretW ? 1'b1 :
                              (IRQtype != 2'b0) ? 1'b1 :
                              (IRQtypeW != 2'b0) ? 1'b1 : 1'b0);
    
    assign stallD = rst ? 1'b0 : CoreLock ? 1'b1 :1'b0;
    assign stallE = rst ? 1'b0 : CoreLock ? 1'b1 :1'b0;
    assign stallM = rst ? 1'b0 : CoreLock ? 1'b1 :1'b0;
    assign stallW = rst ? 1'b0 : CoreLock ? 1'b1 :1'b0;
    
    assign flushF = ~CoreLock & (rst ? 1'b0 : 
                    IRQret_r ? 1'b1 :
                    (IRQtype_r != 2'b0) ? 1'b1 : 
                    jalbranch ? 1'b1 : 1'b0);
    assign flushD = ~CoreLock & (rst ? 1'b0 : 
                    IRQret_r ? 1'b1 :
                    IRQret ? 1'b1 :
                    IRQretW ? 1'b1 :
                   (IRQtype_r != 2'b0) ? 1'b1 :
                   (IRQtype != 2'b0) ? 1'b1 :
                   (IRQtypeW != 2'b0) ? 1'b1 : 
                   jalbranch ? 1'b1 : 
                    (LoadStoreE | LoadStoreM) ? 1'b1 :1'b0);

    assign flushE = ~CoreLock & (rst ? 1'b0 : 
                    LoadStoreM ? 1'b1 :
                    IRQtype_r[0] ? 1'b1 : 
                    jalbranch? 1'b1 :1'b0);
    assign flushM = ~CoreLock & (rst ? 1'b0 : 1'b0);
    
    assign jump = (jalbranch | mecall | mret | ITtime_r);

    // ID -> EXE 阶段触发器 
    ysyx_210407_gen_en_dff #(2) Redirect1_dff(Redirect1_r,Redirect1,1'b1&(~CoreLock),clk,rst | flushD);
    ysyx_210407_gen_en_dff #(2) Redirect2_dff(Redirect2_r,Redirect2,1'b1&(~CoreLock),clk,rst | flushD);

    // EXE -> MEM 触发器
    ysyx_210407_gen_en_dff #(2) IRQtype_dff(IRQtype_r,IRQtype,1'b1&(~CoreLock),clk,rst);
    ysyx_210407_gen_en_dff #(64) mepcWriteData_dff(mepcWriteData_r,mepcWriteData,1'b1&(~CoreLock),clk,rst);
    ysyx_210407_gen_en_dff #(1) IRQret_dff(IRQret_r,IRQret,1'b1&(~CoreLock),clk,rst);
//todo : mret还没改，ctrl里面的需要改成irqtype_r 
    wire [1 : 0]IRQtype;
    wire IRQret;
    wire [`ADDR_BUS] mepcWriteData;  
    //MEM -> WB 触发器
    ysyx_210407_gen_en_dff  #(64) mepcWriteDataW_dff(mepcWriteData ,mepcWriteDataW,1'b1&(~CoreLock), clk,rst);
    ysyx_210407_gen_en_dff  #(2) IRQtypeW_dff(IRQtype ,IRQtypeW,1'b1&(~CoreLock), clk,rst);
    ysyx_210407_gen_en_dff #(1) IRQretW_dff(IRQret,IRQretW,1'b1&(~CoreLock), clk,rst);
    
endmodule


module ysyx_210407_csrfile(input wire clk,
               input wire rst,
               input wire CoreLock,
               input wire [1 : 0]IRQtype,              //中断/异常来临
               input wire IRQret,               //中断/异常退出
               input wire [`REG_BUS] retAddr,   //中断/异常返回地址
               input wire [`ADDR_BUS]pcW,       //提交的指令地址
               input wire [`ADDR_BUS] ClintReadAddr,
               input wire [`ADDR_BUS] ClintWriteAddr,
               output wire [`DATA_BUS] ClintReadData,
               input wire [`DATA_BUS] ClintWriteData,
               input wire ClintReadEnable,
               input wire ClintWriteEnable,
               input wire [11 : 0] WriteCSR,
               input wire [`REG_BUS] WriteData,
               input wire 		 WriteEnable,
               input wire [11 : 0] ReadCSR,
               output wire [`REG_BUS] ReadData,
               input wire 		 ReadEnable,
               output wire [`REG_BUS] irqAddr,  //中断/异常跳转地址
               output reg ITtime,
               output wire [`REG_BUS] mepc_o
               );
    
    /*
     Machine Information Registers
     0xF11 MRO mvendorid Vendor ID.
     0xF12 MRO marchid Architecture ID.
     0xF13 MRO mimpid Implementation ID.
     0xF14 MRO mhartid Hardware thread ID.
     */
    wire [`REG_BUS] mvendorid;
    wire [`REG_BUS] marchid;
    wire [`REG_BUS] mimpid;
    wire [`REG_BUS] mhartid;
    
    /*
     mstatus Machine status register.
     0x301 MRW misa ISA and extensions
     0x302 MRW medeleg Machine exception delegation register.
     0x303 MRW mideleg Machine interrupt delegation register.
     0x304 MRW mie Machine interrupt-enable register.
     0x305 MRW mtvec Machine trap-handler base address.
     0x306 MRW mcounteren Machine counter enable.
     */
    wire [`REG_BUS] mstatus;
    wire [`REG_BUS] misa;
    wire [`REG_BUS] medeleg;
    wire [`REG_BUS] mideleg;
    wire [`REG_BUS] mie;
    wire [`REG_BUS] mip;
    wire [`REG_BUS] mtvec;
    wire [`REG_BUS] mcounteren;
    
    wire [`REG_BUS] mcause; 
    wire [`REG_BUS] mepc;
    wire [`REG_BUS] mscratch;
    
    /*
     Machine Counter/Timers
     0xB00 MRW mcycle Machine cycle counter.
     0xB02 MRW minstret Machine instructions-retired counter.
     0xB03 MRW mhpmcounter3 Machine performance-monitoring counter.
     0xB04 MRW mhpmcounter4 Machine performance-monitoring counter.
     .
     .
     .
     0xB1F MRW mhpmcounter31 Machine performance-monitoring counter.
     */
    
    reg [`REG_BUS] mcycle;
    reg [`REG_BUS] minstret;


    wire [`REG_BUS] sstatus;
    
    // 读出CSR
    wire [`REG_BUS] ReadData_r = rst ? `ZERO_64 : 
                                 ReadCSR == `mcycle ? mcycle :
                                 ReadCSR == `mstatus ? mstatus :
                                 ReadCSR == `mcause ? mcause :
                                 ReadCSR == `mtvec ? mtvec :
                                 ReadCSR == `mepc ? mepc :
                                 ReadCSR == `minstret ? minstret : `ZERO_64;
    
    assign ReadData = rst ? `ZERO_64 : ReadEnable ? ((ReadCSR == WriteCSR) ? WriteData : ReadData_r) : `ZERO_64;
    
    
    // mstatus
    wire [`REG_BUS]mstatus_t = (WriteCSR == `mstatus & WriteEnable) ? WriteData  : mstatus;
    wire [`REG_BUS]mstatus_r;
    assign mstatus_r[63] = rst ? 1'b0 : (mstatus_t[16:15] == 2'b11 | mstatus_t[14:13] == 2'b11) ? 1'b1 :1'b0;
    assign mstatus_r[62 : 13] = rst ? 50'b0 : mstatus_t[62 : 13];
    assign mstatus_r[12 : 11] = (IRQtype != 2'b0) ? 2'b11 : IRQret ? 2'b00 : mstatus_t[12 : 11];
    assign mstatus_r[10 : 9] = 2'b0;
    assign mstatus_r[7] = (IRQtype != 2'b0) ? mstatus_t[3] :IRQret ? 1'b1 : mstatus_t[7];
    assign mstatus_r[6 : 4] = 3'b0;
    // mstatus[3] IE
    assign mstatus_r[3] = (IRQret & mstatus_t[7]) ? mstatus_t[7] : (IRQtype != 2'b0) ? 1'b0 : mstatus_t[3];
    // preiledgeMode Mmode
    assign mstatus_r[2] = 1'b0;
    assign mstatus_r[1 : 0] = 2'b0;

    ysyx_210407_gen_en_dff #(64) mstatus_dff(mstatus_r,mstatus,1'b1&(~CoreLock),clk,rst);

        // sstatus
    wire [`REG_BUS]sstatus_t = (WriteCSR == `sstatus & WriteEnable) ? WriteData  : sstatus;
    wire [`REG_BUS]sstatus_r;
    assign sstatus_r[63] = rst ? 1'b0 : (sstatus_t[16:15] == 2'b11 | mstatus_t[14:13] == 2'b11) ? 1'b1 :1'b0;
    assign sstatus_r[62 : 17] = 46'b0;
    assign sstatus_r[16 : 13] = rst ? 4'b0 : mstatus_t[16 : 13];
    assign sstatus_r[12 : 0] = 13'b0;
    
    ysyx_210407_gen_en_dff #(64) sstatus_dff(sstatus_r,sstatus,1'b1&(~CoreLock),clk,rst);
    /*
    always @(posedge clk)  begin
        if (~CoreLock)
        sstatus <= sstatus_r;
    end
    */
     
    // mtvec
   wire [`REG_BUS]mtvec_t = ((WriteCSR == `mtvec) & WriteEnable) ? WriteData : mtvec;
   wire [`REG_BUS]mtvec_r; 
    assign mtvec_r[63 : 2] = mtvec_t[63 : 2];
    assign mtvec_r[1 : 0] = 2'b0;

    ysyx_210407_gen_en_dff #(64) mtvec_dff(mtvec_r,mtvec,1'b1&(~CoreLock),clk,rst);
    /*
    always @(posedge clk)  begin
        if (~CoreLock)
        mtvec                    <= mtvec_r;
    end
    */
    
    // mie
    wire [`REG_BUS] mie_t = ((WriteCSR == `mie) & WriteEnable) ? WriteData : mie;
    wire [`REG_BUS] mie_r;
    assign mie_r = rst ? `ZERO_64 : mie_t;
    ysyx_210407_gen_en_dff #(64) mie_dff(mie_r,mie,1'b1&(~CoreLock),clk,rst);
    /*
    always @(posedge clk)  begin
        if (~CoreLock)
        mie                    <= mie_r;
    end
    */
    // mip
    wire [`REG_BUS] mip_t = ((WriteCSR == `mip) & WriteEnable) ? WriteData : mip;
    wire [`REG_BUS] mip_r;
    assign mip_r[63 : 8] = 56'b0;
    assign mip_r[7] = rst ? 1'b0 : 1'b0;
    assign mip_r[6 : 0] = 7'b0;
    ysyx_210407_gen_en_dff #(64) mip_dff(mip_r,mip,1'b1&(~CoreLock),clk,rst);
    /*
    always @(posedge clk)  begin
        if (~CoreLock)
        mip                    <= mip_r;
    end
    */

    // mpec
    wire [`REG_BUS]mepc_t = ((WriteCSR == `mepc) & WriteEnable) ? WriteData : mepc;
    wire [`REG_BUS]mepc_r; 
    assign mepc_r = (IRQtype != 2'b0) ? retAddr : mepc_t;
    ysyx_210407_gen_en_dff #(64) mepc_dff(mepc_r,mepc,1'b1&(~CoreLock),clk,rst);
    /*
    always @(posedge clk)  begin
        if (~CoreLock)
        mepc                    <= mepc_r;
    end
    */

    //mscratch 
    wire [`REG_BUS]mscratch_t = ((WriteCSR == `mscratch) & WriteEnable) ? WriteData :mscratch;
    wire [`REG_BUS]mscratch_r;
    assign mscratch_r = (rst == 1'b1) ? `ZERO_64 : mscratch_t;
    ysyx_210407_gen_en_dff #(64) mscratch_dff(mscratch_r,mscratch,1'b1&(~CoreLock),clk,rst);
    /*
    always @(posedge clk)  begin
        if (~CoreLock)
        mscratch                    <= mscratch_r;
    end
    */

    // mcause
    wire [`REG_BUS]mcause_t = ((WriteCSR == `mcause ) & WriteEnable) ? WriteData : mcause;
    wire [`REG_BUS]mcause_r;
    // interrupt or trap
    assign mcause_r[63] = IRQtype[0] ? 1'b1 : IRQtype[1] ? 1'b0 : mcause_t[63];
    // cause
    assign mcause_r[62 : 0] = IRQtype[0] ? 63'h7 : IRQtype[1] ? 63'hb : mcause_t[62 : 0];
    ysyx_210407_gen_en_dff #(64) mcause_dff(mcause_r,mcause,1'b1&(~CoreLock),clk,rst);
    /*
    always @(posedge clk)  begin
        if (~CoreLock)
        mcause                   <= mcause_r;
    end
    */
    
    // mcycle
    always @(posedge clk) begin
        if (rst == 1'b1) begin
            mcycle <= `ZERO_64;
        end
        else if ((WriteCSR == `mcycle) & WriteEnable)  begin
            mcycle <= WriteData;
        end
        else begin
            mcycle                     <= mcycle + 1;
        end
    end

    // minstret
    always @(posedge clk) begin
        if (rst == 1'b1) begin
            minstret <= `ZERO_64;
        end
        else if (CoreLock == 1'b0) begin
            if(pcW != `ZERO_64) minstret <= minstret + 1;
        end
    end

    assign ClintReadData = rst ? `ZERO_64 :
    (ClintReadAddr == 64'h200bff8) ? mtime :
    (ClintReadAddr == 64'h2004000) ? mtimecmp : `ZERO_64;


    // mtime
    reg [`REG_BUS] mtime;
    reg [2 : 0] timediv;
    always @(posedge clk) begin
        if (rst == 1'b1) begin
            mtime <= `ZERO_64;
            timediv <= 3'b0;
        end
        else if ((ClintWriteAddr == 64'h200bff8) & ClintWriteEnable)  begin
            mtime <=ClintWriteData;
            timediv <= 3'b0;
        end
        else if(timediv == 3'b111) begin
            mtime <= mtime + 1;
            timediv <= 3'b0;
        end
        else begin
            mtime <= mtime;
            timediv <= timediv + 1;
        end
    end 

    // mtimecmp
    reg [`REG_BUS] mtimecmp;
    always @(posedge clk) begin
        if (rst == 1'b1) begin
            mtimecmp <= `ZERO_64;
        end
        else if ((ClintWriteAddr == 64'h2004000)&ClintWriteEnable) mtimecmp <=ClintWriteData;
        else mtimecmp <= mtimecmp;
    end 

    //信号传递
    wire [`REG_BUS]mtime_r = mtime;
    wire [`REG_BUS]mtimecmp_r = mtimecmp;
    // 只有mstatus.mie mie.mtie 置位时
    wire ITtime_r = rst ? 1'b0 : mstatus[3]&mie[7] ? mtime_r >= mtimecmp_r : 1'b0;

    ysyx_210407_gen_en_dff #(1) ITtime_dff(ITtime_r,ITtime,1'b1&(~CoreLock),clk,rst);
    /*
    always @(posedge clk) begin
        if (~CoreLock ) begin
            ITtime <= ITtime_r;
        end
    end
    */

    assign irqAddr = mtvec;
    assign mepc_o = mepc;


endmodule


module ysyx_210407_regfile(input wire clk,
               input wire rst,
               input wire stallW,
               input wire [4 : 0] WriteAddr,
               input wire [`REG_BUS] WriteData,
               input wire 		 WriteEnable,
               input wire [4 : 0] ReadAddr1,
               output wire [`REG_BUS] ReadData1,
               input wire 		 ReadEnable1,
               input wire [4 : 0] ReadAddr2,
               output wire [`REG_BUS] ReadData2,
               input wire 		 ReadEnable2);    
    // 32 registers
    reg [`REG_BUS] 	regs[0 : 31];
    
    always @(posedge clk)
    begin
        if (rst == 1'b1)
        begin
            regs[0]  = `ZERO_64;
            regs[1]  = `ZERO_64;
            regs[2]  = `ZERO_64;
            regs[3]  = `ZERO_64;
            regs[4]  = `ZERO_64;
            regs[5]  = `ZERO_64;
            regs[6]  = `ZERO_64;
            regs[7]  = `ZERO_64;
            regs[8]  = `ZERO_64;
            regs[9]  = `ZERO_64;
            regs[10] = `ZERO_64;
            regs[11] = `ZERO_64;
            regs[12] = `ZERO_64;
            regs[13] = `ZERO_64;
            regs[14] = `ZERO_64;
            regs[15] = `ZERO_64;
            regs[16] = `ZERO_64;
            regs[17] = `ZERO_64;
            regs[18] = `ZERO_64;
            regs[19] = `ZERO_64;
            regs[20] = `ZERO_64;
            regs[21] = `ZERO_64;
            regs[22] = `ZERO_64;
            regs[23] = `ZERO_64;
            regs[24] = `ZERO_64;
            regs[25] = `ZERO_64;
            regs[26] = `ZERO_64;
            regs[27] = `ZERO_64;
            regs[28] = `ZERO_64;
            regs[29] = `ZERO_64;
            regs[30] = `ZERO_64;
            regs[31] = `ZERO_64;
        end
        else if (WriteEnable  & (WriteAddr != 5'b0)) begin
            regs[WriteAddr] <= WriteData;
        end
    end
    
    assign ReadData1 = rst ? `ZERO_64 : (ReadEnable1 & (ReadAddr1 != 5'b0) ? (ReadAddr1 == WriteAddr ? WriteData : regs[ReadAddr1]) : `ZERO_64);
    assign ReadData2 = rst ? `ZERO_64 : (ReadEnable2 & (ReadAddr2 != 5'b0) ? (ReadAddr2 == WriteAddr ? WriteData : regs[ReadAddr2]) : `ZERO_64);
    
    
endmodule


// 带使能端、复位后输出为0的触发器
module ysyx_210407_gen_en_dff #(parameter DW = 32)
                  (input wire[DW-1:0] din,
                    output wire[DW-1:0] qout,
                    input wire en,
                    input wire clk,
                    input wire rst);
    
    reg[DW-1:0] qout_r;
    
    always @ (posedge clk) begin
        if (rst == 1'b1) begin
            qout_r <= {DW{1'b0}};
        end
        else if (en == 1'b1) begin
            qout_r <= din;
        end
        else
            qout_r <= qout_r;
    end
    
    assign qout = qout_r;
    
endmodule
`timescale 1ns / 1ps
/* verilator lint_off UNDRIVEN */
/* verilator lint_off UNUSED */
`include "defines.v"

// Burst types
`define AXI_BURST_TYPE_FIXED                                2'b00
`define AXI_BURST_TYPE_INCR                                 2'b01
`define AXI_BURST_TYPE_WRAP                                 2'b10
// Access permissions
`define AXI_PROT_UNPRIVILEGED_ACCESS                        3'b000
`define AXI_PROT_PRIVILEGED_ACCESS                          3'b001
`define AXI_PROT_SECURE_ACCESS                              3'b000
`define AXI_PROT_NON_SECURE_ACCESS                          3'b010
`define AXI_PROT_DATA_ACCESS                                3'b000
`define AXI_PROT_INSTRUCTION_ACCESS                         3'b100
// Memory types (AR)
`define AXI_ARCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_ARCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b1110
`define AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1010
`define AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE                  4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE                4'b1111
`define AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1011
`define AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111
// Memory types (AW)
`define AXI_AWCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define AXI_AWCACHE_DEVICE_BUFFERABLE                       4'b0001
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b0110
`define AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1110
`define AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE                  4'b0111
`define AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE                4'b0111
`define AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1111
`define AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111

`define AXI_SIZE_BYTES_1                                    3'b000
`define AXI_SIZE_BYTES_2                                    3'b001
`define AXI_SIZE_BYTES_4                                    3'b010
`define AXI_SIZE_BYTES_8                                    3'b011
`define AXI_SIZE_BYTES_16                                   3'b100
`define AXI_SIZE_BYTES_32                                   3'b101
`define AXI_SIZE_BYTES_64                                   3'b110
`define AXI_SIZE_BYTES_128                                  3'b111


module ysyx_210407_axi # (
    parameter RW_DATA_WIDTH     = 64,
    parameter RW_ADDR_WIDTH     = 64,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 64,
    parameter AXI_ID_WIDTH      = 4,
    parameter AXI_USER_WIDTH    = 1
)(
    input                               clock,
    input                               reset,

	input                               rw_valid_i,
	output                              rw_ready_o,
    input                               rw_req_i,
    output reg [RW_DATA_WIDTH-1:0]      data_read_o,
    input  [RW_DATA_WIDTH-1:0]          data_write_i,
    input  [RW_DATA_WIDTH/8-1:0]        data_write_mask_i,
    input  [AXI_DATA_WIDTH-1:0]         rw_addr_i,
    input  [1:0]                        rw_size_i,
    output [1:0]                        rw_resp_o,

    // Advanced eXtensible Interface
    input                               axi_aw_ready_i,
    output                              axi_aw_valid_o,
    output [AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o,
    output [2:0]                        axi_aw_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_aw_id_o,
    output [AXI_USER_WIDTH-1:0]         axi_aw_user_o,
    output [7:0]                        axi_aw_len_o,
    output [2:0]                        axi_aw_size_o,
    output [1:0]                        axi_aw_burst_o,
    output                              axi_aw_lock_o,
    output [3:0]                        axi_aw_cache_o,
    output [3:0]                        axi_aw_qos_o,
    output [3:0]                        axi_aw_region_o,

    input                               axi_w_ready_i,
    output                              axi_w_valid_o,
    output [AXI_DATA_WIDTH-1:0]         axi_w_data_o,
    output [AXI_DATA_WIDTH/8-1:0]       axi_w_strb_o,
    output                              axi_w_last_o,
    output [AXI_USER_WIDTH-1:0]         axi_w_user_o,
    
    output                              axi_b_ready_o,
    input                               axi_b_valid_i,
    input  [1:0]                        axi_b_resp_i,
    input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_b_user_i,

    input                               axi_ar_ready_i,
    output                              axi_ar_valid_o,
    output [AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o,
    output [2:0]                        axi_ar_prot_o,
    output [AXI_ID_WIDTH-1:0]           axi_ar_id_o,
    output [AXI_USER_WIDTH-1:0]         axi_ar_user_o,
    output [7:0]                        axi_ar_len_o,
    output [2:0]                        axi_ar_size_o,
    output [1:0]                        axi_ar_burst_o,
    output                              axi_ar_lock_o,
    output [3:0]                        axi_ar_cache_o,
    output [3:0]                        axi_ar_qos_o,
    output [3:0]                        axi_ar_region_o,
    
    output                              axi_r_ready_o,
    input                               axi_r_valid_i,
    input  [1:0]                        axi_r_resp_i,
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i,
    input                               axi_r_last_i,
    input  [AXI_ID_WIDTH-1:0]           axi_r_id_i,
    input  [AXI_USER_WIDTH-1:0]         axi_r_user_i
);
    wire w_trans    = rw_req_i == `REQ_WRITE;
    wire r_trans    = rw_req_i == `REQ_READ;
    wire w_valid    = rw_valid_i & w_trans;
    wire r_valid    = rw_valid_i & r_trans;

    // handshake
    wire aw_hs      = axi_aw_ready_i & axi_aw_valid_o;
    wire w_hs       = axi_w_ready_i  & axi_w_valid_o;
    wire b_hs       = axi_b_ready_o  & axi_b_valid_i;
    wire ar_hs      = axi_ar_ready_i & axi_ar_valid_o;
    wire r_hs       = axi_r_ready_o  & axi_r_valid_i;

    wire w_done     = w_hs & axi_w_last_o;
    wire r_done     = r_hs & axi_r_last_i;
    wire trans_done = w_trans ? b_hs : r_done;

    
    // ------------------State Machine------------------
    parameter [1:0] W_STATE_IDLE = 2'b00, W_STATE_ADDR = 2'b01, W_STATE_WRITE = 2'b10, W_STATE_RESP = 2'b11;
    parameter [1:0] R_STATE_IDLE = 2'b00, R_STATE_ADDR = 2'b01, R_STATE_READ  = 2'b10;

    reg [1:0] w_state, r_state;
    wire w_state_idle = w_state == W_STATE_IDLE, w_state_addr = w_state == W_STATE_ADDR, w_state_write = w_state == W_STATE_WRITE, w_state_resp = w_state == W_STATE_RESP;
    wire r_state_idle = r_state == R_STATE_IDLE, r_state_addr = r_state == R_STATE_ADDR, r_state_read  = r_state == R_STATE_READ;

    // Wirte State Machine
    always @(posedge clock) begin
        if (reset == 1'b1) begin
            w_state <= W_STATE_IDLE;
        end
        else begin
            if (w_valid) begin
                case (w_state)
                    W_STATE_IDLE:               w_state <= W_STATE_ADDR;
                    W_STATE_ADDR:  if (aw_hs)   w_state <= W_STATE_WRITE;
                    W_STATE_WRITE: if (w_done)  w_state <= W_STATE_RESP;
                    W_STATE_RESP:  if (b_hs)    w_state <= W_STATE_IDLE;
                endcase
            end
        end
    end

    // Read State Machine
    always @(posedge clock) begin
        if (reset == 1'b1) begin
            r_state <= R_STATE_IDLE;
        end
        else begin
            if (r_valid) begin
                case (r_state)
                    R_STATE_IDLE:               r_state <= R_STATE_ADDR;
                    R_STATE_ADDR: if (ar_hs)    r_state <= R_STATE_READ;
                    R_STATE_READ: if (r_done)   r_state <= R_STATE_IDLE;
                    default:;
                endcase
            end
        end
    end


    // ------------------Number of transmission------------------
    reg [7:0] len;
    wire len_reset      = (w_trans & w_state_idle) | (r_trans & r_state_idle);
    wire len_incr_en    = (len != axi_len) & (w_hs | r_hs);
    always @(posedge clock) begin
        if (reset == 1'b1) begin
            len <= 0;
        end
        else if (len_reset == 1'b1) begin
            len <= 0;
        end
        else if (len_incr_en) begin
            len <= len + 1;
        end
    end


    // ------------------Process Data------------------
    parameter ALIGNED_WIDTH = $clog2(AXI_DATA_WIDTH / 8);
    parameter OFFSET_WIDTH  = $clog2(AXI_DATA_WIDTH);
    parameter AXI_SIZE      = $clog2(AXI_DATA_WIDTH / 8);
    parameter MASK_WIDTH    = AXI_DATA_WIDTH * 2;
    parameter TRANS_LEN     = RW_DATA_WIDTH / AXI_DATA_WIDTH;
    parameter BLOCK_TRANS   = TRANS_LEN > 1 ? 1'b1 : 0'b0;

    wire aligned            = BLOCK_TRANS | rw_addr_i[ALIGNED_WIDTH-1:0] == 0;
    wire size_b             = rw_size_i == `SIZE_B;
    wire size_h             = rw_size_i == `SIZE_H;
    wire size_w             = rw_size_i == `SIZE_W;
    wire size_d             = rw_size_i == `SIZE_D;
    wire [3:0] addr_op1     = {{4-ALIGNED_WIDTH{1'b0}}, rw_addr_i[ALIGNED_WIDTH-1:0]};
    wire [3:0] addr_op2     = ({4{size_b}} & {4'b0})
                                | ({4{size_h}} & {4'b1})
                                | ({4{size_w}} & {4'b11})
                                | ({4{size_d}} & {4'b111})
                                ;
    wire [3:0] addr_end     = addr_op1 + addr_op2;
    wire overstep           = addr_end[3:ALIGNED_WIDTH] != 0;

    wire [7:0] axi_len      = aligned ? TRANS_LEN - 1 : {{7{1'b0}}, overstep};
    wire [2:0] axi_size     = AXI_SIZE[2:0];
    
    wire [AXI_ADDR_WIDTH-1:0] axi_addr          = {rw_addr_i[AXI_ADDR_WIDTH-1:ALIGNED_WIDTH], {ALIGNED_WIDTH{1'b0}}};
    wire [OFFSET_WIDTH-1:0] aligned_offset_l    = {{OFFSET_WIDTH-ALIGNED_WIDTH{1'b0}}, {rw_addr_i[ALIGNED_WIDTH-1:0]}} << 3;
    wire [OFFSET_WIDTH-1:0] aligned_offset_h    = AXI_DATA_WIDTH - aligned_offset_l;
    wire [MASK_WIDTH-1:0] mask                  = (({MASK_WIDTH{size_b}} & {{MASK_WIDTH-8{1'b0}}, 8'hff})
                                                    | ({MASK_WIDTH{size_h}} & {{MASK_WIDTH-16{1'b0}}, 16'hffff})
                                                    | ({MASK_WIDTH{size_w}} & {{MASK_WIDTH-32{1'b0}}, 32'hffffffff})
                                                    | ({MASK_WIDTH{size_d}} & {{MASK_WIDTH-64{1'b0}}, 64'hffffffff_ffffffff})
                                                    ) << aligned_offset_l;
    wire [AXI_DATA_WIDTH-1:0] mask_l            = mask[AXI_DATA_WIDTH-1:0];
    wire [AXI_DATA_WIDTH-1:0] mask_h            = mask[MASK_WIDTH-1:AXI_DATA_WIDTH];

    wire [AXI_ID_WIDTH-1:0] axi_id              = {AXI_ID_WIDTH{1'b0}};
    wire [AXI_USER_WIDTH-1:0] axi_user          = {AXI_USER_WIDTH{1'b0}};

    reg rw_ready;
    wire rw_ready_nxt = trans_done;
    wire rw_ready_en      = trans_done | rw_ready;
    always @(posedge clock) begin
        if (reset == 1'b1) begin
            rw_ready <= 0;
        end
        else if (rw_ready_en) begin
            rw_ready <= rw_ready_nxt;
        end
    end
    assign rw_ready_o     = rw_ready;

    reg [1:0] rw_resp;
    wire[1:0] rw_resp_nxt = w_trans ? axi_b_resp_i : axi_r_resp_i;
    wire resp_en = trans_done;
    always @(posedge clock) begin
        if (reset == 1'b1) begin
            rw_resp <= 0;
        end
        else if (resp_en) begin
            rw_resp <= rw_resp_nxt;
        end
    end
    assign rw_resp_o      = rw_resp;


    // ------------------Write Transaction------------------

    // Write Address channel signals    
    assign axi_aw_valid_o   = w_state_addr;
    assign axi_aw_addr_o    = axi_addr;
    assign axi_aw_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;
    assign axi_aw_id_o      = axi_id;
    assign axi_aw_user_o    = axi_user;
    assign axi_aw_len_o     = axi_len;
    assign axi_aw_size_o    = axi_size;
    assign axi_aw_burst_o   = `AXI_BURST_TYPE_INCR;
    assign axi_aw_lock_o    = 1'b0;
    assign axi_aw_cache_o   = `AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
    assign axi_aw_qos_o     = 4'b0;
    assign axi_aw_region_o  = 4'b0;
    
    // Write Data channel signals 
    assign axi_w_valid_o    = w_state_write;
    //assign axi_w_data_o     = 
    assign axi_w_strb_o     = data_write_mask_i; 
    //assign axi_w_last_o     = 
    assign axi_w_user_o     = axi_user;
    
    generate
        for (genvar i = 0; i < TRANS_LEN; i += 1) begin
            always @(posedge clock) begin
                if (reset == 1'b1) begin
                    axi_w_last_o <= 1'b0;
                    axi_w_data_o[i*AXI_DATA_WIDTH+:AXI_DATA_WIDTH] <= 0;
                end
                else if (axi_aw_ready_i) begin
                    if (~aligned & overstep) begin
                        if (len[0]) begin
                            axi_w_last_o <= 1'b0;
                            axi_w_data_o[AXI_DATA_WIDTH-1:0] <= data_write_i;
                        end
                        else begin
                            axi_w_last_o <= 1'b0;
                            axi_w_data_o[AXI_DATA_WIDTH-1:0] <= data_write_i;
                        end
                    end
                    else if (len == i) begin
                        axi_w_last_o <= 1'b1;
                        axi_w_data_o[i*AXI_DATA_WIDTH+:AXI_DATA_WIDTH] <= data_write_i;
                    end
                end
            end
        end
    endgenerate

    // Write Response channel signals 
    assign axi_b_ready_o    = w_state_resp;

    // ------------------Read Transaction------------------

    // Read address channel signals
    assign axi_ar_valid_o   = r_state_addr;
    assign axi_ar_addr_o    = axi_addr;
    assign axi_ar_prot_o    = `AXI_PROT_UNPRIVILEGED_ACCESS | `AXI_PROT_SECURE_ACCESS | `AXI_PROT_DATA_ACCESS;
    assign axi_ar_id_o      = axi_id;
    assign axi_ar_user_o    = axi_user;
    assign axi_ar_len_o     = axi_len;
    assign axi_ar_size_o    = axi_size;
    assign axi_ar_burst_o   = `AXI_BURST_TYPE_INCR;
    assign axi_ar_lock_o    = 1'b0;
    assign axi_ar_cache_o   = `AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE;
    assign axi_ar_qos_o     = 4'h0;

    // Read data channel signals
    assign axi_r_ready_o    = axi_r_valid_i;

    wire [AXI_DATA_WIDTH-1:0] axi_r_data_l  = (axi_r_data_i & mask_l) >> aligned_offset_l;
    wire [AXI_DATA_WIDTH-1:0] axi_r_data_h  = (axi_r_data_i & mask_h) << aligned_offset_h;

    generate
        for (genvar i = 0; i < TRANS_LEN; i += 1) begin
            always @(posedge clock) begin
                if (reset == 1'b1) begin
                    data_read_o[i*AXI_DATA_WIDTH+:AXI_DATA_WIDTH] <= 0;
                end
                else if (axi_r_ready_o & axi_r_valid_i) begin
                    if (~aligned & overstep) begin
                        if (len[0]) begin
                            data_read_o[AXI_DATA_WIDTH-1:0] <= data_read_o[AXI_DATA_WIDTH-1:0] | axi_r_data_h;
                        end
                        else begin
                            data_read_o[AXI_DATA_WIDTH-1:0] <= axi_r_data_l;
                        end
                    end
                    else if (len == i) begin
                        data_read_o[i*AXI_DATA_WIDTH+:AXI_DATA_WIDTH] <= axi_r_data_l;
                    end
                end
            end
        end
    endgenerate

endmodule