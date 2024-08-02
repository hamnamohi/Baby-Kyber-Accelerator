#!/bin/bash

verilator -Wall --trace -cc Decrypt.sv --exe Decrypt_tb.cpp 
make -j -C obj_dir -f VDecrypt.mk VDecrypt

 ./obj_dir/VDecrypt

 gtkwave decrypt.vcd
