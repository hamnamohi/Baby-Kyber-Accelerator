module Encrypt (
    input logic clk,
    input logic rst_n,
    input logic enable,
    input logic [31:0] message,
    input logic signed [31:0] combined_output [1:0][3:0][3:0],
    output logic signed [31:0] ciphertext[1:0] [1:0][3:0]
);

    // Intermediate variables
    logic signed [31:0] r [1:0][3:0];
    logic signed [31:0] e1 [1:0][3:0];
    logic signed [31:0] e2 [3:0];
    logic signed [31:0] rand_num [0:19];
    logic signed [31:0] transposed_matrix [3:0][3:0];
    logic stop_random_generation;
    logic signed [31:0] poly_out0 [3:0];
    logic signed [31:0] poly_out1 [3:0];
    logic signed [31:0] poly_out2 [3:0];
    logic signed [31:0] poly_out3 [3:0];
    logic signed [31:0] poly_out4 [3:0];
    logic signed [31:0] poly_out5 [3:0];
    logic signed [31:0] added [3:0];
    logic signed [31:0] added1 [3:0];
    logic signed [31:0] added2 [3:0];
    logic [3:0] coefficients;
    logic signed [31:0] coefficients_scaled [3:0];
    logic signed [31:0] u [1:0][3:0];
    logic signed [31:0] v [3:0];

    DecimalToBitConverter dec_to_bit (
        .input_value(message),
        .coefficients(coefficients)
    );

    genvar idx;
    generate
        for (idx = 0; idx < 20; idx++) begin : rng_loop
            RandomNumberGenerator #(
                .MIN_VALUE(-1), 
                .MAX_VALUE(17)
            ) rng (
                .clk(clk),
                .rst_n(rst_n),
                .enable(enable & !stop_random_generation),
                .random_number(rand_num[idx])
            );
        end
    endgenerate

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
            for (int i = 0; i < 2; i++) begin
                for (int j = 0; j < 4; j++) begin
                    r[i][j] <= 0;
                    e1[i][j] <= 0;
                end
            end
            for (int i = 0; i < 4; i++) begin
                e2[i] <= 0;
            end
            stop_random_generation <= 0;
        end else if (enable) begin
            for (int i = 0; i < 2; i++) begin
                for (int j = 0; j < 4; j++) begin
                    r[i][j] <= rand_num[i * 4 + j];
                    e1[i][j] <= rand_num[8 + i * 4 + j];
                end
            end
            for (int i = 0; i < 4; i++) begin
                e2[i] <= rand_num[16 + i];
            end
          
            stop_random_generation <= 1; 
            // r[0][0] <= 0; r[0][1] <= 0; r[0][2] <= 1; r[0][3] <= -1;
            // r[1][0] <= -1; r[1][1] <= 0; r[1][2] <= 1; r[1][3] <= 1;
            
            // e1[0][0] <= 0; e1[0][1] <= 1; e1[0][2] <= 1; e1[0][3] <= 0;
            // e1[1][0] <= 0; e1[1][1] <= 0; e1[1][2] <= 1; e1[1][3] <= 0;
            
            // e2[0] <= 0; e2[1] <= 0; e2[2] <= -1; e2[3] <= -1;
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
            // $display("tt",combined_output[1][1][0]);
            // $display("tt",combined_output[1][1][1]);
            // $display("tt",combined_output[1][1][2]);
            // $display("tt",combined_output[1][1][3]);
            // $display("rr",r[1][0]);
            // $display("rr",r[1][1]);
            // $display("rr",r[1][2]);
            // $display("rr",r[1][3]);
            for (int i = 0; i < 4; i++) begin
                
                $display("poly",poly_out4[i]);
                added[i] = (poly_out0[i] + poly_out1[i]);
                added1[i] = (poly_out2[i] + poly_out3[i]);
                added2[i] = (poly_out4[i] + poly_out5[i]); 

                if (added[i] < 0) begin
                    added[i] = (added[i] % 17 + 17) % 17;
                end else begin
                    added[i] = (added[i] % 17);
                end

                if (added1[i] < 0) begin
                    added1[i] = (added1[i] % 17 + 17) % 17;
                end else begin
                    added1[i] = (added1[i] % 17);
                end

                if (added2[i] < 0) begin
                    added2[i] = (added2[i] % 17 + 17) % 17;
                end else begin
                    added2[i] = (added2[i] % 17);
                end
               
            end
            for (int i = 0; i < 4; i++) begin
                u[0][i] = added[i] + e1[0][i];
                u[1][i] = added1[i] + e1[1][i];
                
                // Print the values of u for debugging
                // $display("u[0]", u[0][1]);
                // $display("u[1]", u[0][2]);
                // $display("u[2]", u[0][3]);
                // $display("u[1][%0d]: %0d", i, u[1][i]);
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
            v[i] = added2[i] + e2[i]  - coefficients_scaled[i];
             if ( v[i] < 0) begin
                     v[i] = ( v[i] % 17 + 17) % 17;
                end else begin
                     v[i] = ( v[i] % 17);
                end
                // $display("dp0", coefficients_scaled[0]);
                // $display("dp1", coefficients_scaled[1]);
                // $display("dp2", coefficients_scaled[2]);
                // $display("dp3", coefficients_scaled[3]);
        end
        for (int i = 0; i < 2; i++) begin
            
            for (int j = 0; j < 4; j++) begin
                ciphertext[0][i][j] = u[i][j];
                ciphertext[1][0][j] = v[j];
            end
        end
    end
    // 7 0 7 0
    // 0 0 -1 -1
    // 9 9  0 9


endmodule
