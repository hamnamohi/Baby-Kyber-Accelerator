#!/bin/bash

g++ -c /home/hamna/Baby-Kyber-Accelerator/rtl/generate_random_number.cpp
verilator -Wall --trace -cc /home/hamna/Baby-Kyber-Accelerator/rtl/KeyGeneration.sv --exe /home/hamna/Baby-Kyber-Accelerator/rtl/KeyGeneration_tb.cpp /home/hamna/Baby-Kyber-Accelerator/rtl/generate_random_number.cpp -I /home/hamna/Baby-Kyber-Accelerator/rtl/PolynomialMatrixMultiplication.sv -I /home/hamna/Baby-Kyber-Accelerator/rtl/RandomNumberGenerator.sv
make -j -C obj_dir -f VKeyGeneration.mk VKeyGeneration

 ./obj_dir/VKeyGeneration

#  gtkwave keygen.vcd
