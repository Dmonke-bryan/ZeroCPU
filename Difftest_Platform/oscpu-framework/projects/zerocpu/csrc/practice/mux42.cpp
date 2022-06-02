#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include <Vmux42.h>
#include <verilated_vcd_c.h>

Vmux42 *top;

vluint64_t main_time = 0; //current simulation time 
VerilatedVcdC* tfp = new VerilatedVcdC;

double sc_time_stamp(){	
	return main_time;
}

void single_cycle(){
	top->eval();
	tfp->dump(main_time);
	main_time++;
}

int main(int argc, char** argv) {
  
	Verilated::commandArgs(argc,argv);
	//tracing on
	Verilated::traceEverOn(true);
	
	top = new Vmux42;	
	top->trace(tfp,99); //trace 99 
	printf("create the folder of logs\n");
	Verilated::mkdir("logs");
	tfp->open("logs/top_dump.vcd");

	printf("Hello, ysyx!\n");

	
	
	while(main_time<20 && !Verilated::gotFinish()){
	
		top->s = 0b00; 
		top->x0 = 0b00; top->x1=0b11; top->x2=0b10; top->x3=0b01;
    	single_cycle();

		top->s = 0b01;
		top->x0 = 0b00; top->x1=0b11; top->x2=0b10; top->x3=0b01;
		single_cycle();
		
		top->s = 0b10;
		top->x0 = 0b00; top->x1=0b11; top->x2=0b10; top->x3=0b01;
		single_cycle();

		top->s = 0b11;
		top->x0 = 0b00; top->x1=0b11; top->x2=0b10; top->x3=0b01;
		single_cycle();
		
	}

	top->final();
	tfp->close();

	delete top;
	return 0;
}