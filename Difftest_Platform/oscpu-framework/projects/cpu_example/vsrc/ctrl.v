
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

    output flushD,
    output flushE,

    output stallF,
    output stallD,
    output stallE

);


// 差一个周期有读取ram冲突和普通寄存器冲突
wire [1 : 0] Redirect1_r = (~{load,load}) & 
                           {(rdWriteAddrE == rs2ReadAddr)&rs2ReadEnable,
                           (rdWriteAddrE == rs1ReadAddr)&rs1ReadEnable};
// 前一个读取ram后一个使用目标寄存器
wire [1 : 0]ReadLoad = ({load,load}) & 
                           {(rdWriteAddrE == rs2ReadAddr)&rs2ReadEnable,
                           (rdWriteAddrE == rs1ReadAddr)&rs1ReadEnable}; 

// 差两个周期有读取ram冲突和普通寄存器冲突
wire [1 : 0] Redirect2_r = (~Redirect1_r) & {(rdWriteAddrM == rs2ReadAddr)&rs2ReadEnable,(rdWriteAddrM == rs1ReadAddr)&rs1ReadEnable};

wire stallF_r = (rst == 1'b1) ? 1'b0 : (ReadLoad != 0) ? 1'b1 : 1'b0;
wire stallD_r = (rst == 1'b1) ? 1'b0 : (ReadLoad != 0) ? 1'b1 : 1'b0;
wire stallE_r = (rst == 1'b1) ? 1'b0 : (ReadLoad != 0) ? 1'b1 : 1'b0;
wire stallC_r = (rst == 1'b1) ? 1'b0 : (ReadLoad != 0) ? 1'b1 : 1'b0;

//一拍后暂停
wire stallC;
gen_en_dff #(1) stallF_dff(stallF_r,stallF,1'b0,1'b0,clk,rst);
gen_en_dff #(1) stallD_dff(stallD_r,stallD,1'b0,1'b0,clk,rst);
gen_en_dff #(1) stallE_dff(stallE_r,stallE,1'b0,1'b0,clk,rst);
gen_en_dff #(1) stallC_dff(stallC_r,stallC,1'b0,1'b0,clk,rst);
//暂停后数据重定向
gen_en_dff #(2) ReadLoad2_dff(ReadLoad,LoadRedirect,stallC,1'b0,clk,rst);

gen_en_dff #(2) Redirect1_dff(Redirect1_r,Redirect1,stallC,1'b0,clk,rst);
gen_en_dff #(2) Redirect2_dff(Redirect2_r,Redirect2,stallC,1'b0,clk,rst);

assign flushD = (rst == 1'b1) ? 1'b0 : (jump == 1'b1) ? 1'b1 : 1'b0;
assign flushE = (rst == 1'b1) ? 1'b0 : (jump == 1'b1) ? 1'b1 : 1'b0;



endmodule
