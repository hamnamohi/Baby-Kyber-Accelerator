#!/bin/bash

# Clean previous build files
g++ -c random_generator.cpp

verilator -Wall --trace -cc RandomNumberGenerator.sv --exe RandomNumberGenerator_tb.cpp /home/hamna/Baby-Kyber-Accelerator/random_generator.o

make -j -C obj_dir -f VRandomNumberGenerator.mk VRandomNumberGenerator

 ./obj_dir/VRandomNumberGenerator

 gtkwave rng.vcd