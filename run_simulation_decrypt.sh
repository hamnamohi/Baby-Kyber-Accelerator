#!/bin/bash

verilator -Wall --trace -cc /home/hamna/Baby-Kyber-Accelerator/rtl/Decrypt.sv --exe /home/hamna/Baby-Kyber-Accelerator/rtl/Decrypt_tb.cpp -I /home/hamna/Baby-Kyber-Accelerator/rtl/PolynomialMatrixMultiplication.sv
make -j -C obj_dir -f VDecrypt.mk VDecrypt

 ./obj_dir/VDecrypt

#  gtkwave decrypt.vcd
