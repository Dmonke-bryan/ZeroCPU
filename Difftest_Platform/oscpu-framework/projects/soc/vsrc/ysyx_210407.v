`timescale 1ns / 1ns


`define YSYX210407_START_ADDR 64'h30000000

`define YSYX210407_INST_BUS   31 : 0
`define YSYX210407_DATA_BUS   63 : 0
`define YSYX210407_ADDR_BUS   63 : 0

`define YSYX210407_SIZE_B              2'b00
`define YSYX210407_SIZE_H              2'b01
`define YSYX210407_SIZE_W              2'b10
`define YSYX210407_SIZE_D              2'b11

`define YSYX210407_ZERO_8     8'b0000000
`define YSYX210407_ZERO_16    16'h0000
`define YSYX210407_ZERO_32    32'h00000000
`define YSYX210407_ZERO_64    64'h00000000_00000000
`define YSYX210407_REG_BUS    63 : 0

`define YSYX210407_AXI_ADDR_WIDTH      32
`define YSYX210407_AXI_DATA_WIDTH      64
`define YSYX210407_AXI_ID_WIDTH        4

`define YSYX210407_REQ_READ            1'b0
`define YSYX210407_REQ_WRITE           1'b1

// b10000000000000 加法      b01000000000000 减法
// b00100000000000 左移      b00010000000000 小于
// b00001000000000 无符号小于 b00000100000000 逻辑右移
// b00000010000000 算术右移   b00000001000000 异或
// b00000000100000 或        b00000000010000 与
// b00000000001000 大于      b00000000000100 无符号大于
// b00000000000010 等于      b00000000000001 不等于
`define YSYX210407_ADD  14'b10000000000000
`define YSYX210407_SUB  14'b01000000000000
`define YSYX210407_SLL  14'b00100000000000
`define YSYX210407_LES  14'b00010000000000
`define YSYX210407_LESU 14'b00001000000000
`define YSYX210407_SRL  14'b00000100000000
`define YSYX210407_SRA  14'b00000010000000
`define YSYX210407_XOR  14'b00000001000000
`define YSYX210407_OR   14'b00000000100000
`define YSYX210407_AND  14'b00000000010000
`define YSYX210407_BIG  14'b00000000001000
`define YSYX210407_BIGU 14'b00000000000100
`define YSYX210407_EQ   14'b00000000000010
`define YSYX210407_NEQ  14'b00000000000001

// {LB,LBU,LH,LHU,LW,LWU,LD,SB,SH,SW,SD}
`define YSYX210407_LB   11'b10000000000
`define YSYX210407_LBU  11'b01000000000
`define YSYX210407_LH   11'b00100000000
`define YSYX210407_LHU  11'b00010000000
`define YSYX210407_LW   11'b00001000000
`define YSYX210407_LWU  11'b00000100000
`define YSYX210407_LD   11'b00000010000
`define YSYX210407_SB   11'b00000001000
`define YSYX210407_SH   11'b00000000100
`define YSYX210407_SW   11'b00000000010
`define YSYX210407_SD   11'b00000000001

// CSR ID
`define YSYX210407_sstatus      12'h100
`define YSYX210407_mstatus      12'h300
`define YSYX210407_misa         12'h301
`define YSYX210407_medeleg      12'h302
`define YSYX210407_mideleg      12'h303
`define YSYX210407_mie          12'h304
`define YSYX210407_mtvec        12'h305
`define YSYX210407_mvendorid    12'hf11
`define YSYX210407_marchid      12'hf12
`define YSYX210407_mimpid       12'hf13
`define YSYX210407_mhartid      12'hf14
`define YSYX210407_mscratch     12'h340
`define YSYX210407_mepc         12'h341
`define YSYX210407_mcause       12'h342
`define YSYX210407_mtval        12'h343
`define YSYX210407_mip          12'h344
`define YSYX210407_mcycle       12'hb00
`define YSYX210407_minstret     12'hb02
`define YSYX210407_dcsr         12'h7b0
`define YSYX210407_dpc          12'h7b1
`define YSYX210407_dscratch     12'h7b2


   
module ysyx_210407(
    input         clock,
    input         reset,
     
    input         io_interrupt,
    
    //axi master
    input                               io_master_awready,
    output                              io_master_awvalid,
    output [31:0]                       io_master_awaddr,
    output [3:0]                        io_master_awid,
    output [7:0]                        io_master_awlen,
    output [2:0]                        io_master_awsize,
    output [1:0]                        io_master_awburst,
    
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
    output [3:0]                        io_master_arid,
    output [7:0]                        io_master_arlen,
    output [2:0]                        io_master_arsize,
    output [1:0]                        io_master_arburst,
    
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
    wire [`YSYX210407_AXI_ADDR_WIDTH-1:0] aw_addr;
    wire [`YSYX210407_AXI_ID_WIDTH-1:0] aw_id;
    wire [7:0] aw_len;
    wire [2:0] aw_size;
    wire [1:0] aw_burst;


    wire w_ready;
    wire w_valid;
    wire [`YSYX210407_AXI_DATA_WIDTH-1:0] w_data;
    wire [`YSYX210407_AXI_DATA_WIDTH/8-1:0] w_strb;
    wire w_last;
    
    wire b_ready;
    wire b_valid;
    wire [1:0] b_resp;
    wire [`YSYX210407_AXI_ID_WIDTH-1:0] b_id;

    wire ar_ready;
    wire ar_valid;
    wire [`YSYX210407_AXI_ADDR_WIDTH-1:0] ar_addr;
    wire [`YSYX210407_AXI_ID_WIDTH-1:0] ar_id;
    wire [7:0] ar_len;
    wire [2:0] ar_size;
    wire [1:0] ar_burst;

    
    wire r_ready;
    wire r_valid;
    wire [1:0] r_resp;
    wire [`YSYX210407_AXI_DATA_WIDTH-1:0] r_data;
    wire r_last;
    wire [`YSYX210407_AXI_ID_WIDTH-1:0] r_id;

    assign ar_ready                 = io_master_arready;
    assign io_master_arvalid        = ar_valid;
    assign io_master_araddr         = ar_addr[31 :0];
    assign io_master_arid           = ar_id;
    assign io_master_arlen          = ar_len;
    assign io_master_arsize         = ar_size;
    assign io_master_arburst        = ar_burst;

    
    assign aw_ready                 = io_master_awready;
    assign io_master_awvalid        = aw_valid;
    assign io_master_awaddr         = aw_addr[31 : 0];     
    assign io_master_awid           = aw_id;     
    assign io_master_awlen          = aw_len;   
    assign io_master_awsize         = aw_size;    
    assign io_master_awburst        = aw_burst;    


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
    assign r_valid                       = io_master_rvalid;
    assign r_resp                        = io_master_rresp;
    assign r_data                        = io_master_rdata;
    assign r_last                        = io_master_rlast;
    assign r_id                          = io_master_rid;

    wire if_valid;
    wire if_ready;
    wire if_read_enable;
    wire if_write_enable;
    wire req = reset ? 1'b0 : if_read_enable ? `YSYX210407_REQ_READ : if_write_enable ? `YSYX210407_REQ_WRITE : 1'b0;
    wire [63:0] if_data_read;
    wire [63:0] if_data_write;
    wire [7 :0] if_data_write_mask;
    wire [63:0] if_addr;
    wire [2:0] if_size;
    wire [1:0] if_resp;

    ysyx_210407_axi u_ysyx_210407_axi (
        .clock                          (clock),
        .reset                          (reset),

        .rw_valid_i                     (if_valid),
        .rw_ready_o                     (if_ready),
        .rw_req_i                       (req),
        .data_read_o                    (if_data_read),
        .data_write_i                   (if_data_write),
        .data_write_mask_i              (if_data_write_mask),
        .rw_addr_i                      (if_addr[31 : 0]),
        .rw_size_i                      (if_size),
        .rw_resp_o                      (if_resp),

        .axi_aw_ready_i                 (aw_ready),
        .axi_aw_valid_o                 (aw_valid),
        .axi_aw_addr_o                  (aw_addr),
        .axi_aw_id_o                    (aw_id),
        .axi_aw_len_o                   (aw_len),
        .axi_aw_size_o                  (aw_size),
        .axi_aw_burst_o                 (aw_burst),

        .axi_w_ready_i                  (w_ready),
        .axi_w_valid_o                  (w_valid),
        .axi_w_data_o                   (w_data),
        .axi_w_strb_o                   (w_strb),
        .axi_w_last_o                   (w_last),
        
        .axi_b_ready_o                  (b_ready),
        .axi_b_valid_i                  (b_valid),
        .axi_b_resp_i                   (b_resp),
        .axi_b_id_i                     (b_id),

        .axi_ar_ready_i                 (ar_ready),
        .axi_ar_valid_o                 (ar_valid),
        .axi_ar_addr_o                  (ar_addr),
        .axi_ar_id_o                    (ar_id),
        .axi_ar_len_o                   (ar_len),
        .axi_ar_size_o                  (ar_size),
        .axi_ar_burst_o                 (ar_burst),
        
        .axi_r_ready_o                  (r_ready),
        .axi_r_valid_i                  (r_valid),
        .axi_r_resp_i                   (r_resp),
        .axi_r_data_i                   (r_data),
        .axi_r_last_i                   (r_last),
        .axi_r_id_i                     (r_id)
    );


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


