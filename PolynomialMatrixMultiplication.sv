module PolynomialMatrixMultiplication #() (
    input logic clk,
    input logic rst_n,
    input logic enable,
    input logic signed [31:0] polynomial1 [3:0], 
    input logic signed [31:0] polynomial2 [3:0], 
    output logic signed [31:0] polynomial_out [3:0] 
);
    logic signed [31:0] result [3:0];
    logic signed [31:0] temp_result [3:0];
    logic signed [31:0] subtracted_result [3:0];

    always_comb begin
        for (int k = 0; k < 4; k++) begin
            temp_result[k] = 0;
            subtracted_result[k] = 0;
        end

        for (int i = 0; i < 4; i++) begin
            for (int j = 0; j < (4 - i); j++) begin
                temp_result[i+j] = temp_result[i+j] + (polynomial1[i] * polynomial2[j]);
            end
        end

        for (int a = 1; a < 4; a++) begin
            for (int b = 4 - a; b < 4; b++) begin
                temp_result[b + a - 4] = temp_result[b + a - 4] - (polynomial1[b] * polynomial2[a]);
            end
        end

        // Apply modulus operation
        for (int k = 0; k < 4; k++) begin
            subtracted_result[k] = temp_result[k] % 17;
        end

        // Output the result
        for (int k = 0; k < 4; k++) begin
            result[k] = subtracted_result[k];
        end
    end

    // Assign result to polynomial_out in an always_ff block to capture the result on the clock edge
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            polynomial_out[0] <= 0;
            polynomial_out[1] <= 0;
            polynomial_out[2] <= 0;
            polynomial_out[3] <= 0;
        end else if (enable) begin
            polynomial_out[0] <= result[0];
            polynomial_out[1] <= result[1];
            polynomial_out[2] <= result[2];
            polynomial_out[3] <= result[3];
        end
    end
endmodule
