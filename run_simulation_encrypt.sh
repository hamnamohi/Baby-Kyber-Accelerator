#!/bin/bash

g++ -c /home/hamna/Baby-Kyber-Accelerator/rtl/generate_random_number.cpp
verilator -Wall --trace -cc /home/hamna/Baby-Kyber-Accelerator/rtl/Encrypt.sv --exe /home/hamna/Baby-Kyber-Accelerator/rtl/Encrypt_tb.cpp /home/hamna/Baby-Kyber-Accelerator/rtl/generate_random_number.cpp -I /home/hamna/Baby-Kyber-Accelerator/rtl/PolynomialMatrixMultiplication.sv -I /home/hamna/Baby-Kyber-Accelerator/rtl/MatrixTranspose.sv -I /home/hamna/Baby-Kyber-Accelerator/rtl/RandomNumberGenerator.sv
make -j -C obj_dir -f VEncrypt.mk VEncrypt

 ./obj_dir/VEncrypt

#  gtkwave keygen.vcd