module ysyx_210407_rvcpu(
            input wire clk,
             input wire rst,
            output                              if_valid,
            input                               if_ready,
            output                              if_read_enable,
            output                              if_write_enable,
            input  [63:0]                       if_data_read,
            output  [63:0]                      if_data_write,
            output  [7 :0]                      if_data_write_mask,
            output [63:0]                       if_addr,
            output [2:0]                        if_size,
            input  [1:0]                        if_resp);
    
    
    wire CoreLock;
    // if_stage -> id_stage
    wire jump;
    wire [`YSYX210407_ADDR_BUS] jumpAddr;
    wire [`YSYX210407_INST_BUS]instD;
    wire [`YSYX210407_ADDR_BUS]pcD;
    wire flushD;
    wire [10 : 0] memFuncE;
    wire [`YSYX210407_ADDR_BUS]pcE;
    wire [11 : 0] instTypeE;
    wire [13 : 0] instFuncE;
    wire [5 : 0] csrFuncE;
    wire [`YSYX210407_REG_BUS]csrReadDataE;
    wire [11 : 0] csrWriteAddrE;
    wire [`YSYX210407_REG_BUS]rs1DataE;
    wire [`YSYX210407_REG_BUS]rs2DataE;
    wire [`YSYX210407_REG_BUS] imm;
    
    
    // regfile -> id_stage
    wire [`YSYX210407_REG_BUS] rs1DataD;
    wire [`YSYX210407_REG_BUS] rs2DataD;
    
    
    // id_stage -> exe_stage
    wire  rs1ReadEnable;
    wire  rs2ReadEnable;
    wire  rdWriteEnableE;
    wire  [4 : 0] rs1ReadAddr;
    wire  [4 : 0] rs2ReadAddr;
    wire  [4 : 0] rdWriteAddrE;
    
    wire BusReadEnableE;
    wire BusWriteEnableE;
    
    // exe_stage -> mem_stage
    wire  rdWriteEnableM;
    wire [4 : 0] rdWriteAddrM;
    wire [`YSYX210407_DATA_BUS] rdWriteDataM;
    wire flushE;
    wire [10 : 0] memFuncM;
    wire [`YSYX210407_ADDR_BUS] BusWriteAddrM;
    wire  [`YSYX210407_DATA_BUS] BusWriteDataM;
    wire [`YSYX210407_ADDR_BUS] BusReadAddrM;
    wire         BusWriteEnableM;
    wire         BusReadEnableM;
    
    wire [`YSYX210407_ADDR_BUS]pcM;

    wire [11 : 0] csrWriteAddrM;
    wire         csrWriteEnableM;
    wire  [`YSYX210407_REG_BUS]csrWriteDataM;
    
    // mem_stage -> wb_stage
    wire rdWriteEnableW;
    wire [4 : 0]rdWriteAddrW;
    wire  [`YSYX210407_REG_BUS]rdWriteDataW;
    
    // exe_stage -> other stage
       
    wire [`YSYX210407_ADDR_BUS]pcW;
    wire flushM;

    wire [11 : 0] csrWriteAddrW;
    wire         csrWriteEnableW;
    wire  [`YSYX210407_REG_BUS]csrWriteDataW;

    wire [`YSYX210407_ADDR_BUS] BusReadAddr;
    wire [`YSYX210407_ADDR_BUS] BusWriteAddr;
    wire [`YSYX210407_DATA_BUS] BusReadData; 
    wire [`YSYX210407_DATA_BUS] BusWriteData;
    wire [7 : 0] BusWriteMask;
    wire BusReadEnable;
    wire BusWriteEnable;

    wire [`YSYX210407_ADDR_BUS] ClintReadAddr;
    wire [`YSYX210407_ADDR_BUS] ClintWriteAddr;
    wire [`YSYX210407_DATA_BUS] ClintReadData; 
    wire [`YSYX210407_DATA_BUS] ClintWriteData;
    wire ClintReadEnable;
    wire ClintWriteEnable;  

   


    wire LoadStoreE;
    wire LoadStoreM;
    
    // exe_stage -> regfile
    
    wire [`YSYX210407_ADDR_BUS]pcF;
    wire pcEnable;

    // ctrl -> other
    wire [1 : 0] Redirect1;
    wire [1 : 0] Redirect2;

    wire csrReadEnable;
    wire [11 : 0] csrReadAddr;
    wire [`YSYX210407_REG_BUS] csrReadData; 

    wire [1 : 0]IRQtype;
    wire IRQret;

    wire [`YSYX210407_ADDR_BUS] mepcWriteData;
    wire [`YSYX210407_ADDR_BUS]irqAddr;


    wire ITtime;
    wire [`YSYX210407_REG_BUS]mepc_o;

    wire stallF;
    wire stallD;
    wire stallE;
    wire stallM;
    
    wire mret;
    wire [`YSYX210407_ADDR_BUS] jAddr;

    wire mecall;
    wire jalbranch;
    


    wire RamReadEnable;
    wire RamWriteEnable;
    wire [2 : 0]BusSize;
    wire [`YSYX210407_ADDR_BUS] RamReadData;
    wire [`YSYX210407_ADDR_BUS] RamReadAddr;
    wire [`YSYX210407_ADDR_BUS] RamWriteAddr;
    wire [`YSYX210407_DATA_BUS] RamWriteData;
    wire [7 : 0] RamWriteMask;

    assign if_valid = (~if_ready) & (pcEnable | RamReadEnable | RamWriteEnable);
    assign if_size = (RamReadEnable | RamWriteEnable) ? BusSize : 3'b010;
    assign CoreLock = ~(if_ready & (if_resp == 2'b0));
    assign if_read_enable = (~RamWriteEnable) & (RamReadEnable | pcEnable);
    assign if_write_enable = RamWriteEnable;
    assign if_addr = RamReadEnable ? RamReadAddr : RamWriteEnable ? RamWriteAddr : pcF;
    wire [31 : 0] instF = (RamReadEnable | RamWriteEnable) ? 32'b0 : (pcF[2] ? if_data_read[63 : 32] : if_data_read[31 : 0]);
    assign RamReadData = RamReadEnable ? if_data_read : 64'b0;
    assign if_data_write = RamWriteEnable ? RamWriteData : 64'b0;
    assign if_data_write_mask = RamWriteMask;

    
    wire ClintBus  = BusReadEnable ? BusReadAddr[31 : 16] == 16'h0200  : 
                     BusWriteEnable ? BusWriteAddr[31 : 16] == 16'h0200  : 1'b0;


    assign RamReadAddr     = ClintBus ? `YSYX210407_ZERO_64      : BusReadAddr;
    assign RamReadEnable   = ClintBus ? 1'b0          : BusReadEnable;
    assign ClintReadAddr   = ClintBus ? BusReadAddr   : `YSYX210407_ZERO_64;
    assign ClintReadEnable = ClintBus ? BusReadEnable : 1'b0;
    assign BusReadData     = ClintBus ? ClintReadData : RamReadData;

    assign RamWriteAddr     = ClintBus ? `YSYX210407_ZERO_64       : BusWriteAddr;
    assign RamWriteData     = ClintBus ? `YSYX210407_ZERO_64       : BusWriteData;
    assign RamWriteEnable   = ClintBus ? 1'b0           : BusWriteEnable;
    assign RamWriteMask     = ClintBus ? `YSYX210407_ZERO_8       : BusWriteMask;
    assign ClintWriteAddr   = ClintBus ? BusWriteAddr   : `YSYX210407_ZERO_64;
    assign ClintWriteData   = ClintBus ? BusWriteData   : `YSYX210407_ZERO_64;
    assign ClintWriteEnable = ClintBus ? BusWriteEnable : 1'b0;


    ysyx_210407_if_stage u_ysyx_210407_if_stage(
    //input
    .clk(clk),
    .rst(rst),
    .jump(jump),
    .stallF(stallF),
    .jAddr(jAddr),
    .instF(instF),
    //output
    .pcF(pcF),
    .pcD(pcD),
    .pcEnable(pcEnable),
    .instD(instD)
    );


    

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
    

    
    ysyx_210407_ex_stage u_ysyx_210407_ex_stage(
    .clk(clk),
    .rst(rst),
    // input
    .pcE(pcE),
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
    
    // jump 信号 load 信号
    .mecall(mecall),
    .mret(mret),
    .jalbranch(jalbranch),
    .jumpAddr(jumpAddr),
    
    .pcM(pcM)
    
    );
    

    ysyx_210407_me_stage u_ysyx_210407_me_stage(
    // input
    .clk(clk),
    .rst(rst),
    .pcM(pcM),
    .stallM(stallM),
    .flushM(flushM),
    // Bus 部分
    .memFuncM(memFuncM),
    .BusWriteAddrM(BusWriteAddrM),
    .BusWriteDataM(BusWriteDataM),
    .BusReadAddrM(BusReadAddrM),
    .BusReadDataM(BusReadData),
    .BusReadEnableM(BusReadEnableM),
    .BusWriteEnableM(BusWriteEnableM),
    // -> Bus单元
    .BusSize(BusSize),
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
    
    .pcW(pcW)
   
    );


    ysyx_210407_regfile u_ysyx_210407_regfile(
    .clk(clk),
    .rst(rst),
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

    .rdWriteAddrE(rdWriteAddrE),
    .rdWriteAddrM(rdWriteAddrM),
    .rs1ReadEnable(rs1ReadEnable),
    .rs2ReadEnable(rs2ReadEnable),
    .rs1ReadAddr(rs1ReadAddr),
    .rs2ReadAddr(rs2ReadAddr),
    .Redirect1(Redirect1),
    .Redirect2(Redirect2),
    
    .flushD(flushD),
    .flushE(flushE),
    .flushM(flushM),
    .stallF(stallF),
    .stallD(stallD),
    .stallE(stallE),
    .stallM(stallM),
    .jump(jump),
    .jAddr(jAddr)
    
    );
    
    
endmodule


module ysyx_210407_if_stage(input wire clk,
                input wire rst,
                input wire jump,
                input wire stallF,
                input wire [`YSYX210407_ADDR_BUS] jAddr,
                input wire [`YSYX210407_INST_BUS]instF,
                output wire [`YSYX210407_ADDR_BUS] pcF,
                output wire [`YSYX210407_ADDR_BUS] pcD,
                output wire pcEnable,
                output wire [`YSYX210407_INST_BUS]instD);
    
    reg  [`YSYX210407_REG_BUS] pc;
    
    // fetch an instruction
    
    always @(posedge clk) begin
        if (rst == 1'b1) begin
            pc <= `YSYX210407_START_ADDR;
        end
        else if (jump == 1'b1)
            pc <= jAddr + 4;
        else if (stallF == 1'b1)
            pc <= pc;
        else begin
            pc <= pc + 4;
        end
    end
    
    assign pcF = rst ? `YSYX210407_START_ADDR : jump ? jAddr : pc;
    ysyx_210407_gen_en_dff #(64) pcD_dff(pcF,pcD,~stallF,clk,rst);
    assign pcEnable = (rst == 1'b1) ? 1'b0 : 1'b1;
    //ysyx_210407_gen_en_dff #(1) pcEnableF_dff(pcEnableF_r,pcEnableF,~stallF,clk,rst);
    ysyx_210407_gen_en_dff #(32) instD_dff(instF,instD,~stallF,clk,rst);

    
endmodule
    

module ysyx_210407_id_stage(input wire rst,
                input wire clk,
                input wire flushD,
                input wire stallD,
                input wire [`YSYX210407_ADDR_BUS] pcD,
                input wire [31 : 0]instD,
                input wire [`YSYX210407_REG_BUS]rs1DataD,
                input wire [`YSYX210407_REG_BUS]rs2DataD,
                input wire [`YSYX210407_REG_BUS]csrReadData,
                output wire rs1ReadEnable,
                output wire [4 : 0]rs1ReadAddr,
                output wire rs2ReadEnable,
                output wire [4 : 0]rs2ReadAddr,
                output wire rdWriteEnableE,
                output wire [4 : 0]rdWriteAddrE,
                output wire BusReadEnableE,
                output wire BusWriteEnableE,
                output wire [10 : 0] memFuncE,
                output wire [`YSYX210407_ADDR_BUS] pcE,
                output wire [11 : 0]instTypeE,
                output wire [13 : 0] instFuncE,
                output wire csrReadEnable,
                output wire [11 : 0]csrReadAddr,
                output wire [5 : 0] csrFuncE,
                output wire [11 : 0]csrWriteAddrE,
                output wire [`YSYX210407_REG_BUS]csrReadDataE,
                output wire [`YSYX210407_REG_BUS]rs1DataE,
                output wire [`YSYX210407_REG_BUS]rs2DataE,
                output wire [`YSYX210407_REG_BUS] imm);


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
    
    wire func6_0  = func6 == 6'b000000;
    wire func6_10 = func6 == 6'b010000;
    
    // opcode bit
    wire opcode_0000011 = opcode == 7'b0000011; // ld lb lh lw lbu lhu  (load)  I
    
    //wire opcode_0000111 = opcode == 7'b0000111;
    
    //wire opcode_0001011 = opcode == 7'b0001011; //
    
    wire opcode_0001111 = opcode == 7'b0001111; // fence fence.i             I
    
    wire opcode_0010011 = opcode == 7'b0010011; // addi slti sltiu xori      I
    // ori andi slli srli srai
    wire opcode_0010111 = opcode == 7'b0010111; // auipc                     U
    
    wire opcode_0011011 = opcode == 7'b0011011; //addiw
    
    //wire opcode_0011111 = opcode == 7'b0011111;
    
    wire opcode_0100011 = opcode == 7'b0100011; // sb sh sw sd         (store) S
    
    //wire opcode_0100111 = opcode == 7'b0100111;
    //wire opcode_0101011 = opcode == 7'b0101011;
    
    //wire opcode_0101111 = opcode == 7'b0101111;
    
    wire opcode_0110011 = opcode == 7'b0110011; //add sub sll slt sltu       R
    //xor srl sra or and
    wire opcode_0110111 = opcode == 7'b0110111; //lui                        U
    
    wire opcode_0111011 = opcode == 7'b0111011; // Rtype 32
    
    //wire opcode_0111111 = opcode == 7'b0111111;
    
    //wire opcode_1000011 = opcode == 7'b1000011;
    
    //wire opcode_1000111 = opcode == 7'b1000111;
    
    //wire opcode_1001011 = opcode == 7'b1001011;
    
    //wire opcode_1001111 = opcode == 7'b1001111;
    
    //wire opcode_1010011 = opcode == 7'b1010011;
    
    //wire opcode_1010111 = opcode == 7'b1010111;
    
    //wire opcode_1011011 = opcode == 7'b1011011;
    
    //wire opcode_1011111 = opcode == 7'b1011111;
    
    wire opcode_1100011 = opcode == 7'b1100011; //beq bne blt bge           B
    //bltu bgeu
    wire opcode_1100111 = opcode == 7'b1100111; //jalr                      I
    
    //wire opcode_1101011 = opcode == 7'b1101011;
    
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

    //wire jump    = opcode_1100111 | opcode_1101111;
    wire branch  = opcode_1100011;
    wire load    = opcode_0000011;
    wire store   = opcode_0100011;
    wire mathImm = opcode_0010011 | opcode_0011011;
    wire mathReg = opcode_0110011 | opcode_0111011;
    wire type32  = opcode_0011011 | opcode_0111011;
    

    
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
    
    /*
    // fence 指令
    wire FENCE  = func3_000 & opcode_0001111;
    wire FENCEI = func3_001 & opcode_0001111;
    
    wire [1 : 0]fenceFuncD = {FENCE,FENCEI};
    */
    // csr 指令
    wire CSRRW  = func3_001 & opcode_1110011;
    wire CSRRS  = func3_010 & opcode_1110011;
    wire CSRRC  = func3_011 & opcode_1110011;
    wire CSRRWI = func3_101 & opcode_1110011;
    wire CSRRSI = func3_110 & opcode_1110011;
    wire CSRRCI = func3_111 & opcode_1110011;

    wire csri    = CSRRWI | CSRRSI | CSRRCI;
    wire csr     = CSRRW | CSRRS | CSRRC;
    
    wire [5 : 0]csrFuncE_r = {CSRRW,CSRRS,CSRRC,CSRRWI,CSRRSI,CSRRCI};
    ysyx_210407_gen_en_dff #(6) csrFuncE_dff(csrFuncE_r, csrFuncE, ~stallD, clk, rst | flushD);
    ysyx_210407_gen_en_dff #(12) csrWriteAddrE_dff(csrReadAddr, csrWriteAddrE, ~stallD, clk, rst | flushD);

    // system 指令
    //wire EBREAK = (instD[31 : 20] == 12'b1) &func3_000 & opcode_1110011;
    wire ECALL  = (instD[31 : 20] == 12'b0) &func3_000 & opcode_1110011;
    wire MRET = (instD[31 : 20] == 12'h302) &func3_000 & opcode_1110011;

    wire [11 : 0]instTypeE_r = {MRET,ECALL,csri, csr, LUI, AUIPC, JAL , JALR , branch ,mathImm, mathReg, type32};
    ysyx_210407_gen_en_dff #(12) instTypeE_dff(instTypeE_r,instTypeE, ~stallD, clk, rst | flushD);
  
    //pc 传递
    ysyx_210407_gen_en_dff #(64) pcE_dff(pcD, pcE, ~stallD, clk, rst | flushD);
    
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
    CSRtype ? immCSR : `YSYX210407_ZERO_64;
    ysyx_210407_gen_en_dff #(64) imm_dff(imm_r, imm, ~stallD, clk, rst | flushD);
    
    ysyx_210407_gen_en_dff #(64) rs1DataE_dff(rs1DataD,rs1DataE, ~stallD, clk, rst | flushD);
    ysyx_210407_gen_en_dff #(64) rs2DataE_dff(rs2DataD,rs2DataE, ~stallD, clk, rst | flushD);
    
endmodule


module ysyx_210407_ex_stage(input wire clk,
                 input wire rst,
                 input wire [`YSYX210407_ADDR_BUS] pcE,
                 input wire flushE,
                 input wire stallE,
                 input wire [11 : 0]instTypeE,
                 input wire [13 : 0] instFuncE,
                 input wire [5 : 0] csrFuncE,
                 input wire [`YSYX210407_REG_BUS]csrReadDataE,
                 input wire [11 : 0]csrWriteAddrE,
                 input wire [`YSYX210407_REG_BUS]imm,
                 input wire [`YSYX210407_REG_BUS]rs1DataE,
                 input wire [`YSYX210407_REG_BUS]rs2DataE,
                 input wire rdWriteEnableE,
                 input wire [4 : 0]rdWriteAddrE,
                 input wire [`YSYX210407_REG_BUS]rdWriteDataPre1, //上一周期写回数据
                 input wire [`YSYX210407_REG_BUS]rdWriteDataPre2, //上上周期写回数据
                 input wire [1 : 0]Redirect1,          //差一周期重定向寄存器 2b‘10 rs2 2b’01 rs1
                 input wire [1 : 0]Redirect2,          //差二周期重定向寄存器 2b‘10 rs2 2b’01 rs1
                 input wire [10 : 0] memFuncE,
                 input wire BusReadEnableE,
                 input wire BusWriteEnableE,
                 output wire [10 : 0] memFuncM,
                 output wire [`YSYX210407_ADDR_BUS]BusWriteAddrM,
                 output wire [`YSYX210407_DATA_BUS]BusWriteDataM,
                 output wire [`YSYX210407_ADDR_BUS]BusReadAddrM,
                 output wire BusReadEnableM ,
                 output wire BusWriteEnableM,
                 output wire rdWriteEnableM,
                 output wire [4 : 0]rdWriteAddrM,
                 output wire [`YSYX210407_REG_BUS]rdWriteDataM,
                 output wire [11 : 0]csrWriteAddrM,
                 output wire [`YSYX210407_REG_BUS]csrWriteDataM,
                 output wire csrWriteEnableM,
                 output wire mecall,
                 output wire mret,
                 output wire LoadStoreE,
                 output wire jalbranch,
                 output wire [`YSYX210407_ADDR_BUS] jumpAddr,
                 output wire [`YSYX210407_ADDR_BUS] pcM);
    
    
    wire [`YSYX210407_REG_BUS] rs1Data = Redirect1[0] ? rdWriteDataPre1 :
    Redirect2[0] ? rdWriteDataPre2 : rs1DataE;
    wire [`YSYX210407_REG_BUS] rs2Data = Redirect1[1] ? rdWriteDataPre1 :
    Redirect2[1] ? rdWriteDataPre2 : rs2DataE;
    
    wire [`YSYX210407_REG_BUS] op1 = rst ? `YSYX210407_ZERO_64 : rs1Data;
    
    // mathimm 使用立即数计算
    wire [`YSYX210407_REG_BUS] op2 = rst ? `YSYX210407_ZERO_64 : instTypeE[2] ? imm : rs2Data;
    
    // 使用pc还是寄存器
    wire  [`YSYX210407_REG_BUS] adder1 = (instTypeE[6] | instTypeE[3] | instTypeE[5]) ? pcE : rs1Data;
    // 是否是Rtype
    wire  [`YSYX210407_REG_BUS] adder2 = instTypeE[1] ? rs2Data : imm;
    
    
    // csr 操作数
    wire [`YSYX210407_REG_BUS] csrop1 = csrReadDataE;
    wire [`YSYX210407_REG_BUS] csrop2 = instTypeE[9] ? imm :
    instTypeE[8] ? rs1Data : `YSYX210407_ZERO_64;
    
    // b100000000000000 加法      b010000000000000 减法
    // b001000000000000 左移      b000100000000000 小于
    // b000010000000000 无符号小于 b000001000000000 逻辑右移
    // b000000100000000 算术右移   b000000010000000 异或
    // b000000001000000 或        b000000000100000 与
    // b000000000010000 大于      b000000000001000 无符号大于
    // b000000000000010 等于      b000000000000001 不等于
    // 数学运算
    
    wire [`YSYX210407_REG_BUS] resADD  = adder1 + adder2;
    wire [`YSYX210407_REG_BUS] resSUB  = op1 - op2;
    wire [`YSYX210407_REG_BUS] resSLL  = op1 << (instTypeE[0] ? {1'b0,op2[4 : 0]} : op2[5 : 0]);
    wire [`YSYX210407_REG_BUS] resLESU = {{63{1'b0}},op1 < op2};
    wire [`YSYX210407_REG_BUS] resLES  = {{63{1'b0}},$signed(op1) < $signed(op2)};
    wire [`YSYX210407_REG_BUS] resSRL  = op1 >> op2[5 : 0];
    wire [`YSYX210407_REG_BUS] resSRA  = $signed(op1) >>> op2[5 : 0];
    wire [31 : 0] resSRLW   = op1[31 : 0] >> op2[4 : 0];
    wire [31 : 0] resSRAW   = $signed(op1[31 : 0]) >>> op2[4 : 0];
    wire [`YSYX210407_REG_BUS] resXOR  = op1 ^ op2;
    wire [`YSYX210407_REG_BUS] resOR   = op1 | op2;
    wire [`YSYX210407_REG_BUS] resAND  = op1 & op2;
    wire [`YSYX210407_REG_BUS] resBIGU = {{63{1'b0}},op1 >= op2};
    wire [`YSYX210407_REG_BUS] resBIG  = {{63{1'b0}},$signed(op1) >= $signed(op2)};
    wire [`YSYX210407_REG_BUS] resEQ   = {{63{1'b0}},op1 == op2};
    wire [`YSYX210407_REG_BUS] resNEQ  = {{63{1'b0}},op1 != op2};
    
    wire [`YSYX210407_REG_BUS] resCSRRW = csrop2;
    wire [`YSYX210407_REG_BUS] resCSRRS = csrop1 | csrop2;
    wire [`YSYX210407_REG_BUS] resCSRRC = csrop1 &~ csrop2;
    
    
    //csr 处理 写回
    wire [`YSYX210407_REG_BUS] csrWriteDataM_r = csrFuncE[5]|csrFuncE[2] ? resCSRRW :
    csrFuncE[4]|csrFuncE[1] ? resCSRRS :
    csrFuncE[3]|csrFuncE[0] ? resCSRRC : `YSYX210407_ZERO_64;

    wire csrWriteEnableM_r = instTypeE[8]|instTypeE[9];

    ysyx_210407_gen_en_dff #(12) csrWriteAddrM_clk_diff(csrWriteAddrE,csrWriteAddrM,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff #(64) csrWriteDataM_clk_diff(csrWriteDataM_r,csrWriteDataM,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff #(1) csrWriteEnableM_clk_diff(csrWriteEnableM_r,csrWriteEnableM,~stallE, clk,rst | flushE);
    
    
    wire [`YSYX210407_ADDR_BUS] result = instFuncE[0] ? resNEQ :
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
    instFuncE[13] ? resADD :`YSYX210407_ZERO_64;
    
    // load store 处理
    ysyx_210407_gen_en_dff #(11) memFuncM_clk_diff(memFuncE,memFuncM,~stallE, clk,rst | flushE);
    
    wire [`YSYX210407_ADDR_BUS]BusWriteAddrM_r = (rst == 1'b1) ? `YSYX210407_ZERO_64 : resADD;
    wire [`YSYX210407_DATA_BUS]BusWriteDataM_r = (rst == 1'b1) ? `YSYX210407_ZERO_64 : rs2Data;
    wire [`YSYX210407_ADDR_BUS] BusReadAddr_r  = (rst == 1'b1) ? `YSYX210407_ZERO_64 : resADD;
    wire BusReadEnable_r = (rst == 1'b1) ? 1'b0 : BusReadEnableE;
    
    ysyx_210407_gen_en_dff #(1)  BusReadEnableM_clk_diff(BusReadEnable_r,BusReadEnableM,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff #(64) BusReadAddrM_clk_diff(BusReadAddr_r,BusReadAddrM,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff #(64) BusWriteAddrM_clk_diff(BusWriteAddrM_r,BusWriteAddrM,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff #(64) BusWriteDataM_clk_diff(BusWriteDataM_r,BusWriteDataM,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff #(1) BusWriteEnableM_clk_diff(BusWriteEnableE,BusWriteEnableM,~stallE, clk,rst | flushE);
    
    
    
    // jump,brach 处理
    wire resBranch             = instTypeE[3] & result[0];
    wire jalbranch_r                = (rst == 1'b1) ? 1'b0 : (resBranch | instTypeE[4] | instTypeE[5]);
    wire [`YSYX210407_ADDR_BUS]jumpAddr_r = jalbranch_r ? resADD : `YSYX210407_ZERO_64;
    wire [`YSYX210407_ADDR_BUS] pcSave    = pcE + 64'h4;
    
    // 给ctrl单元
    assign LoadStoreE = BusReadEnableE | BusWriteEnableE;
    assign mecall = instTypeE[10];
    assign mret = instTypeE[11];

    ysyx_210407_gen_en_dff #(1) jalbranch_dff(jalbranch_r,jalbranch,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff  #(64) jumpAddr_dff(jumpAddr_r ,jumpAddr,~stallE, clk,rst | flushE);
    
    
    // 写寄存器处理
    wire rdWriteEnableE_r = rdWriteEnableE ;
    wire [`YSYX210407_REG_BUS] rdWriteDataM_r = (rst == 1'b1) ?`YSYX210407_ZERO_64 :
    (instTypeE[4] | instTypeE[5]) ? pcSave :    //jalr jal
    instTypeE[0] ? {{32{result[31]}},result[31:0]} :  //32位操作指令
    instTypeE[6] ? resADD :                     //auipc
    instTypeE[7] ? imm :                  //lui
    (instTypeE[8] | instTypeE[9]) ? csrReadDataE : result;  // csr数据
    ysyx_210407_gen_en_dff #(64) rdWriteDataE_clk_diff(rdWriteDataM_r,rdWriteDataM,~stallE, clk,rst | flushE);
    ysyx_210407_gen_en_dff #(6) rd_r_clk_diff({rdWriteEnableE_r,rdWriteAddrE},{rdWriteEnableM,rdWriteAddrM},~stallE, clk,rst | flushE);
    
    // 信号传递
    ysyx_210407_gen_en_dff  #(64) pcM_dff(pcE ,pcM,~stallE, clk,rst | flushE);
    
endmodule


module ysyx_210407_me_stage(input rst,
                 input clk,
                 input stallM,
                 input flushM,
                 input wire [`YSYX210407_ADDR_BUS] pcM,
                 input wire [10 : 0] memFuncM,
                 input wire [`YSYX210407_ADDR_BUS]BusWriteAddrM,
                 input wire [`YSYX210407_DATA_BUS]BusWriteDataM,
                 input wire BusWriteEnableM,
                 input wire [`YSYX210407_ADDR_BUS] BusReadAddrM,
                 input wire BusReadEnableM,
                 input wire [`YSYX210407_DATA_BUS] BusReadDataM,
                 input wire [11 : 0]csrWriteAddrM,
                 input wire [`YSYX210407_REG_BUS]csrWriteDataM,
                 input wire csrWriteEnableM,
                 output wire LoadStoreM,
                 output wire [2 : 0]BusSize,
                 output wire [`YSYX210407_ADDR_BUS]BusWriteAddr,
                 output wire [`YSYX210407_DATA_BUS]BusWriteData,
                 output wire BusWriteEnable,
                 output wire [7 : 0] BusWriteMask,
                 output wire [`YSYX210407_ADDR_BUS] BusReadAddr,
                 output wire BusReadEnable,
                 input wire rdWriteEnableM,
                 input wire [4 : 0]rdWriteAddrM,
                 input wire [`YSYX210407_REG_BUS]rdWriteDataM,
                 output wire rdWriteEnableW,
                 output wire [4 : 0]rdWriteAddrW,
                 output wire [`YSYX210407_REG_BUS]rdWriteDataW,
                 output wire [11 : 0]csrWriteAddrW,
                 output wire [`YSYX210407_REG_BUS]csrWriteDataW,
                 output wire csrWriteEnableW,
                 output wire [`YSYX210407_ADDR_BUS] pcW);
    
    // memFunc = {LB,LBU,LH,LHU,LW,LWU,LD,SB,SH,SW,SD}
    
    
    wire [5 : 0] ReadShamt = {3'b0,BusReadAddrM[2 : 0]} << 3;

    wire [`YSYX210407_DATA_BUS]loadRes = BusReadDataM>>ReadShamt;
    
    wire [ 7 : 0] loadRes8  = loadRes[7 :0];
    wire [15 : 0] loadRes16 = loadRes[15 :0];
    wire [31 : 0] loadRes32 = loadRes[31 :0];
    wire [63 : 0] loadRes64 = loadRes;
    /*
    wire [`YSYX210407_DATA_BUS] loadRes8  = {56'b0 ,BusReadDataM[7 : 0]};
    wire [`YSYX210407_DATA_BUS] loadRes16 = {48'b0 ,BusReadDataM[15 : 0]};
    wire [`YSYX210407_DATA_BUS] loadRes32 = {32'b0 ,BusReadDataM[31 : 0]};
    wire [`YSYX210407_DATA_BUS] loadRes64 = BusReadDataM[63 : 0];
    */
    
    wire [5 : 0] WriteShamt = {3'b0,BusWriteAddrM[2 : 0]} << 3;
    wire [2 : 0] WriteMaskShamt = BusWriteAddrM[2 : 0];
    
    wire [`YSYX210407_DATA_BUS] storeRes8     = BusWriteDataM<<WriteShamt;
    wire [7 : 0] BusWriteMask8 = 8'b1<<WriteMaskShamt;
    
    wire [`YSYX210407_DATA_BUS] storeRes16     = BusWriteDataM<<WriteShamt;
    wire [7 : 0] BusWriteMask16 = 8'b11<<WriteMaskShamt;
    
    wire [`YSYX210407_DATA_BUS] storeRes32     = BusWriteDataM<<WriteShamt;
    wire [7 : 0] BusWriteMask32 = 8'b1111<<WriteMaskShamt;
    
    wire [`YSYX210407_DATA_BUS] storeRes64     = BusWriteDataM;
    wire [7 : 0] BusWriteMask64 = 8'b1111_1111;
    /*
    wire [`YSYX210407_DATA_BUS] storeRes8     = BusWriteDataM;
    wire [`YSYX210407_DATA_BUS] storeRes16     = BusWriteDataM;
    wire [`YSYX210407_DATA_BUS] storeRes32     = BusWriteDataM;
    wire [`YSYX210407_DATA_BUS] storeRes64    = BusWriteDataM;
    wire [`YSYX210407_DATA_BUS] BusWriteMask8 = 64'hff;
    wire [`YSYX210407_DATA_BUS] BusWriteMask16 = 64'hffff;
    wire [`YSYX210407_DATA_BUS] BusWriteMask32 = 64'hffff_ffff;
    wire [`YSYX210407_DATA_BUS] BusWriteMask64 = 64'hffff_ffff_ffff_ffff;
    */
    
    wire [7 : 0] BusWriteMask_r = 
    memFuncM[0] ? BusWriteMask64 :
    memFuncM[1] ? BusWriteMask32 :
    memFuncM[2] ? BusWriteMask16 :
    memFuncM[3] ? BusWriteMask8  : `YSYX210407_ZERO_8;
    
    wire [`YSYX210407_DATA_BUS] storeRes = 
    memFuncM[0] ? storeRes64 :
    memFuncM[1] ? storeRes32 :
    memFuncM[2] ? storeRes16 :
    memFuncM[3] ? storeRes8  : `YSYX210407_ZERO_64;
    
    assign BusWriteData   = (rst == 1'b1) ? `YSYX210407_ZERO_64 : storeRes;
    assign BusWriteAddr   = (rst == 1'b1) ? `YSYX210407_ZERO_64 : BusWriteAddrM;
    assign BusWriteMask   = (rst == 1'b1) ? `YSYX210407_ZERO_8 : BusWriteMask_r;
    assign BusWriteEnable = (rst == 1'b1) ? 1'b0 : BusWriteEnableM;
    assign BusReadEnable = (rst == 1'b1) ? 1'b0 : BusReadEnableM;
    assign BusReadAddr = (rst == 1'b1) ? `YSYX210407_ZERO_64 : BusReadAddrM;

    wire [`YSYX210407_DATA_BUS] rd8   = (rst == 1'b1) ? `YSYX210407_ZERO_64 : {{56{loadRes8[7]}},loadRes8[7:0]};
    wire [`YSYX210407_DATA_BUS] rd8u  = (rst == 1'b1) ? `YSYX210407_ZERO_64 : {{56{1'b0}},loadRes8[7:0]};
    wire [`YSYX210407_DATA_BUS] rd16  = (rst == 1'b1) ? `YSYX210407_ZERO_64 : {{48{loadRes16[15]}},loadRes16[15:0]};
    wire [`YSYX210407_DATA_BUS] rd16u = (rst == 1'b1) ? `YSYX210407_ZERO_64 : {{48{1'b0}},loadRes16[15:0]};
    wire [`YSYX210407_DATA_BUS] rd32  = (rst == 1'b1) ? `YSYX210407_ZERO_64 : {{32{loadRes32[31]}},loadRes32[31:0]};
    wire [`YSYX210407_DATA_BUS] rd32u = (rst == 1'b1) ? `YSYX210407_ZERO_64 : {{32{1'b0}},loadRes32[31:0]};
    wire [`YSYX210407_DATA_BUS] rd64  = (rst == 1'b1) ? `YSYX210407_ZERO_64 : loadRes64;
    // {LB,LBU,LH,LHU,LW,LWU,LD,SB,SH,SW,SD}
    wire [`YSYX210407_DATA_BUS] rdWriteDataM_r = 
    memFuncM[10] ? rd8 : memFuncM[9] ? rd8u :
    memFuncM[8]  ? rd16: memFuncM[7] ? rd16u:
    memFuncM[6]  ? rd32: memFuncM[5] ? rd32u:
    memFuncM[4]  ? rd64: rdWriteDataM;

    assign BusSize = (memFuncM[10] | memFuncM[9] | memFuncM[3]) ? 3'b000 :
                   (memFuncM[8] | memFuncM[7] | memFuncM[2]) ? 3'b001 :
                   (memFuncM[6] | memFuncM[5] | memFuncM[1]) ? 3'b010 :
                   (memFuncM[4] | memFuncM[0]     ) ? 3'b011 : 3'b000;
    
    assign LoadStoreM = rst ? 1'b0 : BusWriteEnableM | BusReadEnable;

    
    ysyx_210407_gen_en_dff #(1) rdWriteEnableW_clk_diff(rdWriteEnableM,rdWriteEnableW,~stallM, clk,rst | flushM);
    ysyx_210407_gen_en_dff #(5) rdWriteAddrW_clk_diff(rdWriteAddrM,rdWriteAddrW,~stallM, clk,rst | flushM);
    ysyx_210407_gen_en_dff #(64)rdWriteDataW_clk_diff(rdWriteDataM_r,rdWriteDataW,~stallM, clk,rst | flushM);
    
    //信号传递
    ysyx_210407_gen_en_dff #(12) csrWriteAddrW_clk_diff(csrWriteAddrM,csrWriteAddrW,~stallM, clk,rst | flushM);
    ysyx_210407_gen_en_dff #(64) csrWriteDataW_clk_diff(csrWriteDataM,csrWriteDataW,~stallM, clk,rst | flushM);
    ysyx_210407_gen_en_dff #(1) csrWriteEnableW_clk_diff(csrWriteEnableM,csrWriteEnableW,~stallM, clk,rst | flushM);
    
    ysyx_210407_gen_en_dff  #(64) pcW_dff(pcM ,pcW,~stallM, clk,rst | flushM);
     
endmodule


module ysyx_210407_ctrl (input jalbranch,                     //跳转和分支指令
             input [`YSYX210407_ADDR_BUS]jumpAddr,
             input LoadStoreE,                     //ram读取指令
             input LoadStoreM,                       //ram读取指令
             input mecall,                     //陷阱信号
             input mret,
             input ITtime,                   //时钟中断信号
             input CoreLock,                 //整个内核暂停
             input wire [`YSYX210407_ADDR_BUS]irqAddr,  //中断基地址
             input wire [`YSYX210407_REG_BUS] mepc_o, 
             input wire clk,
             input wire rst,
             input wire [`YSYX210407_ADDR_BUS]pcF,
             input wire [`YSYX210407_ADDR_BUS]pcD,
             input wire [`YSYX210407_ADDR_BUS]pcE,
             input wire [4 : 0]rdWriteAddrE, //差一周期的写回数据
             input wire [4 : 0]rdWriteAddrM, //差两周期的写回数据
             input wire rs1ReadEnable,       //寄存器1读使能
             input wire rs2ReadEnable,       //寄存器2读使能
             input wire [4 : 0]rs1ReadAddr,
             input wire [4 : 0]rs2ReadAddr,  //需要读取的两个寄存器数据
             output wire [1 : 0]Redirect1,   //差一周期重定向寄存器 2b‘10 rs2 2b’01 rs1
             output wire [1 : 0]Redirect2,   //差二周期重定向寄存器 2b‘10 rs2 2b’01 rs1
             output flushD,
             output flushE,
             output flushM,
             output stallF,
             output stallD,
             output stallE,
             output stallM,
             output wire  jump,
             output  wire [`YSYX210407_ADDR_BUS]jAddr,
             output  wire [`YSYX210407_ADDR_BUS]mepcWriteDataW,
             output wire [1 : 0]IRQtypeW,      // 10 trap 01 ITtime
             output wire IRQretW
             );

    wire [1 : 0]IRQtype;
    wire IRQret;
    wire [`YSYX210407_ADDR_BUS] mepcWriteData;  
    
    
    // 差一个周期有读取ram冲突和普通寄存器冲突
    wire [1 : 0] Redirect1_r = {rs2ReadAddr!=5'b0,rs1ReadAddr!=5'b0} & {(rdWriteAddrE == rs2ReadAddr)&rs2ReadEnable,
    (rdWriteAddrE == rs1ReadAddr)&rs1ReadEnable};
    
    // 差两个周期有读取ram冲突和普通寄存器冲突
    wire [1 : 0] Redirect2_r = ((~Redirect1_r) &
    {rs2ReadAddr!=5'b0,rs1ReadAddr!=5'b0} &
    {(rdWriteAddrM == rs2ReadAddr)&rs2ReadEnable,
    (rdWriteAddrM == rs1ReadAddr)&rs1ReadEnable});



    reg itWhit;
    always @ (posedge clk) begin
       if(rst == 1'b1) begin
           itWhit <= 1'b0;
       end 
       else if((pcE == `YSYX210407_ZERO_64) | jalbranch) begin
           itWhit <= itWhit | ITtime;
       end
       else begin
           itWhit <= 1'b0;
       end
    end
    
    wire ITtime_r  = rst ? 1'b0 : ((pcE != `YSYX210407_ZERO_64) & ~jalbranch) & (itWhit|ITtime);

    wire [1 : 0] IRQtype_r = {rst ? 1'b0 : mecall,
                    rst ? 1'b0 : ITtime_r};

    wire IRQret_r = mret;
    assign jAddr = (IRQtype_r != 2'b0) ? irqAddr : 
                   mret ? mepc_o : 
                   jalbranch ? jumpAddr : `YSYX210407_ZERO_64;


    wire [`YSYX210407_ADDR_BUS] mepcWriteData_r = mecall ? pcE : 
                     ITtime_r ? (pcE != `YSYX210407_ZERO_64) ? pcE :
                              (pcD != `YSYX210407_ZERO_64) ? pcD :
                              (pcF != `YSYX210407_ZERO_64) ? pcF :`YSYX210407_ZERO_64 :`YSYX210407_ZERO_64;    
    
    wire flushF = ~CoreLock & (rst ? 1'b0 : 
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

    
    assign jump = (jalbranch | mecall | mret | ITtime_r);

    // ID -> EXE 阶段触发器 
    ysyx_210407_gen_en_dff #(2) Redirect1_dff(Redirect1_r,Redirect1,1'b1&(~CoreLock),clk,rst | flushD);
    ysyx_210407_gen_en_dff #(2) Redirect2_dff(Redirect2_r,Redirect2,1'b1&(~CoreLock),clk,rst | flushD);

    // EXE -> MEM 触发器

    ysyx_210407_gen_en_dff #(2) IRQtype_dff(IRQtype_r,IRQtype,1'b1&(~CoreLock),clk,rst);
    ysyx_210407_gen_en_dff #(64) mepcWriteData_dff(mepcWriteData_r,mepcWriteData,1'b1&(~CoreLock),clk,rst);
    ysyx_210407_gen_en_dff #(1) IRQret_dff(IRQret_r,IRQret,1'b1&(~CoreLock),clk,rst);

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
               input wire [`YSYX210407_REG_BUS] retAddr,   //中断/异常返回地址
               input wire [`YSYX210407_ADDR_BUS]pcW,       //提交的指令地址
               input wire [`YSYX210407_ADDR_BUS] ClintReadAddr,
               input wire [`YSYX210407_ADDR_BUS] ClintWriteAddr,
               output wire [`YSYX210407_DATA_BUS] ClintReadData,
               input wire [`YSYX210407_DATA_BUS] ClintWriteData,
               input wire ClintReadEnable,
               input wire ClintWriteEnable,
               input wire [11 : 0] WriteCSR,
               input wire [`YSYX210407_REG_BUS] WriteData,
               input wire 		 WriteEnable,
               input wire [11 : 0] ReadCSR,
               output wire [`YSYX210407_REG_BUS] ReadData,
               input wire 		 ReadEnable,
               output wire [`YSYX210407_REG_BUS] irqAddr,  //中断/异常跳转地址
               output wire ITtime,
               output wire [`YSYX210407_REG_BUS] mepc_o
               );
    
    /*
     Machine Information Registers
     0xF11 MRO mvendorid Vendor ID.
     0xF12 MRO marchid Architecture ID.
     0xF13 MRO mimpid Implementation ID.
     0xF14 MRO mhartid Hardware thread ID.
     */
    wire [`YSYX210407_REG_BUS] mvendorid = {32'b0, 32'h2000_0915};
    wire [`YSYX210407_REG_BUS] marchid = {1'b1,63'b0};
    wire [`YSYX210407_REG_BUS] mimpid = 64'b1;
    wire [`YSYX210407_REG_BUS] mhartid = 64'b0;
    
    /*
     mstatus Machine status register.
     0x301 MRW misa ISA and extensions
     0x302 MRW medeleg Machine exception delegation register.
     0x303 MRW mideleg Machine interrupt delegation register.
     0x304 MRW mie Machine interrupt-enable register.
     0x305 MRW mtvec Machine trap-handler base address.
     0x306 MRW mcounteren Machine counter enable.
     */
    wire [`YSYX210407_REG_BUS] mstatus;
    wire [`YSYX210407_REG_BUS] misa = {2'b1,36'b0,26'b1_0000_0000};
    wire [`YSYX210407_REG_BUS] medeleg;
    wire [`YSYX210407_REG_BUS] mideleg;  
    wire [`YSYX210407_REG_BUS] mie;
    wire [`YSYX210407_REG_BUS] mip;
    wire [`YSYX210407_REG_BUS] mtvec;
    
    wire [`YSYX210407_REG_BUS] mcause; 
    wire [`YSYX210407_REG_BUS] mepc;
    wire [`YSYX210407_REG_BUS] mscratch;
    
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
    
    wire [`YSYX210407_REG_BUS] mcycle;
    wire [`YSYX210407_REG_BUS] minstret;


    wire [`YSYX210407_REG_BUS] sstatus;

    // 读出CSR
    wire [`YSYX210407_REG_BUS] ReadData_r = rst ? `YSYX210407_ZERO_64 :                                  
                                 ReadCSR == `YSYX210407_sstatus    ? sstatus     :
                                 ReadCSR == `YSYX210407_mstatus    ? mstatus     :
                                 ReadCSR == `YSYX210407_misa       ? misa        :
                                 ReadCSR == `YSYX210407_medeleg    ? medeleg     :
                                 ReadCSR == `YSYX210407_mideleg    ? mideleg     :
                                 ReadCSR == `YSYX210407_mie        ? mie         :
                                 ReadCSR == `YSYX210407_mtvec      ? mtvec       :
                                 ReadCSR == `YSYX210407_mvendorid  ? mvendorid   :
                                 ReadCSR == `YSYX210407_marchid    ? marchid     :
                                 ReadCSR == `YSYX210407_mimpid     ? mimpid      :
                                 ReadCSR == `YSYX210407_mhartid    ? mhartid     :
                                 ReadCSR == `YSYX210407_mscratch   ? mscratch    :
                                 ReadCSR == `YSYX210407_mepc       ? mepc        :
                                 ReadCSR == `YSYX210407_mcause     ? mcause      :
                                 ReadCSR == `YSYX210407_mip        ? mip         :
                                 ReadCSR == `YSYX210407_mcycle     ? mcycle      :
                                 ReadCSR == `YSYX210407_minstret   ? minstret    : `YSYX210407_ZERO_64;
                                 
                                 


    
    assign ReadData = rst ? `YSYX210407_ZERO_64 : ReadEnable ? ((ReadCSR == WriteCSR) ? WriteData : ReadData_r) : `YSYX210407_ZERO_64;
    
    
    // mstatus
    wire [`YSYX210407_REG_BUS]mstatus_t = (WriteCSR == `YSYX210407_mstatus & WriteEnable) ? WriteData  : mstatus;
    wire [`YSYX210407_REG_BUS]mstatus_r;
    assign mstatus_r[63] = rst ? 1'b0 : (mstatus_t[16:15] == 2'b11 | mstatus_t[14:13] == 2'b11) ? 1'b1 :1'b0;
    assign mstatus_r[62 : 13] = rst ? 50'b0 : mstatus_t[62 : 13];
    assign mstatus_r[12 : 11] = (IRQtype != 2'b0) ? 2'b11 : IRQret ? 2'b00 : mstatus_t[12 : 11];
    assign mstatus_r[10 : 8] = 3'b0;
    assign mstatus_r[7] = (IRQtype != 2'b0) ? mstatus_t[3] :IRQret ? 1'b1 : mstatus_t[7];
    assign mstatus_r[6 : 4] = 3'b0;
    // mstatus[3] IE
    assign mstatus_r[3] = (IRQret & mstatus_t[7]) ? mstatus_t[7] : (IRQtype != 2'b0) ? 1'b0 : mstatus_t[3];
    // preiledgeMode Mmode
    assign mstatus_r[2] = 1'b0;
    assign mstatus_r[1 : 0] = 2'b0;

    ysyx_210407_gen_en_dff #(64) mstatus_dff(mstatus_r,mstatus,1'b1&(~CoreLock),clk,rst);

        // sstatus
    wire [`YSYX210407_REG_BUS]sstatus_t = (WriteCSR == `YSYX210407_sstatus & WriteEnable) ? WriteData  : sstatus;
    wire [`YSYX210407_REG_BUS]sstatus_r;
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
   wire [`YSYX210407_REG_BUS]mtvec_t = ((WriteCSR == `YSYX210407_mtvec) & WriteEnable) ? WriteData : mtvec;
   wire [`YSYX210407_REG_BUS]mtvec_r; 
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
    wire [`YSYX210407_REG_BUS] mie_t = ((WriteCSR == `YSYX210407_mie) & WriteEnable) ? WriteData : mie;
    wire [`YSYX210407_REG_BUS] mie_r;
    assign mie_r = rst ? `YSYX210407_ZERO_64 : mie_t;
    ysyx_210407_gen_en_dff #(64) mie_dff(mie_r,mie,1'b1&(~CoreLock),clk,rst);
    /*
    always @(posedge clk)  begin
        if (~CoreLock)
        mie                    <= mie_r;
    end
    */
    // mip
    wire [`YSYX210407_REG_BUS] mip_t = ((WriteCSR == `YSYX210407_mip) & WriteEnable) ? WriteData : mip;
    wire [`YSYX210407_REG_BUS] mip_r;
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
    wire [`YSYX210407_REG_BUS]mepc_t = ((WriteCSR == `YSYX210407_mepc) & WriteEnable) ? WriteData : mepc;
    wire [`YSYX210407_REG_BUS]mepc_r; 
    assign mepc_r = (IRQtype != 2'b0) ? retAddr : mepc_t;
    ysyx_210407_gen_en_dff #(64) mepc_dff(mepc_r,mepc,1'b1&(~CoreLock),clk,rst);
    /*
    always @(posedge clk)  begin
        if (~CoreLock)
        mepc                    <= mepc_r;
    end
    */

    //mscratch 
    wire [`YSYX210407_REG_BUS]mscratch_t = ((WriteCSR == `YSYX210407_mscratch) & WriteEnable) ? WriteData :mscratch;
    wire [`YSYX210407_REG_BUS]mscratch_r;
    assign mscratch_r = (rst == 1'b1) ? `YSYX210407_ZERO_64 : mscratch_t;
    ysyx_210407_gen_en_dff #(64) mscratch_dff(mscratch_r,mscratch,1'b1&(~CoreLock),clk,rst);
    /*
    always @(posedge clk)  begin
        if (~CoreLock)
        mscratch                    <= mscratch_r;
    end
    */

    // mcause
    wire [`YSYX210407_REG_BUS]mcause_t = ((WriteCSR == `YSYX210407_mcause ) & WriteEnable) ? WriteData : mcause;
    wire [`YSYX210407_REG_BUS]mcause_r;
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
    wire [`YSYX210407_REG_BUS]mcycle_t = rst ? 64'b0 : ((WriteCSR == `YSYX210407_mcycle) & WriteEnable) ? WriteData : mcycle;
    wire [`YSYX210407_REG_BUS]mcycle_r = rst ? 64'b0 : mcycle_t + 1;
    ysyx_210407_gen_en_dff #(64) mcycle_dff(mcycle_r,mcycle,1'b1&(~CoreLock),clk,rst);



    // minstret
    wire [`YSYX210407_REG_BUS]minstret_t = rst ? 64'b0 : ((WriteCSR == `YSYX210407_minstret) & WriteEnable) ? WriteData : minstret;
    wire [`YSYX210407_REG_BUS]minstret_r = rst ? 64'b0 : (pcW != `YSYX210407_ZERO_64) ? minstret_t + 1 : minstret_t; 
    ysyx_210407_gen_en_dff #(64) minstret_dff(minstret_r,minstret,1'b1&(~CoreLock),clk,rst);

    // medeleg
    wire [`YSYX210407_REG_BUS]medeleg_t = rst ? 64'b0 : ((WriteCSR == `YSYX210407_medeleg) & WriteEnable) ? WriteData : medeleg;
    wire [`YSYX210407_REG_BUS]medeleg_r = rst ? 64'b0 : (IRQtype[1]) ? medeleg_t + 1 : medeleg_t; 
    ysyx_210407_gen_en_dff #(64) medeleg_dff(medeleg_r,medeleg,1'b1&(~CoreLock),clk,rst);

    // mideleg
    wire [`YSYX210407_REG_BUS]mideleg_t = rst ? 64'b0 : ((WriteCSR == `YSYX210407_mideleg) & WriteEnable) ? WriteData : mideleg;
    wire [`YSYX210407_REG_BUS]mideleg_r = rst ? 64'b0 : (IRQtype[0]) ? mideleg_t + 1 : mideleg_t; 
    ysyx_210407_gen_en_dff #(64) mideleg_dff(mideleg_r,mideleg,1'b1&(~CoreLock),clk,rst);
    


    // mtime
    reg [`YSYX210407_REG_BUS] mtime;
    reg [2 : 0] timediv;
    always @(posedge clk) begin
        if (rst == 1'b1) begin
            mtime <= `YSYX210407_ZERO_64;
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
    reg [`YSYX210407_REG_BUS] mtimecmp;
    always @(posedge clk) begin
        if (rst == 1'b1) begin
            mtimecmp <= `YSYX210407_ZERO_64;
        end
        else if ((ClintWriteAddr == 64'h2004000)&ClintWriteEnable) mtimecmp <=ClintWriteData;
        else mtimecmp <= mtimecmp;
    end 

    assign ClintReadData = rst ? `YSYX210407_ZERO_64 :
    ((ClintReadAddr == 64'h200bff8) & ClintReadEnable) ? mtime :
    ((ClintReadAddr == 64'h2004000) & ClintReadEnable) ? mtimecmp : `YSYX210407_ZERO_64;

    //信号传递
    wire [`YSYX210407_REG_BUS]mtime_r = mtime;
    wire [`YSYX210407_REG_BUS]mtimecmp_r = mtimecmp;
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
               input wire [4 : 0] WriteAddr,
               input wire [`YSYX210407_REG_BUS] WriteData,
               input wire 		 WriteEnable,
               input wire [4 : 0] ReadAddr1,
               output wire [`YSYX210407_REG_BUS] ReadData1,
               input wire 		 ReadEnable1,
               input wire [4 : 0] ReadAddr2,
               output wire [`YSYX210407_REG_BUS] ReadData2,
               input wire 		 ReadEnable2);    
    // 32 registers
    reg [`YSYX210407_REG_BUS] 	regs[0 : 31];
    
    always @(posedge clk) begin
        if (rst == 1'b1) begin
            regs[0]  <= `YSYX210407_ZERO_64;
            regs[1]  <= `YSYX210407_ZERO_64;
            regs[2]  <= `YSYX210407_ZERO_64;
            regs[3]  <= `YSYX210407_ZERO_64;
            regs[4]  <= `YSYX210407_ZERO_64;
            regs[5]  <= `YSYX210407_ZERO_64;
            regs[6]  <= `YSYX210407_ZERO_64;
            regs[7]  <= `YSYX210407_ZERO_64;
            regs[8]  <= `YSYX210407_ZERO_64;
            regs[9]  <= `YSYX210407_ZERO_64;
            regs[10] <= `YSYX210407_ZERO_64;
            regs[11] <= `YSYX210407_ZERO_64;
            regs[12] <= `YSYX210407_ZERO_64;
            regs[13] <= `YSYX210407_ZERO_64;
            regs[14] <= `YSYX210407_ZERO_64;
            regs[15] <= `YSYX210407_ZERO_64;
            regs[16] <= `YSYX210407_ZERO_64;
            regs[17] <= `YSYX210407_ZERO_64;
            regs[18] <= `YSYX210407_ZERO_64;
            regs[19] <= `YSYX210407_ZERO_64;
            regs[20] <= `YSYX210407_ZERO_64;
            regs[21] <= `YSYX210407_ZERO_64;
            regs[22] <= `YSYX210407_ZERO_64;
            regs[23] <= `YSYX210407_ZERO_64;
            regs[24] <= `YSYX210407_ZERO_64;
            regs[25] <= `YSYX210407_ZERO_64;
            regs[26] <= `YSYX210407_ZERO_64;
            regs[27] <= `YSYX210407_ZERO_64;
            regs[28] <= `YSYX210407_ZERO_64;
            regs[29] <= `YSYX210407_ZERO_64;
            regs[30] <= `YSYX210407_ZERO_64;
            regs[31] <= `YSYX210407_ZERO_64;
        end
        else if (WriteEnable  & (WriteAddr != 5'b0)) begin
            regs[WriteAddr] <= WriteData;
        end
    end
    
    assign ReadData1 = rst ? `YSYX210407_ZERO_64 : (ReadEnable1 & (ReadAddr1 != 5'b0) ? (ReadAddr1 == WriteAddr ? WriteData : regs[ReadAddr1]) : `YSYX210407_ZERO_64);
    assign ReadData2 = rst ? `YSYX210407_ZERO_64 : (ReadEnable2 & (ReadAddr2 != 5'b0) ? (ReadAddr2 == WriteAddr ? WriteData : regs[ReadAddr2]) : `YSYX210407_ZERO_64);
    
    
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


// Burst types
`define YSYX210407_AXI_BURST_TYPE_FIXED                                2'b00
`define YSYX210407_AXI_BURST_TYPE_INCR                                 2'b01
`define YSYX210407_AXI_BURST_TYPE_WRAP                                 2'b10
// Access permissions
`define YSYX210407_AXI_PROT_UNPRIVILEGED_ACCESS                        3'b000
`define YSYX210407_AXI_PROT_PRIVILEGED_ACCESS                          3'b001
`define YSYX210407_AXI_PROT_SECURE_ACCESS                              3'b000
`define YSYX210407_AXI_PROT_NON_SECURE_ACCESS                          3'b010
`define YSYX210407_AXI_PROT_DATA_ACCESS                                3'b000
`define YSYX210407_AXI_PROT_INSTRUCTION_ACCESS                         3'b100
// Memory types (AR)
`define YSYX210407_AXI_ARCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define YSYX210407_AXI_ARCACHE_DEVICE_BUFFERABLE                       4'b0001
`define YSYX210407_AXI_ARCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define YSYX210407_AXI_ARCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define YSYX210407_AXI_ARCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b1010
`define YSYX210407_AXI_ARCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b1110
`define YSYX210407_AXI_ARCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1010
`define YSYX210407_AXI_ARCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define YSYX210407_AXI_ARCACHE_WRITE_BACK_NO_ALLOCATE                  4'b1011
`define YSYX210407_AXI_ARCACHE_WRITE_BACK_READ_ALLOCATE                4'b1111
`define YSYX210407_AXI_ARCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1011
`define YSYX210407_AXI_ARCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111
// Memory types (AW)
`define YSYX210407_AXI_AWCACHE_DEVICE_NON_BUFFERABLE                   4'b0000
`define YSYX210407_AXI_AWCACHE_DEVICE_BUFFERABLE                       4'b0001
`define YSYX210407_AXI_AWCACHE_NORMAL_NON_CACHEABLE_NON_BUFFERABLE     4'b0010
`define YSYX210407_AXI_AWCACHE_NORMAL_NON_CACHEABLE_BUFFERABLE         4'b0011
`define YSYX210407_AXI_AWCACHE_WRITE_THROUGH_NO_ALLOCATE               4'b0110
`define YSYX210407_AXI_AWCACHE_WRITE_THROUGH_READ_ALLOCATE             4'b0110
`define YSYX210407_AXI_AWCACHE_WRITE_THROUGH_WRITE_ALLOCATE            4'b1110
`define YSYX210407_AXI_AWCACHE_WRITE_THROUGH_READ_AND_WRITE_ALLOCATE   4'b1110
`define YSYX210407_AXI_AWCACHE_WRITE_BACK_NO_ALLOCATE                  4'b0111
`define YSYX210407_AXI_AWCACHE_WRITE_BACK_READ_ALLOCATE                4'b0111
`define YSYX210407_AXI_AWCACHE_WRITE_BACK_WRITE_ALLOCATE               4'b1111
`define YSYX210407_AXI_AWCACHE_WRITE_BACK_READ_AND_WRITE_ALLOCATE      4'b1111

`define YSYX210407_AXI_SIZE_BYTES_1                                    3'b000
`define YSYX210407_AXI_SIZE_BYTES_2                                    3'b001
`define YSYX210407_AXI_SIZE_BYTES_4                                    3'b010
`define YSYX210407_AXI_SIZE_BYTES_8                                    3'b011
`define YSYX210407_AXI_SIZE_BYTES_16                                   3'b100
`define YSYX210407_AXI_SIZE_BYTES_32                                   3'b101
`define YSYX210407_AXI_SIZE_BYTES_64                                   3'b110
`define YSYX210407_AXI_SIZE_BYTES_128                                  3'b111


module ysyx_210407_axi # (
    parameter RW_DATA_WIDTH     = 64,
    parameter AXI_DATA_WIDTH    = 64,
    parameter AXI_ADDR_WIDTH    = 32,
    parameter AXI_ID_WIDTH      = 4
)(
    input                               clock,
    input                               reset,

	input                               rw_valid_i,
	output                              rw_ready_o,
    input                               rw_req_i,
    output reg [RW_DATA_WIDTH-1:0]      data_read_o,
    input  [RW_DATA_WIDTH-1:0]          data_write_i,
    input  [RW_DATA_WIDTH/8-1:0]        data_write_mask_i,
    input  [AXI_ADDR_WIDTH-1:0]         rw_addr_i,
    input  [2:0]                        rw_size_i,
    output [1:0]                        rw_resp_o,

    // Advanced eXtensible Interface
    input                               axi_aw_ready_i,
    output                              axi_aw_valid_o,
    output [AXI_ADDR_WIDTH-1:0]         axi_aw_addr_o,
    output [AXI_ID_WIDTH-1:0]           axi_aw_id_o,
    output [7:0]                        axi_aw_len_o,
    output [2:0]                        axi_aw_size_o,
    output [1:0]                        axi_aw_burst_o,

    input                               axi_w_ready_i,
    output                              axi_w_valid_o,
    output reg [AXI_DATA_WIDTH-1:0]         axi_w_data_o,
    output [AXI_DATA_WIDTH/8-1:0]       axi_w_strb_o,
    output reg                             axi_w_last_o,
    
    output                              axi_b_ready_o,
    input                               axi_b_valid_i,
    input  [1:0]                        axi_b_resp_i,
    input  [AXI_ID_WIDTH-1:0]           axi_b_id_i,

    input                               axi_ar_ready_i,
    output                              axi_ar_valid_o,
    output [AXI_ADDR_WIDTH-1:0]         axi_ar_addr_o,
    output [AXI_ID_WIDTH-1:0]           axi_ar_id_o,
    output [7:0]                        axi_ar_len_o,
    output [2:0]                        axi_ar_size_o,
    output [1:0]                        axi_ar_burst_o,
    
    output                              axi_r_ready_o,
    input                               axi_r_valid_i,
    input  [1:0]                        axi_r_resp_i,
    input  [AXI_DATA_WIDTH-1:0]         axi_r_data_i,
    input                               axi_r_last_i,
    input  [AXI_ID_WIDTH-1:0]           axi_r_id_i
);
    wire w_trans    = rw_req_i == `YSYX210407_REQ_WRITE;
    wire r_trans    = rw_req_i == `YSYX210407_REQ_READ;
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
    wire [1:0] W_STATE_IDLE = 2'b00, W_STATE_ADDR = 2'b01, W_STATE_WRITE = 2'b10, W_STATE_RESP = 2'b11;
    wire [1:0] R_STATE_IDLE = 2'b00, R_STATE_ADDR = 2'b01, R_STATE_READ  = 2'b10;

    reg [1:0] w_state, r_state;
    wire w_state_addr = w_state == W_STATE_ADDR, w_state_write = w_state == W_STATE_WRITE, w_state_resp = w_state == W_STATE_RESP;
    wire r_state_addr = r_state == R_STATE_ADDR, r_state_read  = r_state == R_STATE_READ;

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



    // ------------------Process Data------------------

    wire [7:0] axi_len      = 8'b0;
    wire [2:0] axi_size     = rw_size_i;
    
    wire [AXI_ADDR_WIDTH-1:0] axi_addr          = rw_addr_i[31 : 0];

    wire [AXI_ID_WIDTH-1:0] axi_id              = {AXI_ID_WIDTH{1'b0}};

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
    assign axi_aw_id_o      = axi_id;
    assign axi_aw_len_o     = axi_len;
    assign axi_aw_size_o    = axi_size;
    assign axi_aw_burst_o   = `YSYX210407_AXI_BURST_TYPE_INCR;
    
    // Write Data channel signals 
    assign axi_w_valid_o    = w_state_write;
    //assign axi_w_data_o     = 
    assign axi_w_strb_o     = data_write_mask_i; 
    //assign axi_w_last_o     = 
    
    always @(posedge clock) begin
        if (reset == 1'b1) begin
            axi_w_last_o <= 1'b0;
            axi_w_data_o <= 0;
        end
        else if (axi_aw_ready_i & (axi_b_id_i == axi_id)) begin
            axi_w_last_o <= 1'b1;
            axi_w_data_o <= data_write_i;
        end
    end

    // Write Response channel signals 
    assign axi_b_ready_o    = w_state_resp;

    // ------------------Read Transaction------------------

    // Read address channel signals
    assign axi_ar_valid_o   = r_state_addr;
    assign axi_ar_addr_o    = axi_addr;
    assign axi_ar_id_o      = axi_id;
    assign axi_ar_len_o     = axi_len;
    assign axi_ar_size_o    = axi_size;
    assign axi_ar_burst_o   = `YSYX210407_AXI_BURST_TYPE_INCR;

    // Read data channel signals
    assign axi_r_ready_o    = r_state_read & axi_r_valid_i;


    always @(posedge clock) begin
        if (reset == 1'b1) begin
            data_read_o <= 0;
        end
        else if (axi_r_ready_o & axi_r_valid_i & (axi_r_id_i == axi_id)) begin
            data_read_o <= axi_r_data_i;
        end
    end

endmodule
