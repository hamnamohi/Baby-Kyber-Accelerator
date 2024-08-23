/* Created By Hamna Mohiuddin @hamnamohi as a Google Summer of Code 2024 Project.

DESCRIPTION:
Decryption in Baby Kyber reconstructs the original binary message from the ciphertext 
using the secret key. 
The process involves calculating a noisy polynomial mn​, reducing it modulo q, and then recovering 
the original binary message mb​ by analyzing the coefficients.
The ciphertext and secret key are multiplied using the PolynomialMatrixMultiplication module, 
yielding polynomial products. These products are subtracted from the ciphertext to obtain the noisy result mn​:
                                                        mn = v - sT*u
Negative values in mn are adjusted to ensure all coefficients are within the range [0, q].
The coefficients of mn are rounded based on their proximity to ⌊ q / 2 ⌉ = 9, 
determining whether the corresponding binary bit in mb should be 1 or 0. 
The rounded coefficients are then converted into the binary message mb​, representing the original plaintext.
 */

module Decrypt (
    input logic clk,
    input logic rst_n,
    input logic enable,
    input logic signed [31:0] secret_key [1:0][3:0],
    input logic signed [31:0] ciphertext[1:0][1:0][3:0],
    output logic signed [3:0] m_b, 
    output logic [3:0] decimal_value    
);
    parameter int Q = 17; 
    logic signed [31:0] poly_out0 [3:0];
    logic signed [31:0] poly_out1 [3:0];
    logic signed [31:0] temp_m_n [3:0];

    PolynomialMatrixMultiplication poly_mult1 (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .polynomial1(ciphertext[0][0]),
        .polynomial2(secret_key[0]),
        .polynomial_out(poly_out0)
    );

    PolynomialMatrixMultiplication poly_mult2 (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .polynomial1(ciphertext[0][1]),
        .polynomial2(secret_key[1]),
        .polynomial_out(poly_out1)
    );

    always_comb begin
        for (int i = 0; i < 4; i++) begin
            temp_m_n[i] = ciphertext[1][0][i] - (poly_out0[i] + poly_out1[i]);

            if (temp_m_n[i] < 0) begin
                temp_m_n[i] += Q;
                if (temp_m_n[i] < 0) begin
                    temp_m_n[i] += Q;
                end
            end else begin
                temp_m_n[i] = temp_m_n[i] % Q;
            end
        end

        for (int i = 0; i < 4; i++) begin
            if (temp_m_n[i] < 5) begin
                temp_m_n[i] = 0;
            end else if (temp_m_n[i] < 14) begin
                temp_m_n[i] = 9;
            end else begin
                temp_m_n[i] = 0;
            end
        end

        for (int i = 0; i < 4; i++) begin
            m_b[i] = (temp_m_n[i] == 9) ? 1 : 0;
        end

        decimal_value = (m_b[0] ? 8 : 0) | (m_b[1] ? 4 : 0) | (m_b[2] ? 2 : 0) | (m_b[3] ? 1 : 0);
         $display("decimal_value = %0d", decimal_value);
    end
endmodule
