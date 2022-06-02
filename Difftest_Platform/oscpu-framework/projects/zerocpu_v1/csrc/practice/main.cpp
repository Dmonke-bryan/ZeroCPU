#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include <Vtop.h>
#include <verilated_vcd_c.h>

Vtop *top;

vluint64_t main_time = 0; //current simulation time 

double sc_time_stamp(){	
	return main_time;
}


int main(int argc, char** argv) {
  
	Verilated::commandArgs(argc,argv);
	//tracing on
	Verilated::traceEverOn(true);
	VerilatedVcdC* tfp = new VerilatedVcdC;
	top = new Vtop;	
	top->trace(tfp,99); //trace 99 
	printf("create the folder of logs\n");
	Verilated::mkdir("logs");
	tfp->open("logs/top_dump.vcd");

	printf("Hello, ysyx!\n");

	
	
	while(main_time<20 && !Verilated::gotFinish()){
	
		int a = rand() & 1;
		int b = rand() & 1;
		top->a = a;
		top->b = b;
    	top->eval();
		printf("a=%d,b=%d,f=%d\n",a,b,top->f);
		//assert(top->f == a^b);
		tfp->dump(main_time);
		main_time++;

	}

	top->final();
	tfp->close();

	delete top;
	return 0;
}
