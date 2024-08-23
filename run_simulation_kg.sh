# /* Created by Hamna Mohiuddin @hamnamohi as a part of the Google Summer of Code 2024 Project. */

#!/bin/bash

g++ -c /home/hamna/Baby-Kyber-Accelerator/generate_random_number.cpp
verilator -Wall --trace -cc /home/hamna/Baby-Kyber-Accelerator/KeyGeneration.sv --exe /home/hamna/Baby-Kyber-Accelerator/KeyGeneration_tb.cpp /home/hamna/Baby-Kyber-Accelerator/generate_random_number.cpp -I /home/hamna/Baby-Kyber-Accelerator/PolynomialMatrixMultiplication.sv
make -j -C obj_dir -f VKeyGeneration.mk VKeyGeneration 

 ./obj_dir/VKeyGeneration

#  gtkwave keygen.vcd
