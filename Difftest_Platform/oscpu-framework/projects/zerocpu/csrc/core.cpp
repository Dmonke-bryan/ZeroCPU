#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include <Vcore.h>
#include <verilated_vcd_c.h>

Vcore *top;

vluint64_t main_time = 0; //current simulation time 
VerilatedVcdC* tfp = new VerilatedVcdC;

double sc_time_stamp(){	
	return main_time;
}

void single_cycle(){
	top->clk = 0; top->eval();
	tfp->dump(main_time);
	main_time++;
	top->clk = 1; top->eval();
	tfp->dump(main_time);
	main_time++;
}

void reset(int n){
	top->rst_n = 0;
	while(n-->0) single_cycle();
	top->rst_n = 1;
}

int main(int argc, char** argv) {
  
	Verilated::commandArgs(argc,argv);
	//tracing on
	Verilated::traceEverOn(true);
	
	top = new Vcore;	
	top->trace(tfp,99); //trace 99 
	printf("create the folder of logs\n");
	Verilated::mkdir("logs");
	tfp->open("logs/top_dump.vcd");

	printf("Hello, ysyx!\n");

	reset(5);
	
	while(main_time<20 && !Verilated::gotFinish()){
	
		single_cycle();
		
	}

	top->final();
	tfp->close();

	delete top;
	return 0;
}