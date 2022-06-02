`timescale 1ns / 1ps
/* verilator lint_off PINMISSING */
/* verilator lint_off UNOPTFLAT */

`include "defines.v"
`define AXI_TOP_INTERFACE(name) io_memAXI_0_``name
   
module SimTop(
    input         clock,
    input         reset,

    input  [63:0] io_logCtrl_log_begin,
    input  [63:0] io_logCtrl_log_end,
    input  [63:0] io_logCtrl_log_level,
    input         io_perfInfo_clean,
    input         io_perfInfo_dump,

    output        io_uart_out_valid,
    output [7:0]  io_uart_out_ch,
    output        io_uart_in_valid,
    input  [7:0]  io_uart_in_ch,

    input                               `AXI_TOP_INTERFACE(aw_ready),
    output                              `AXI_TOP_INTERFACE(aw_valid),
    output [`AXI_ADDR_WIDTH-1:0]        `AXI_TOP_INTERFACE(aw_bits_addr),
    output [2:0]                        `AXI_TOP_INTERFACE(aw_bits_prot),
    output [`AXI_ID_WIDTH-1:0]          `AXI_TOP_INTERFACE(aw_bits_id),
    output [`AXI_USER_WIDTH-1:0]        `AXI_TOP_INTERFACE(aw_bits_user),
    output [7:0]                        `AXI_TOP_INTERFACE(aw_bits_len),
    output [2:0]                        `AXI_TOP_INTERFACE(aw_bits_size),
    output [1:0]                        `AXI_TOP_INTERFACE(aw_bits_burst),
    output                              `AXI_TOP_INTERFACE(aw_bits_lock),
    output [3:0]                        `AXI_TOP_INTERFACE(aw_bits_cache),
    output [3:0]                        `AXI_TOP_INTERFACE(aw_bits_qos),
    
    input                               `AXI_TOP_INTERFACE(w_ready),
    output                              `AXI_TOP_INTERFACE(w_valid),
    output [`AXI_DATA_WIDTH-1:0]        `AXI_TOP_INTERFACE(w_bits_data)         [3:0],
    output [`AXI_DATA_WIDTH/8-1:0]      `AXI_TOP_INTERFACE(w_bits_strb),
    output                              `AXI_TOP_INTERFACE(w_bits_last),
    
    output                              `AXI_TOP_INTERFACE(b_ready),
    input                               `AXI_TOP_INTERFACE(b_valid),
    input  [1:0]                        `AXI_TOP_INTERFACE(b_bits_resp),
    input  [`AXI_ID_WIDTH-1:0]          `AXI_TOP_INTERFACE(b_bits_id),
    input  [`AXI_USER_WIDTH-1:0]        `AXI_TOP_INTERFACE(b_bits_user),

    input                               `AXI_TOP_INTERFACE(ar_ready),
    output                              `AXI_TOP_INTERFACE(ar_valid),
    output [`AXI_ADDR_WIDTH-1:0]        `AXI_TOP_INTERFACE(ar_bits_addr),
    output [2:0]                        `AXI_TOP_INTERFACE(ar_bits_prot),
    output [`AXI_ID_WIDTH-1:0]          `AXI_TOP_INTERFACE(ar_bits_id),
    output [`AXI_USER_WIDTH-1:0]        `AXI_TOP_INTERFACE(ar_bits_user),
    output [7:0]                        `AXI_TOP_INTERFACE(ar_bits_len),
    output [2:0]                        `AXI_TOP_INTERFACE(ar_bits_size),
    output [1:0]                        `AXI_TOP_INTERFACE(ar_bits_burst),
    output                              `AXI_TOP_INTERFACE(ar_bits_lock),
    output [3:0]                        `AXI_TOP_INTERFACE(ar_bits_cache),
    output [3:0]                        `AXI_TOP_INTERFACE(ar_bits_qos),
    
    output                              `AXI_TOP_INTERFACE(r_ready),
    input                               `AXI_TOP_INTERFACE(r_valid),
    input  [1:0]                        `AXI_TOP_INTERFACE(r_bits_resp),
    input  [`AXI_DATA_WIDTH-1:0]        `AXI_TOP_INTERFACE(r_bits_data)         [3:0],
    input                               `AXI_TOP_INTERFACE(r_bits_last),
    input  [`AXI_ID_WIDTH-1:0]          `AXI_TOP_INTERFACE(r_bits_id),
    input  [`AXI_USER_WIDTH-1:0]        `AXI_TOP_INTERFACE(r_bits_user)
);

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

    assign ar_ready                                 = `AXI_TOP_INTERFACE(ar_ready);
    assign `AXI_TOP_INTERFACE(ar_valid)             = ar_valid;
    assign `AXI_TOP_INTERFACE(ar_bits_addr)         = ar_addr;
    assign `AXI_TOP_INTERFACE(ar_bits_prot)         = ar_prot;
    assign `AXI_TOP_INTERFACE(ar_bits_id)           = ar_id;
    assign `AXI_TOP_INTERFACE(ar_bits_user)         = ar_user;
    assign `AXI_TOP_INTERFACE(ar_bits_len)          = ar_len;
    assign `AXI_TOP_INTERFACE(ar_bits_size)         = ar_size;
    assign `AXI_TOP_INTERFACE(ar_bits_burst)        = ar_burst;
    assign `AXI_TOP_INTERFACE(ar_bits_lock)         = ar_lock;
    assign `AXI_TOP_INTERFACE(ar_bits_cache)        = ar_cache;
    assign `AXI_TOP_INTERFACE(ar_bits_qos)          = ar_qos;
    
    assign aw_ready =             `AXI_TOP_INTERFACE(aw_ready);
    assign `AXI_TOP_INTERFACE(aw_valid)             = aw_valid;
    assign `AXI_TOP_INTERFACE(aw_bits_addr)         = aw_addr;     
    assign `AXI_TOP_INTERFACE(aw_bits_prot)         = aw_prot ;  
    assign `AXI_TOP_INTERFACE(aw_bits_id)           = aw_id;   
    assign `AXI_TOP_INTERFACE(aw_bits_user)         = aw_user;    
    assign `AXI_TOP_INTERFACE(aw_bits_len)          = aw_len;   
    assign `AXI_TOP_INTERFACE(aw_bits_size)         = aw_size;    
    assign `AXI_TOP_INTERFACE(aw_bits_burst)        = aw_burst;    
    assign `AXI_TOP_INTERFACE(aw_bits_lock)         = aw_lock;    
    assign `AXI_TOP_INTERFACE(aw_bits_cache)        = aw_cache;     
    assign `AXI_TOP_INTERFACE(aw_bits_qos)          = aw_qos;   

    assign w_ready =               `AXI_TOP_INTERFACE(w_ready); 
    assign `AXI_TOP_INTERFACE(w_valid)              = w_valid; 
    assign `AXI_TOP_INTERFACE(w_bits_data)[0]          = w_data;    
    assign `AXI_TOP_INTERFACE(w_bits_strb)          = w_strb;    
    assign `AXI_TOP_INTERFACE(w_bits_last)          = w_last;     

    assign `AXI_TOP_INTERFACE(b_ready)              = b_ready;  
    assign b_valid = `AXI_TOP_INTERFACE(b_valid);
    assign b_resp = `AXI_TOP_INTERFACE(b_bits_resp); 
    assign b_id = `AXI_TOP_INTERFACE(b_bits_id);  
    assign b_user = `AXI_TOP_INTERFACE(b_bits_user);     


    assign `AXI_TOP_INTERFACE(r_ready)              = r_ready;
    assign r_valid                                  = `AXI_TOP_INTERFACE(r_valid);
    assign r_resp                                   = `AXI_TOP_INTERFACE(r_bits_resp);
    assign r_data                                   = `AXI_TOP_INTERFACE(r_bits_data)[0];
    assign r_last                                   = `AXI_TOP_INTERFACE(r_bits_last);
    assign r_id                                     = `AXI_TOP_INTERFACE(r_bits_id);
    assign r_user                                   = `AXI_TOP_INTERFACE(r_bits_user);

    axi u_axi (
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




rvcpu Rvcpu(
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

reg [`ADDR_BUS] rt_pc;
reg [`INST_BUS] rt_instr;
reg rt_valid;
reg rt_wen;
reg [7:0]rt_wdest;
reg [`DATA_BUS]rt_wdata;
reg trap;
reg [7:0] trap_code;
reg [63:0] cycleCnt;
reg [63:0] instrCnt;
reg skip;
reg [63:0]BusReadAddrW;
reg [63:0]BusWriteAddrW;


wire inst_vaild = (Rvcpu.instW!=0)&(Rvcpu.pcW != rt_pc);

wire diffclk = ~Rvcpu.CoreLock;

reg [63 : 0] mstatus; 
reg [63 : 0] sstatus; 
reg [63 : 0] mepc; 
reg [63 : 0] mtvec; 
reg [63 : 0] mcause; 
reg [63 : 0] mip; 
reg [63 : 0] mie; 
reg [63 : 0] mscratch; 

always @(posedge clock) begin
  if (reset) begin       
    {trap, trap_code, cycleCnt, instrCnt, skip} <= 0;
  end
  else if (~trap) begin
    rt_pc <= Rvcpu.pcW;
    rt_instr <= Rvcpu.instW;
    rt_valid <= inst_vaild;
    rt_wen <= Rvcpu.rdWriteEnableW;
    rt_wdest <= {3'b00,Rvcpu.rdWriteAddrW};
    rt_wdata <= Rvcpu.rdWriteDataW;
    trap <= Rvcpu.instW == 32'h6b;
    trap_code <= Rvcpu.Regfile.regs[10][7:0];
    cycleCnt <= cycleCnt + 1;
    instrCnt <= instrCnt + {63'b0,inst_vaild};
    BusReadAddrW <= Rvcpu.BusReadAddr;
    BusWriteAddrW <= Rvcpu.BusWriteAddr;
    skip <= (Rvcpu.instW[6 : 0] == 7'h7b) | 
            ((Rvcpu.instW[6 : 0]==7'b1110011) & (Rvcpu.instW[31 : 20] == `mcycle)) |
            (intrNO[1]!=32'b0) |
            ((Rvcpu.instW[6 : 0]==7'b0000011)&(BusReadAddrW<64'h80000000)) |
            ((Rvcpu.instW[6 : 0]==7'b0100011)&(BusWriteAddrW<64'h80000000));
    
    mtvec    <= Rvcpu.CSRfile_u.mtvec_r;
    mcause   <= Rvcpu.CSRfile_u.mcause_r;
    mip      <= Rvcpu.CSRfile_u.mip_r;
    mie      <= Rvcpu.CSRfile_u.mie_r;
    mscratch <= Rvcpu.CSRfile_u.mscratch_r;
    mstatus  <= Rvcpu.CSRfile_u.mstatus_r;
    sstatus  <= Rvcpu.CSRfile_u.sstatus_r;
    mepc     <= Rvcpu.CSRfile_u.mepc_r;
  end
end

DifftestInstrCommit U_inst_commit(
  .clock    ( clock ),
  .coreid   ( 8'd0 ),//8bit
  .index    ( 8'd0 ),//8bit
  .valid    ( rt_valid ),
  .pc       ( rt_pc ),//64bit
  .instr    ( rt_instr ),//32bit
  .skip     ( skip ),
  .isRVC    ( 1'b0 ),
  .scFailed ( 1'b0 ),
  .wen      ( rt_wen   ),
  .wdest    ( rt_wdest ),//8bit
  .wdata    ( rt_wdata ) //64bit
);

reg [`ADDR_BUS] it_pc[3 : 0];
reg [`INST_BUS] it_instr[3 : 0];
reg [31 : 0] intrNO[3 : 0];
gen_en_dff #(32) intrNO1_dff({32{Rvcpu.Ctrl.IRQtype_r[0]}}&32'h7,intrNO[0],1'b1&(~Rvcpu.CoreLock),clock,reset);
gen_en_dff #(64) it_pc1_dff({64{Rvcpu.Ctrl.IRQtype_r[0]}}&Rvcpu.pcE,it_pc[0],1'b1&(~Rvcpu.CoreLock),clock,reset);
gen_en_dff #(32) it_instr1_dff({32{Rvcpu.Ctrl.IRQtype_r[0]}}&Rvcpu.instE,it_instr[0],1'b1&(~Rvcpu.CoreLock),clock,reset);
gen_en_dff #(32) intrNO2_dff(intrNO[0],intrNO[1],1'b1&(~Rvcpu.CoreLock),clock,reset);
gen_en_dff #(64) it_pc2_dff(it_pc[0],it_pc[1],1'b1&(~Rvcpu.CoreLock),clock,reset);
gen_en_dff #(32) it_instr2_dff(it_instr[0],it_instr[1],1'b1&(~Rvcpu.CoreLock),clock,reset);
gen_en_dff #(32) intrNO3_dff(intrNO[1],intrNO[2],1'b1&(~Rvcpu.CoreLock),clock,reset);
gen_en_dff #(64) it_pc3_dff(it_pc[1],it_pc[2],1'b1&(~Rvcpu.CoreLock),clock,reset);
gen_en_dff #(32) it_instr3_dff(it_instr[1],it_instr[2],1'b1&(~Rvcpu.CoreLock),clock,reset);

// 触发异常
DifftestArchEvent U_DifftestArchEvent(
    .clock(clock), 			// 时钟
    .coreid(8'b0),		// cpu id，单核时固定为0
    .intrNO({32{~Rvcpu.CoreLock}} & intrNO[2]),		// 中断号，非0时产生中断。产生中断的时钟周期中，DifftestInstrCommit提交的valid需为0
    .cause(32'b0),			// 异常号，ecall时不需要考虑
    .exceptionPC({64{~Rvcpu.CoreLock}} & it_pc[2]),	// 产生异常时的PC
    .exceptionInst({32{~Rvcpu.CoreLock}} & it_instr[2])	// 产生异常时的指令
);


DifftestTrapEvent U_DifftestTrapEvent(
  .clock              (clock),
  .coreid             (0),
  .valid              (trap),
  .code               (trap_code),
  .pc                 (rt_pc),
  .cycleCnt           (cycleCnt),
  .instrCnt           (instrCnt)
);

DifftestArchIntRegState U_DifftestArchIntRegState (
  .clock              (clock),
  .coreid             (0),
  .gpr_0              (Rvcpu.Regfile.regs[0]),
  .gpr_1              (Rvcpu.Regfile.regs[1]),
  .gpr_2              (Rvcpu.Regfile.regs[2]),
  .gpr_3              (Rvcpu.Regfile.regs[3]),
  .gpr_4              (Rvcpu.Regfile.regs[4]),
  .gpr_5              (Rvcpu.Regfile.regs[5]),
  .gpr_6              (Rvcpu.Regfile.regs[6]),
  .gpr_7              (Rvcpu.Regfile.regs[7]),
  .gpr_8              (Rvcpu.Regfile.regs[8]),
  .gpr_9              (Rvcpu.Regfile.regs[9]),
  .gpr_10             (Rvcpu.Regfile.regs[10]),
  .gpr_11             (Rvcpu.Regfile.regs[11]),
  .gpr_12             (Rvcpu.Regfile.regs[12]),
  .gpr_13             (Rvcpu.Regfile.regs[13]),
  .gpr_14             (Rvcpu.Regfile.regs[14]),
  .gpr_15             (Rvcpu.Regfile.regs[15]),
  .gpr_16             (Rvcpu.Regfile.regs[16]),
  .gpr_17             (Rvcpu.Regfile.regs[17]),
  .gpr_18             (Rvcpu.Regfile.regs[18]),
  .gpr_19             (Rvcpu.Regfile.regs[19]),
  .gpr_20             (Rvcpu.Regfile.regs[20]),
  .gpr_21             (Rvcpu.Regfile.regs[21]),
  .gpr_22             (Rvcpu.Regfile.regs[22]),
  .gpr_23             (Rvcpu.Regfile.regs[23]),
  .gpr_24             (Rvcpu.Regfile.regs[24]),
  .gpr_25             (Rvcpu.Regfile.regs[25]),
  .gpr_26             (Rvcpu.Regfile.regs[26]),
  .gpr_27             (Rvcpu.Regfile.regs[27]),
  .gpr_28             (Rvcpu.Regfile.regs[28]),
  .gpr_29             (Rvcpu.Regfile.regs[29]),
  .gpr_30             (Rvcpu.Regfile.regs[30]),
  .gpr_31             (Rvcpu.Regfile.regs[31])
);


DifftestCSRState DifftestCSRState(
  .clock              (clock),
  .coreid             (0),
  .priviledgeMode     (2'b11),
  .mstatus            (mstatus),
  .sstatus            (sstatus),
  .mepc               (mepc),
  .sepc               (0),
  .mtval              (0),
  .stval              (0),
  .mtvec              (mtvec),
  .stvec              (0),
  .mcause             (mcause),
  .scause             (0),
  .satp               (0),
  .mip                (mip),
  .mie                (mie),
  .mscratch           (mscratch),
  .sscratch           (0),
  .mideleg            (0),
  .medeleg            (0)
);

DifftestArchFpRegState DifftestArchFpRegState(
  .clock              (clock),
  .coreid             (0),
  .fpr_0              (0),
  .fpr_1              (0),
  .fpr_2              (0),
  .fpr_3              (0),
  .fpr_4              (0),
  .fpr_5              (0),
  .fpr_6              (0),
  .fpr_7              (0),
  .fpr_8              (0),
  .fpr_9              (0),
  .fpr_10             (0),
  .fpr_11             (0),
  .fpr_12             (0),
  .fpr_13             (0),
  .fpr_14             (0),
  .fpr_15             (0),
  .fpr_16             (0),
  .fpr_17             (0),
  .fpr_18             (0),
  .fpr_19             (0),
  .fpr_20             (0),
  .fpr_21             (0),
  .fpr_22             (0),
  .fpr_23             (0),
  .fpr_24             (0),
  .fpr_25             (0),
  .fpr_26             (0),
  .fpr_27             (0),
  .fpr_28             (0),
  .fpr_29             (0),
  .fpr_30             (0),
  .fpr_31             (0)
);

endmodule
