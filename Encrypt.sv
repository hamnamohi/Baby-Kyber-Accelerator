/* Created By Hamna Mohiuddin @hamnamohi as a Google Summer of Code 2024 Project.

DESCRIPTION:
Encryption in Baby Kyber involves generating a ciphertext from a given message using the public key, 
random polynomial vectors, and error polynomials. The process includes polynomial matrix multiplication, 
modular reduction, and the addition of error vectors.

The message is converted into a polynomial based on its binary representation. 
For example, the binary representation of the number 11 is 1011, leading to the polynomial mb = x3 + x + 1. 
This polynomial is then scaled by multiplying it with ⌊ q / 2 ⌉ = 9 , where q = 17, resulting in the scaled 
polynomial m = 9x3+ 9x +9.

The public key, consisting of a matrix A and a vector t, is multiplied by the random polynomial vector r to 
compute the intermediate values u and v. These intermediate results are reduced modulo q and combined with error vectors e1 and e2​, 
as well as the scaled message polynomial m, to form the final ciphertext:

                                                    u = AT*r + e1

                                                    v = tT*r + e2 +m

 */

module Encrypt (
    input logic clk,
    input logic rst_n,
    input logic enable,
    input logic [31:0] message,
    input logic signed [31:0] r [1:0][3:0],
    input logic signed [31:0] e1 [1:0][3:0],
    input logic signed [31:0] e2 [3:0],
    input logic signed [31:0] combined_output [1:0][3:0][3:0],
    output logic signed [31:0] ciphertext[1:0] [1:0][3:0]
);

    logic signed [31:0] transposed_matrix [3:0][3:0];
    logic signed [31:0] poly_out0 [3:0];
    logic signed [31:0] poly_out1 [3:0];
    logic signed [31:0] poly_out2 [3:0];
    logic signed [31:0] poly_out3 [3:0];
    logic signed [31:0] poly_out4 [3:0];
    logic signed [31:0] poly_out5 [3:0];
    logic signed [31:0] added [3:0];
    logic signed [31:0] added1 [3:0];
    logic signed [31:0] added2 [3:0];
    logic signed [3:0] coefficients;
    logic signed [31:0] coefficients_scaled [3:0];
    logic signed [31:0] u [1:0][3:0];
    logic signed [31:0] v [3:0];
    logic signed [31:0] temp [3:0];

    MatrixTranspose transpose_inst (
        .matrix_in(combined_output[0]),
        .matrix_out(transposed_matrix)
    );

    PolynomialMatrixMultiplication poly_mult_inst (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .polynomial1(transposed_matrix[0]),
        .polynomial2(r[0]),
        .polynomial_out(poly_out0)
    );

    PolynomialMatrixMultiplication poly_mult_inst1 (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .polynomial1(transposed_matrix[1]),
        .polynomial2(r[1]),
        .polynomial_out(poly_out1)
    );

    PolynomialMatrixMultiplication poly_mult_inst2 (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .polynomial1(transposed_matrix[2]),
        .polynomial2(r[0]),
        .polynomial_out(poly_out2)
    );

    PolynomialMatrixMultiplication poly_mult_inst3 (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .polynomial1(transposed_matrix[3]),
        .polynomial2(r[1]),
        .polynomial_out(poly_out3)
    );

    PolynomialMatrixMultiplication poly_mult_inst4 (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .polynomial1(combined_output[1][0]),
        .polynomial2(r[0]),
        .polynomial_out(poly_out4)
    );

    PolynomialMatrixMultiplication poly_mult_inst5 (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .polynomial1(combined_output[1][1]),
        .polynomial2(r[1]),
        .polynomial_out(poly_out5)
    );

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
                for (int j = 0; j < 4; j++) begin
                    coefficients[j] <= 0;

                end
            
        end else if (enable) begin
            
            for (int i = 0; i < 4; i++) begin
                    coefficients[i] <= message[i];

                end

           
        end
    end

    always_comb begin
        for (int i = 0; i < 4; i++) begin
            added[i] = 0;
            added1[i] = 0;
            added2[i] = 0;
            u[0][i] = 0;
            u[1][i] = 0;
        end
        if (enable) begin
            
            for (int i = 0; i < 4; i++) begin
                
                added[i] = (poly_out0[i] + poly_out1[i]);
                added1[i] = (poly_out2[i] + poly_out3[i]);
                added2[i] = (poly_out4[i] + poly_out5[i]); 

                if (added[i] < 0) begin
                    added[i] = added[i]; 
                end else begin
                    added[i] = (added[i] % 17);
                end

                if (added1[i] < 0) begin
                    added1[i] = added1[i] ;
                end else begin
                    added1[i] = (added1[i] % 17);
                end

                if (added2[i] < 0) begin
                    added2[i] = added2[i];
                end else begin
                    added2[i] = (added2[i] % 17);
                end
               
            end
           
            for (int i = 0; i < 4; i++) begin
                u[0][i] = added[i] + e1[0][i];
                u[1][i] = added1[i] + e1[1][i];
                 if ( u[0][i]  < 0) begin
                     u[0][i]  = u[0][i] ;
                end else begin
                     u[0][i]  = ( u[0][i]  % 17);
                end
                if ( u[1][i]  < 0) begin
                     u[1][i]  = u[1][i] ;
                end else begin
                     u[1][i]  = ( u[1][i]  % 17);

                
            end
        end
    end
    end
    always_comb begin
        for (int i = 0; i < 4; i++) begin
            if (coefficients[i] == 1) begin
                coefficients_scaled[i] = 9;  // Multiply by qhalf = 9
            end else begin
                coefficients_scaled[i] = 0;  
            end
        end
    end

    always_comb begin

        for (int i = 0; i < 4; i++) begin
            
            v[i] = (added2[i] + e2[i]) - coefficients_scaled[3-i];
             if ( v[i] < 0) begin
                     v[i] = v[i] + 17;
                end else begin
                     v[i] = ( v[i] % 17);
                end
            
        end
        for (int i = 0; i < 2; i++) begin
            
            for (int j = 0; j < 4; j++) begin
                ciphertext[0][i][j] = u[i][j];
                ciphertext[1][0][j] = v[j];
            end
        end
    end

endmodule
