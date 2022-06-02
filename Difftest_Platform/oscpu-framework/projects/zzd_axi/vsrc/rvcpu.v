
/* verilator lint_off UNUSED */
//--xuezhen--

`timescale 1ns / 1ps

`include "defines.v"


module rvcpu(input wire clk,
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
    if_stage If_stage(
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
    id_stage Id_stage(
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
    
    exe_stage Exe_stage(
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
        if(BusReadAddr < 64'h80000000) begin
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
        if(BusWriteAddr < 64'h80000000) begin
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

    mem_stage Mem_stage(
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
    
    regfile Regfile(
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


    reg itTime;
    wire [`REG_BUS]mepc_o;

    CSRfile CSRfile_u(
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
    .itTime(itTime),
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
    
    ctrl Ctrl(
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
    .itTime(itTime),
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

    wb_stage Wb_stage(
    .clk(clk),
    .rst(rst),
    .stallW(stallW),
    .instW(instW),
    .instTypeW(instTypeW),
    .reg_a0(Regfile.regs[10])
    
    );
    
    
endmodule
