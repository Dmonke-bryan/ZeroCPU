#!/bin/bash

#simulation 
#./build.sh -e zerocpu -b -t zerocore.v -s

#diff test - addi
#./build.sh -e zerocpu -d -b -s -a "-i inst_diff.bin"
./build.sh -e cpu_diff -d -b -s -a "-i inst_diff.bin --dump-wave -b 0"
