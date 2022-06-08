
.PHONY: select specific .v file
TOPNAME = zerocore
CSRC_NAME = $(TOPNAME)
VSRC_NAME = $(TOPNAME)

VERILATOR = verilator 
VERILATOR_CFLAGS += -Wall --cc --exe --trace --build -y ./vsrc

BUILD_DIR = ./obj_dir
BIN = $(BUILD_DIR)/$(TOPNAME)

CSRC = ./csrc/$(CSRC_NAME).cpp
VSRC = ./vsrc/$(VSRC_NAME).v


all:
	@echo "Write this Makefile by your self."
	

sim:
	@echo "Generate simulated file and build executable file"
	$(VERILATOR) $(VERILATOR_CFLAGS) $(CSRC) $(VSRC) 

run:
	@echo "run simulated file"
	./obj_dir/V$(TOPNAME)

rung: 
<<<<<<< HEAD
	gtkwave top.vcd
=======
	@echo "INVALID: gtkwave ./logs/top_dump.vcd"
	gtkwave top.vcd &
>>>>>>> c5d3714addcabc440caec53b5c140c9c63927893

clean:
	@echo "clean the project"
	rm -rf obj_dir

#include ../Makefile
