# /* Created by Hamna Mohiuddin @hamnamohi as a part of the Google Summer of Code 2024 Project. */
#!/bin/bash

verilator -Wall --trace -cc /home/hamna/Baby-Kyber-Accelerator/Decrypt.sv --exe /home/hamna/Baby-Kyber-Accelerator/Decrypt_tb.cpp -I /home/hamna/Baby-Kyber-Accelerator/PolynomialMatrixMultiplication.sv
make -j -C obj_dir -f VDecrypt.mk VDecrypt

 ./obj_dir/VDecrypt

#  gtkwave decrypt.vcd
