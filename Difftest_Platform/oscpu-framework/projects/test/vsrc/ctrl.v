
/* verilator lint_off UNDRIVEN */
/* verilator lint_off UNUSED */

`include "defines.v"

module ctrl (
    input jump,                            //跳转和分支指令
    input load,                            //ram读取指令
    input wire clk,
    input wire rst,
    input wire [4 : 0]rdWriteAddrE,        //差一周期的写回数据
    input wire [4 : 0]rdWriteAddrM,        //差两周期的写回数据
    
    // <- id单元
    input wire rs1ReadEnable,             //寄存器1读使能
    input wire rs2ReadEnable,             //寄存器2读使能
    input wire [4 : 0]rs1ReadAddr,          
    input wire [4 : 0]rs2ReadAddr,        //需要读取的两个寄存器数据
 
    output wire [1 : 0]Redirect1,          //差一周期重定向寄存器 2b‘10 rs2  2b’01 rs1
    output wire [1 : 0]Redirect2,          //差二周期重定向寄存器 2b‘10 rs2  2b’01 rs1
    output wire [1 : 0]LoadRedirect,       //load指令后暂停一周期后的数据重定向

    output flushF,
    output flushD,
    output flushE,

    output stallF,
    output stallD,
    output stallE

);


// 差一个周期有读取ram冲突和普通寄存器冲突
wire [1 : 0] Redirect1_r = {(rdWriteAddrE == rs2ReadAddr)&rs2ReadEnable,
                           (rdWriteAddrE == rs1ReadAddr)&rs1ReadEnable};

// 差两个周期有读取ram冲突和普通寄存器冲突
wire [1 : 0] Redirect2_r = ((~Redirect1_r) & 
                           {(rdWriteAddrM == rs2ReadAddr)&rs2ReadEnable,
                           (rdWriteAddrM == rs1ReadAddr)&rs1ReadEnable});

assign stallF = ~flushF & ((rst == 1'b1) ? 1'b0 : (load != 0)  ? 1'b1 :1'b0);
wire   flushC = (rst == 1'b1) ? 1'b0 : (load != 0)  ? 1'b1 :1'b0;
//wire stallD = (rst == 1'b1) ? 1'b0 : (load != 0) ? stallD ? 1'b0 : 1'b1 :1'b0;
//wire stallC = (rst == 1'b1) ? 1'b0 : (load != 0) ? 1'b1 :1'b0;


/*
gen_en_dff #(1) stallF_dff(stallF_r,stallF,1'b0,1'b0,clk,rst);
gen_en_dff #(1) stallD_dff(stallD_r,stallD,1'b0,1'b0,clk,rst);
gen_en_dff #(1) stallC_dff(stallC_r,stallC,1'b0,1'b0,clk,rst);
*/

//暂停后数据重定向
//gen_en_dff #(2) ReadLoad2_dff(ReadLoad,LoadRedirect,,1'b0,clk,rst);

gen_en_dff #(2) Redirect1_dff(Redirect1_r,Redirect1,1'b0,flushC,clk,rst);
gen_en_dff #(2) Redirect2_dff(Redirect2_r,Redirect2,1'b0,flushC,clk,rst);

assign flushF = (rst == 1'b1) ? 1'b0 : (jump == 1'b1) ? 1'b1 : 1'b0;
assign flushD = (rst == 1'b1) ? 1'b0 : (jump == 1'b1) ? 1'b1 : (load == 1'b1) ? 1'b1 : 1'b0;
assign flushE = (rst == 1'b1) ? 1'b0 : (jump == 1'b1) ? 1'b1 : 1'b0;



endmodule