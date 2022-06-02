#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <verilated.h>
#include <Vaddsub4.h>
#include <verilated_vcd_c.h>

Vaddsub4 *top;

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

int check_res(int ina, int inb, int sel){

	int expect;
	if(sel){
		expect = ina - inb;
	} else {
		expect = ina + inb;
	}
	
	return expect;
}

int main(int argc, char** argv) {
  
	Verilated::commandArgs(argc,argv);
	//tracing on
	Verilated::traceEverOn(true);
	
	top = new Vaddsub4;	
	top->trace(tfp,99); //trace 99 
	printf("create the folder of logs\n");
	Verilated::mkdir("logs");
	tfp->open("logs/top_dump.vcd");

	printf("Hello, ysyx!\n");

	int assert_flag;
	int check;
	
	while(main_time<2 && !Verilated::gotFinish()){
	
		top->a = 0b1000; 
		top->b = 0b0010; 
		top->sel = 0b1;
    	single_cycle();
		check =  check_res(top->a, top->b, top->sel);
		printf("check is %d\n", check);
		printf("result is %d\n", top->result);
		assert(check==top->result);
		
	}

	top->final();
	tfp->close();

	delete top;
	return 0;
}