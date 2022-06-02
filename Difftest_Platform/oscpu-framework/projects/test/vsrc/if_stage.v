
/* verilator lint_off UNUSED */
//--xuezhen--

`include "defines.v"

module if_stage(
  input wire clk,
  input wire rst,
  input wire jump,
  input wire stallF,
  input wire flushF,
  input wire [`ADDR_BUS] jumpAddr,
  input wire [`INST_BUS]instF,
  
  output wire [`ADDR_BUS] pcF,
  output wire [`ADDR_BUS] pcD,
  output wire        pcEnableF,
  output wire [`INST_BUS]instD
  
);

wire            pcEnableF_r;
reg  [`REG_BUS] pc;

// fetch an instruction

always @(posedge clk) begin
  if(rst == 1'b1) begin
    pc <= 64'h80000000; 
  end
  else if (jump)
    pc <= jumpAddr + 4;
  else if (stallF)
    pc <= pc;
  else begin
    pc <= pc + 4;
  end
end

assign pcF = (rst ==1'b1) ? 64'h80000000 : (jump == 1'b1) ? jumpAddr : pc;
gen_en_dff #(64) pcD_dff(pcF,pcD,stallF,1'b0,clk,rst);
assign pcEnableF_r  = ( rst == 1'b1 ) ? 1'b0 : 1'b1;
gen_en_dff #(1) pcEnableF_dff(pcEnableF_r,pcEnableF,stallF,1'b0,clk,rst);
//gen_en_dff #(1) pcEnableD_dff(pcEnableF,pcEnableD,stallF,1'b0,clk,rst);
gen_en_dff #(32) instE_dff(instF,instD,stallF,1'b0,clk,rst);

endmodule

