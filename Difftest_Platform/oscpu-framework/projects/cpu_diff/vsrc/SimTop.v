`timescale 1ns / 1ps
/* verilator lint_off PINMISSING */
`include "defines.v"

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
    input  [7:0]  io_uart_in_ch
  // ......
);

wire [`INST_BUS] inst;
wire [`ADDR_BUS] pc;
wire pcEnable;

wire RamReadEnable;
wire RamWriteEnable;
wire [`ADDR_BUS] RamReadData;
wire [`ADDR_BUS] RamReadAddr;
wire [`ADDR_BUS] RamWriteAddr;
wire [`DATA_BUS] RamWriteData;
wire [`DATA_BUS] RamWriteMask;

wire ReadEnable;
wire WriteEnable;
wire [`ADDR_BUS] ReadData;
wire [`ADDR_BUS] ReadAddr;
wire [`ADDR_BUS] WriteAddr;
wire [`DATA_BUS] WriteData;
wire [`DATA_BUS] WriteMask;

RAMHelper u_RAMHelper(
  .clk(clock),
  .ren(ReadEnable),
  .rIdx(ReadAddr),
  .rdata(ReadData),
  .wIdx(WriteAddr),
  .wdata(WriteData),
  .wmask(WriteMask),
  .wen(WriteEnable)
);


assign inst = RamReadEnable ? 32'b0 : (pc[2] ? ReadData[63 : 32] : ReadData[31 : 0]);
assign ReadAddr = RamReadEnable ? RamReadAddr : pc;
assign RamReadData = RamReadEnable ? ReadData : 64'b0;
assign WriteAddr = RamWriteAddr;
assign WriteMask = RamWriteMask;
assign WriteEnable = RamWriteEnable;
assign WriteData = RamWriteData;

rvcpu Rvcpu(
  .clk(clock),
  .rst(reset),
  .instF(inst),
  .RamReadData(RamReadData),
  .RamReadEnable(RamReadEnable),
  .RamWriteEnable(RamWriteEnable),
  .RamWriteMask(RamWriteMask),
  .RamReadAddr(RamReadAddr),
  .RamWriteAddr(RamWriteAddr),
  .RamWriteData(RamWriteData),
  .pcF(pc),
  .pcEnable(pcEnable)
);

reg [`ADDR_BUS] r_pc;
reg [`INST_BUS] r_instr;
reg r_valid;
reg r_wen;
reg [7:0]r_wdest;
reg [`DATA_BUS]r_wdata;
reg trap;
reg [7:0] trap_code;
reg [63:0] cycleCnt;
reg [63:0] instrCnt;
reg skip;
reg [63:0]BusReadAddrW;
reg [63:0]BusWriteAddrW;


wire inst_vaild = (Rvcpu.instW!=0)&(Rvcpu.pcW != r_pc);

reg [63 : 0] mstatus  = Rvcpu.CSRfile_u.mstatus_r;
reg [63 : 0] sstatus  = Rvcpu.CSRfile_u.sstatus_r;
reg [63 : 0] mepc     = Rvcpu.CSRfile_u.mepc_r;

reg [63 : 0] mtvec    = Rvcpu.CSRfile_u.mtvec_r;
reg [63 : 0] mcause   = Rvcpu.CSRfile_u.mcause_r;
reg [63 : 0] mip      = Rvcpu.CSRfile_u.mip_r;
reg [63 : 0] mie      = Rvcpu.CSRfile_u.mie_r;
reg [63 : 0] mscratch = Rvcpu.CSRfile_u.mscratch_r;


always @(posedge clock) begin
  if (reset) begin       
    {trap, trap_code, cycleCnt, instrCnt, skip} <= 0;
  end
  else if (~trap) begin
    //r_pc <= Rvcpu.pcW;
    r_pc <= Rvcpu.pcF;
    //r_instr <= Rvcpu.instW;
    r_instr <= Rvcpu.instF;
    //r_valid <= inst_vaild;
    r_valid <= 1'b1;
    r_wen <= Rvcpu.rdWriteEnableW;
    r_wdest <= {3'b00,Rvcpu.rdWriteAddrW};
    r_wdata <= Rvcpu.rdWriteDataW;
    trap <= Rvcpu.instW == 32'h6b;
    trap_code <= Rvcpu.Regfile.regs[10][7:0];
    cycleCnt <= cycleCnt + 1;
    instrCnt <= instrCnt + {63'b0,inst_vaild};
    BusReadAddrW <= Rvcpu.BusReadAddr;
    BusWriteAddrW <= Rvcpu.BusWriteAddr;
    skip <= (Rvcpu.instW[6 : 0] == 7'h7b) | 
            ((Rvcpu.instW[6 : 0]==7'b1110011) & (Rvcpu.instW[31 : 20] == `mcycle)) |
            (intrNO[2]!=32'b0) |
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
  .valid    ( r_valid ),
  .pc       ( r_pc ),//64bit
  .instr    ( r_instr ),//32bit
  .skip     ( skip ),
  .isRVC    ( 1'b0 ),
  .scFailed ( 1'b0 ),
  .wen      ( r_wen   ),
  .wdest    ( r_wdest ),//8bit
  .wdata    ( r_wdata ) //64bit
);

reg [`ADDR_BUS] it_pc[3 : 0];
reg [`INST_BUS] it_instr[3 : 0];
reg [31 : 0] intrNO[3 : 0];
gen_en_dff #(32) intrNO1_dff({32{Rvcpu.Ctrl.IRQtype_r[0]}}&32'h7,intrNO[0],1'b1,clock,reset);
gen_en_dff #(64) it_pc1_dff({64{Rvcpu.Ctrl.IRQtype_r[0]}}&Rvcpu.pcE,it_pc[0],1'b1,clock,reset);
gen_en_dff #(32) it_instr1_dff({32{Rvcpu.Ctrl.IRQtype_r[0]}}&Rvcpu.instE,it_instr[0],1'b1,clock,reset);
gen_en_dff #(32) intrNO2_dff(intrNO[0],intrNO[1],1'b1,clock,reset);
gen_en_dff #(64) it_pc2_dff(it_pc[0],it_pc[1],1'b1,clock,reset);
gen_en_dff #(32) it_instr2_dff(it_instr[0],it_instr[1],1'b1,clock,reset);
gen_en_dff #(32) intrNO3_dff(intrNO[1],intrNO[2],1'b1,clock,reset);
gen_en_dff #(64) it_pc3_dff(it_pc[1],it_pc[2],1'b1,clock,reset);
gen_en_dff #(32) it_instr3_dff(it_instr[1],it_instr[2],1'b1,clock,reset);

// 触发异常
DifftestArchEvent U_DifftestArchEvent(
    .clock(clock),			// 时钟
    .coreid(8'b0),		// cpu id，单核时固定为0
    .intrNO(intrNO[2]),		// 中断号，非0时产生中断。产生中断的时钟周期中，DifftestInstrCommit提交的valid需为0
    .cause(32'b0),			// 异常号，ecall时不需要考虑
    .exceptionPC(it_pc[2]),	// 产生异常时的PC
    .exceptionInst(it_instr[2])	// 产生异常时的指令
);


DifftestTrapEvent U_DifftestTrapEvent(
  .clock              (clock),
  .coreid             (0),
  .valid              (trap),
  .code               (trap_code),
  .pc                 (r_pc),
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
