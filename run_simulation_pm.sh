#!/bin/bash
verilator -Wall --trace -cc PolynomialMatrixMultiplication.sv --exe PolynomialMatrixMultiplication_tb.cpp
make -j -C obj_dir -f VPolynomialMatrixMultiplication.mk VPolynomialMatrixMultiplication

 ./obj_dir/VPolynomialMatrixMultiplication

 gtkwave pmm.vcd
