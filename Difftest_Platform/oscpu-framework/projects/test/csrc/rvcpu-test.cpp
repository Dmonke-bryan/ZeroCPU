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
static const vluint64_t sim_time = 50000;

uint64_t ram[1024 * 1024];

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
	char filename[100];
	uint64_t readAddr;
	uint64_t writeAddr;
	printf("Please enter your filename~\n");
	cin >> filename;
	read_inst(filename);

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
			 readAddr = (top->RamReadAddr)%0x80000000;
		     top->RamReadData = ram[readAddr>>3];
		     printf("read data %x,at : %x\r\n",ram[readAddr>>3],top->RamReadAddr);
		  }
		  if(top->RamWriteEnable){ 
			writeAddr = top->RamWriteAddr%0x80000000;
		    ram[writeAddr>>3] = (ram[writeAddr>>3]& ~top->RamWriteMask )
			                         | (top->RamWriteData & top->RamWriteMask);
		    printf("write data %x\r\n",ram[writeAddr>>3]);
		  }

		  
	  }
	  if( main_time % 10 == 5 ) {
		  top->clk = 1;
		  top->instF = *(uint32_t*)((uint8_t*)ram+(top->pcF-0x80000000));
	  }
		  
	  if( main_time < 10 )
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
