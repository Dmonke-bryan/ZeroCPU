`timescale 1ns / 1ps
/* verilator lint_off UNDRIVEN */
/* verilator lint_off UNUSED */
`include "defines.v"

module CSRfile(input wire clk,
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
               output reg itTime,
               output wire [`REG_BUS] mepc_o
               );
    
    /*
     Machine Information Registers
     0xF11 MRO mvendorid Vendor ID.
     0xF12 MRO marchid Architecture ID.
     0xF13 MRO mimpid Implementation ID.
     0xF14 MRO mhartid Hardware thread ID.
     */
    reg [`REG_BUS] mvendorid;
    reg [`REG_BUS] marchid;
    reg [`REG_BUS] mimpid;
    reg [`REG_BUS] mhartid;
    
    /*
     mstatus Machine status register.
     0x301 MRW misa ISA and extensions
     0x302 MRW medeleg Machine exception delegation register.
     0x303 MRW mideleg Machine interrupt delegation register.
     0x304 MRW mie Machine interrupt-enable register.
     0x305 MRW mtvec Machine trap-handler base address.
     0x306 MRW mcounteren Machine counter enable.
     */
    reg [`REG_BUS] mstatus;
    reg [`REG_BUS] misa;
    reg [`REG_BUS] medeleg;
    reg [`REG_BUS] mideleg;
    reg [`REG_BUS] mie;
    reg [`REG_BUS] mip;
    reg [`REG_BUS] mtvec;
    reg [`REG_BUS] mcounteren;
    
    reg [`REG_BUS] mcause; 
    reg [`REG_BUS] mepc;
    reg [`REG_BUS] mscratch;
    
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


    reg [`REG_BUS] sstatus;
    
    always @(posedge clk)
    begin
        if (rst == 1'b1)
        begin
            mcycle    <= `ZERO_64;
            minstret  <= `ZERO_64;
            mstatus   <= `ZERO_64;
            mie       <= `ZERO_64;
            mip       <= `ZERO_64;
            mtime     <= `ZERO_64;
            mtimecmp  <= `ZERO_64;
            mvendorid <= `ZERO_64;
            mtvec     <= `ZERO_64;
            mepc      <= `ZERO_64;
            mscratch  <= `ZERO_64;
            timediv   <= 3'b0;
        end
    end
    
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

    always @(posedge clk)  begin
        if (~CoreLock)
        mstatus <= mstatus_r;
    end

        // sstatus
    wire [`REG_BUS]sstatus_t = (WriteCSR == `sstatus & WriteEnable) ? WriteData  : sstatus;
    wire [`REG_BUS]sstatus_r;
    assign sstatus_r[63] = rst ? 1'b0 : (sstatus_t[16:15] == 2'b11 | mstatus_t[14:13] == 2'b11) ? 1'b1 :1'b0;
    assign sstatus_r[62 : 17] = 46'b0;
    assign sstatus_r[16 : 13] = rst ? 4'b0 : mstatus_t[16 : 13];
    assign sstatus_r[12 : 0] = 13'b0;

    always @(posedge clk)  begin
        if (~CoreLock)
        sstatus <= sstatus_r;
    end
     
    // mtvec
   wire [`REG_BUS]mtvec_t = ((WriteCSR == `mtvec) & WriteEnable) ? WriteData : mtvec;
   wire [`REG_BUS]mtvec_r; 
    assign mtvec_r[63 : 2] = mtvec_t[63 : 2];
    assign mtvec_r[1 : 0] = 2'b0;
    always @(posedge clk)  begin
        if (~CoreLock)
        mtvec                    <= mtvec_r;
    end
    
    // mie
    wire [`REG_BUS] mie_t = ((WriteCSR == `mie) & WriteEnable) ? WriteData : mie;
    wire [`REG_BUS] mie_r;
    assign mie_r = rst ? `ZERO_64 : mie_t;
    always @(posedge clk)  begin
        if (~CoreLock)
        mie                    <= mie_r;
    end
    // mip
    wire [`REG_BUS] mip_t = ((WriteCSR == `mip) & WriteEnable) ? WriteData : mip;
    wire [`REG_BUS] mip_r;
    assign mip_r[63 : 8] = 56'b0;
    assign mip_r[7] = rst ? 1'b0 : 1'b0;
    assign mip_r[6 : 0] = 7'b0;
    always @(posedge clk)  begin
        if (~CoreLock)
        mip                    <= mip_r;
    end

    // mpec
    wire [`REG_BUS]mepc_t = ((WriteCSR == `mepc) & WriteEnable) ? WriteData : mepc;
    wire [`REG_BUS]mepc_r; 
    assign mepc_r = (IRQtype != 2'b0) ? retAddr : mepc_t;
    always @(posedge clk)  begin
        if (~CoreLock)
        mepc                    <= mepc_r;
    end

    //mscratch 
    wire [`REG_BUS]mscratch_t = ((WriteCSR == `mscratch) & WriteEnable) ? WriteData :mscratch;
    wire [`REG_BUS]mscratch_r;
    assign mscratch_r = (rst == 1'b1) ? `ZERO_64 : mscratch_t;
    always @(posedge clk)  begin
        if (~CoreLock)
        mscratch                    <= mscratch_r;
    end

    // mcause
    wire [`REG_BUS]mcause_t = ((WriteCSR == `mcause ) & WriteEnable) ? WriteData : mcause;
    wire [`REG_BUS]mcause_r;
    // interrupt or trap
    assign mcause_r[63] = IRQtype[0] ? 1'b1 : IRQtype[1] ? 1'b0 : mcause_t[63];
    // cause
    assign mcause_r[62 : 0] = IRQtype[0] ? 63'h7 : IRQtype[1] ? 63'hb : mcause_t[62 : 0];
    always @(posedge clk)  begin
        if (~CoreLock)
        mcause                   <= mcause_r;
    end
    
    // mcycle
    always @(posedge clk) begin
        if ((WriteCSR == `mcycle) & WriteEnable)  mcycle <= WriteData;
        else mcycle                     <= mcycle + 1;
    end

    // minstret
    always @(posedge clk) begin
        if ((WriteCSR == `minstret) & WriteEnable)  minstret <=WriteData;
        else if(pcW != `ZERO_64) minstret <= minstret + 1;
    end

    assign ClintReadData = rst ? `ZERO_64 :
    (ClintReadAddr == 64'h200bff8) ? mtime :
    (ClintReadAddr == 64'h2004000) ? mtimecmp : `ZERO_64;


    // mtime
    reg [`REG_BUS] mtime;
    reg [2 : 0] timediv;
    always @(posedge clk) begin
        if ((ClintWriteAddr == 64'h200bff8) & ClintWriteEnable)  begin
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
        if ((ClintWriteAddr == 64'h2004000)&ClintWriteEnable) mtimecmp <=ClintWriteData;
        else mtimecmp <= mtimecmp;
    end 

    //信号传递
    wire [`REG_BUS]mtime_r = mtime;
    wire [`REG_BUS]mtimecmp_r = mtimecmp;
    // 只有mstatus.mie mie.mtie 置位时
    wire itTime_r = rst ? 1'b0 : mstatus[3]&mie[7] ? mtime_r >= mtimecmp_r : 1'b0;

    always @(posedge clk) begin
        if (~CoreLock ) begin
            itTime <= itTime_r;
        end
    end

    assign irqAddr = mtvec;
    assign mepc_o = mepc;


endmodule
