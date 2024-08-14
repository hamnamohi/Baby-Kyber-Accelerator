#!/bin/bash

g++ -c generate_random_number.cpp
verilator -Wall --trace -cc Encrypt.sv --exe Encrypt_tb.cpp generate_random_number.cpp
make -j -C obj_dir -f VEncrypt.mk VEncrypt

 ./obj_dir/VEncrypt

#  gtkwave keygen.vcd
