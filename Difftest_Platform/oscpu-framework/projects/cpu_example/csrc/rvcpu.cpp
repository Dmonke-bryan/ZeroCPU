// --xuezhen--
//rvcpu-test.cpp
#include <verilated.h>          
#include <verilated_vcd_c.h>    
#include <iostream>
#include <fstream>
#include "Vrvcpu.h"

using namespace std;

static Vrvcpu* top;
static VerilatedVcdC* tfp;
static vluint64_t main_time = 0;
static const vluint64_t sim_time = 10000;

uint64_t ram[1024 * 1024];

void init_inst()
{
	ram[0] = 0;
	ram[1] = 1048723;
	ram[2] = 2097299;
	ram[3] = 1081491;

	for (int i=4;i<200;i++)
	{
		ram[i] = 0;
	}
}


void read_inst( char* filename)
{
  FILE *fp = fopen(filename, "rb");
  if( fp == NULL ) {
		printf( "Can not open this file!\n" );
		exit(1);
  }
  
  fseek(fp, 0, SEEK_END);
  size_t size = ftell(fp);
  fseek(fp, 0, SEEK_SET);
  size = fread((uint32_t*)ram, size, 1, fp);
  fclose(fp);
}

int main(int argc, char **argv)
{
	/*
	char filename[100];
	printf("Please enter your filename~\n");
	cin >> filename;
	read_inst(filename);
	*/
	init_inst();
  // initialization
  Verilated::commandArgs(argc, argv);
  Verilated::traceEverOn(true);

	top = new Vrvcpu;
  tfp = new VerilatedVcdC;

  top->trace(tfp, 99);
  tfp->open("top.vcd");
	
	while( !Verilated::gotFinish() && main_time < sim_time )
	{
	  if( main_time % 10 == 0 ) 
	  {
		  top->clk = 0;
		  if(top->RamReadEnable) {
		     top->RamReadData = ram[top->RamReadAddr];
		     printf("read data %x\r\n",ram[top->RamReadAddr]);
		  }
		  if(top->RamWriteEnable){ 
		    ram[top->RamWriteAddr] = (ram[top->RamWriteAddr]& ~top->RamWriteMask )
			                         | (top->RamWriteData & top->RamWriteMask);
		    printf("write data %x\r\n",ram[top->RamWriteAddr]);
		  }

		  
	  }
	  if( main_time % 10 == 5 ) {
		  top->clk = 1;
		  if((top->pcEnableF==1) | (main_time == 15)) top->instF = *(uint32_t*)((uint8_t*)ram+top->pcF);
	  }
		  
	  if( main_time < 15 )
	  {
		top->rst = 1;
	  }
	  else
	  {
	    top->rst = 0;
	  }
	  top->eval();
	  tfp->dump(main_time);
	  main_time++;
	}
		
  // clean
  tfp->close();
  delete top;
  delete tfp;
  exit(0);
  return 0;
}
