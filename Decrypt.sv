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
    logic signed [31:0] m [3:0];
    
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
        // Initialize outputs
        m_b = 4'b0000;
        decimal_value = 0;
        
        // Ensure poly_out0 and poly_out1 are displayed correctly
        $display("poly0 = %d %d %d %d", poly_out0[0], poly_out0[1], poly_out0[2], poly_out0[3]);
        $display("poly1 = %d %d %d %d", poly_out1[0], poly_out1[1], poly_out1[2], poly_out1[3]);
        
        for (int i = 0; i < 4; i++) begin
            temp_m_n[i] = ciphertext[1][0][i] - (poly_out0[i] + poly_out1[i]);
            $display("tempbefore[%0d] = %d", i, temp_m_n[i]);
            if (temp_m_n[i] < 0) begin
                temp_m_n[i] = (temp_m_n[i] % Q + Q) % Q;
            end else begin
                temp_m_n[i] = (temp_m_n[i] % Q);
            end
        end
        
        $display("temp = %d %d %d %d", temp_m_n[0], temp_m_n[1], temp_m_n[2], temp_m_n[3]);
        
        for (int i = 0; i < 4; i++) begin
            if (temp_m_n[i] < 5) begin
                m[i] = 0;
            end else if (temp_m_n[i] >= 5 && temp_m_n[i] <= 14) begin
                m[i] = 9;
            end else if (temp_m_n[i] > 14 && temp_m_n[i] <= 17) begin
                m[i] = 0;
            end else begin
                m[i] = 0; // Ensure m[i] is always assigned
            end
        end
        
        for (int i = 0; i < 4; i++) begin
            if (m[i] == 9) begin
                m_b[i] = 1;
            end else begin
                m_b[i] = 0;
            end
        end
        
        $display("m = %d %d %d %d", m[0], m[1], m[2], m[3]);
        $display("m_b = %b", m_b);
        
        decimal_value = (m_b[0] ? 8 : 0) | (m_b[1] ? 4 : 0) | (m_b[2] ? 2 : 0) | (m_b[3] ? 1 : 0);
        
        $display("m_b = %b", m_b);
        $display("decimal_value = %0d", decimal_value);
    end

endmodule
