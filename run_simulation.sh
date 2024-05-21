#!/bin/bash

# Clean previous build files
rm -rf obj_dir

# Compile SystemVerilog code with Verilator
verilator -Wall --trace -cc /home/hamna/Baby-Kyber-Accelerator/src/RandomNumberGenerator.sv -exe /home/hamna/Baby-Kyber-Accelerator/src/RandomNumberGenerator_tb.cpp

# Build the C++ testbench
make -j -C obj_dir -f /home/hamna/Baby-Kyber-Accelerator/obj_dir/VRandomNumberGenerator.mk VRandomNumberGenerator

# Generate a random delay (between 1 and 5 seconds) to ensure a different seed each time
sleep $(shuf -i 1-5 -n 1)

# Run the testbench
./obj_dir/VRandomNumberGenerator
