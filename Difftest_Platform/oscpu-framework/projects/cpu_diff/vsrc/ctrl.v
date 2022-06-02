
/* verilator lint_off UNDRIVEN */
/* verilator lint_off UNUSED */
`timescale 1ns / 1ps
`include "defines.v"

module ctrl (input jalbranch,                     //跳转和分支指令
             input [`ADDR_BUS]jumpAddr,
             input LoadStoreE,                     //ram读取指令
             input LoadStoreM,                     //ram读取指令
             input mecall,                     //陷阱信号
             input mret,
             input itTime,                   //时钟中断信号
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
             output wire [1 : 0]IRQtypeW,      // 10 trap 01 itTime
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
                    rst ? 1'b0 : itTime_r};

    wire IRQret_r = mret;
    assign jAddr = (IRQtype_r != 2'b0) ? irqAddr : 
                   mret ? mepc_o : 
                   jalbranch ? jumpAddr : `ZERO_64;

    wire itTime_r  = rst ? 1'b0 : ((pcE != `ZERO_64) & ~jalbranch) & (itWhit|itTime);
    reg itWhit;
    always @ (posedge clk) begin
       if(rst == 1'b0) begin
           itWhit <= 1'b0;
       end 
       else if((pcE == `ZERO_64) | jalbranch) begin
           itWhit <= itWhit | itTime;
       end
       else begin
           itWhit <= 1'b0;
       end
    end

    wire [`ADDR_BUS] mepcWriteData_r = mecall ? pcE : 
                     itTime_r ? (pcE != `ZERO_64) ? pcE :
                              (pcD != `ZERO_64) ? pcD :
                              (pcF != `ZERO_64) ? pcF :`ZERO_64 :`ZERO_64;    
    
    assign stallF = ~flushF & (rst ? 1'b0 : 
                              CoreLock ? 1'b1 : 
                              (LoadStoreE | LoadStoreM) ? 1'b1 : 
                              IRQret ? 1'b1 :
                              IRQretW ? 1'b1 :
                              (IRQtype != 2'b0) ? 1'b1 :
                              (IRQtypeW != 2'b0) ? 1'b1 : 1'b0);
    
    assign stallD = rst ? 1'b0 :  
                    CoreLock ? 1'b1 :1'b0;
    assign stallE = rst ? 1'b0 : CoreLock ? 1'b1 :1'b0;
    assign stallM = rst ? 1'b0 : CoreLock ? 1'b1 :1'b0;
    assign stallW = rst ? 1'b0 : CoreLock ? 1'b1 :1'b0;
    
    assign flushF = rst ? 1'b0 : 
                    IRQret_r ? 1'b1 :
                    (IRQtype_r != 2'b0) ? 1'b1 : 
                    jalbranch ? 1'b1 : 1'b0;
    assign flushD = rst ? 1'b0 : 
                    IRQret_r ? 1'b1 :
                    IRQret ? 1'b1 :
                    IRQretW ? 1'b1 :
                   (IRQtype_r != 2'b0) ? 1'b1 :
                   (IRQtype != 2'b0) ? 1'b1 :
                   (IRQtypeW != 2'b0) ? 1'b1 :
                    (LoadStoreE | LoadStoreM) ? 1'b1 :
                   jalbranch ? 1'b1 : 1'b0;
    assign flushE = rst ? 1'b0 :
                    LoadStoreM ? 1'b1 :
                    IRQtype_r[0] ? 1'b1 : 
                    jalbranch? 1'b1 :1'b0;
    assign flushM = rst ? 1'b0 : 1'b0;
    
    assign jump = jalbranch | mecall | mret | itTime_r;

    // ID -> EXE 阶段触发器 
    gen_en_dff #(2) Redirect1_dff(Redirect1_r ,Redirect1,1'b1&(~CoreLock),clk,rst | flushD);
    gen_en_dff #(2) Redirect2_dff(Redirect2_r ,Redirect2,1'b1&(~CoreLock),clk,rst | flushD);

    // EXE -> MEM 触发器
    gen_en_dff #(2) IRQtype_dff(IRQtype_r,IRQtype,1'b1&(~CoreLock),clk,rst);
    gen_en_dff #(64) mepcWriteData_dff(mepcWriteData_r,mepcWriteData,1'b1&(~CoreLock),clk,rst);
    gen_en_dff #(1) IRQret_dff(IRQret_r,IRQret,1'b1&(~CoreLock),clk,rst);
//todo : mret还没改，ctrl里面的需要改成irqtype_r 
    wire [1 : 0]IRQtype;
    wire IRQret;
    wire [`ADDR_BUS] mepcWriteData;  
    //MEM -> WB 触发器
    gen_en_dff  #(64) mepcWriteDataW_dff(mepcWriteData ,mepcWriteDataW,1'b1&(~CoreLock), clk,rst);
    gen_en_dff  #(2) IRQtypeW_dff(IRQtype ,IRQtypeW,1'b1&(~CoreLock), clk,rst);
    gen_en_dff #(1) IRQretW_dff(IRQret,IRQretW,1'b1&(~CoreLock), clk,rst);
    
endmodule
