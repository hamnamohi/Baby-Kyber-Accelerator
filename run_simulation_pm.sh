#!/bin/bash
verilator -Wall --trace -cc /home/hamna/Baby-Kyber-Accelerator/rtl/PolynomialMatrixMultiplication.sv --exe /home/hamna/Baby-Kyber-Accelerator/rtl/PolynomialMatrixMultiplication_tb.cpp
make -j -C obj_dir -f VPolynomialMatrixMultiplication.mk VPolynomialMatrixMultiplication

 ./obj_dir/VPolynomialMatrixMultiplication

 gtkwave pmm.vcd
