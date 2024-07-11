verilator -Wall --trace -cc MatrixTranspose.sv --exe MatrixTranspose_tb.cpp
make -j -C obj_dir -f VMatrixTranspose.mk VMatrixTranspose

 ./obj_dir/VMatrixTranspose