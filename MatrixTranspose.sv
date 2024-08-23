/* Created by Hamna Mohiuddin @hamnamohi as a part of the Google Summer of Code 2024 Project. */

module MatrixTranspose #(
) (
    
    input  logic signed [31:0] matrix_in [3:0][3:0], 
    output logic signed [31:0] matrix_out [3:0][3:0] 
);
    always_comb begin
        matrix_out[0] = matrix_in[0];
        matrix_out[1] = matrix_in[2];
        matrix_out[2] = matrix_in[1];
        matrix_out[3] = matrix_in[3];
    end
endmodule
