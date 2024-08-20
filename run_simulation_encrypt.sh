#!/bin/bash

g++ -c /home/hamna/Baby-Kyber-Accelerator/generate_random_number.cpp
verilator -Wall --trace -cc /home/hamna/Baby-Kyber-Accelerator/Encrypt.sv --exe /home/hamna/Baby-Kyber-Accelerator/Encrypt_tb.cpp /home/hamna/Baby-Kyber-Accelerator/generate_random_number.cpp -I /home/hamna/Baby-Kyber-Accelerator/PolynomialMatrixMultiplication.sv -I /home/hamna/Baby-Kyber-Accelerator/MatrixTranspose.sv 
make -j -C obj_dir -f VEncrypt.mk VEncrypt
./obj_dir/VEncrypt

#  gtkwave keygen.vcd
