#!/bin/bash

g++ -c generate_random_number.cpp
verilator -Wall --trace -cc KeyGeneration.sv --exe KeyGeneration_tb.cpp generate_random_number.cpp
make -j -C obj_dir -f VKeyGeneration.mk VKeyGeneration

 ./obj_dir/VKeyGeneration

#  gtkwave keygen.vcd
