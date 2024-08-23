# /* Created by Hamna Mohiuddin @hamnamohi as a part of the Google Summer of Code 2024 Project. */

#!/bin/bash

g++ -c generate_random_number.cpp

verilator -Wall --trace -cc RandomNumberGenerator.sv --exe RandomNumberGenerator_tb.cpp /home/hamna/Baby-Kyber-Accelerator/generate_random_number.o

make -j -C obj_dir -f VRandomNumberGenerator.mk VRandomNumberGenerator

 ./obj_dir/VRandomNumberGenerator

#  gtkwave rng.vcd