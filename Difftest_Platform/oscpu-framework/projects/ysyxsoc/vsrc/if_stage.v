
/* verilator lint_off UNUSED */
//--xuezhen--
`timescale 1ns / 1ps
`include "defines.v"

module if_stage(input wire clk,
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
            pc <= 64'h80000000;
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
    gen_en_dff #(64) pcD_dff(pcF,pcD,~stallF,clk,rst);
    assign pcEnable = (rst == 1'b1) ? 1'b0 : 1'b1;
    //gen_en_dff #(1) pcEnableF_dff(pcEnableF_r,pcEnableF,~stallF,clk,rst);
    gen_en_dff #(32) instD_dff(instF,instD,~stallF,clk,rst);

    
endmodule
    
