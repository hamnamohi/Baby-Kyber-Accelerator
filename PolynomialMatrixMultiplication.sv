/* Created By Hamna Mohiuddin @hamnamohi as a Google Summer of Code 2024 Project.

DESCRIPTION:
The is component performs the multiplication between 2 polynomials based on the method described in Baby Kyber.
The first nested loop iterates through the coefficients of the two input polynomials (polynomial1 and polynomial2).
For each pair of coefficients, it calculates the product and adds it to the corresponding position in the temp_result array.

The second nested loop is responsible for handling the modular arithmetic inherent in the polynomial multiplication process. 
Specifically, it subtracts the high-order terms (those that exceed the polynomial degree of 3) and appropriately wraps them 
around to ensure that the result remains within the polynomial's degree.

 */

module PolynomialMatrixMultiplication (
    input logic clk,
    input logic rst_n,
    input logic enable,
    input logic signed [31:0] polynomial1 [3:0], 
    input logic signed [31:0] polynomial2 [3:0], 
    output logic signed [31:0] polynomial_out [3:0] 
);
    logic signed [31:0] temp_result [3:0];

    always_comb begin
        for (int k = 0; k < 4; k++) begin
            temp_result[k] = 0;
    
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

        for (int k = 0; k < 4; k++) begin
    if (temp_result[k] < 0) begin
        temp_result[k] = (temp_result[k] % 17 + 17) % 17;
    end else begin
        temp_result[k] = temp_result[k] % 17;
    end
end


    end

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            polynomial_out[0] <= 0;
            polynomial_out[1] <= 0;
            polynomial_out[2] <= 0;
            polynomial_out[3] <= 0;
        end else if (enable) begin
            polynomial_out[0] <= temp_result[0];
            polynomial_out[1] <= temp_result[1];
            polynomial_out[2] <= temp_result[2];
            polynomial_out[3] <= temp_result[3];
        end
    end
endmodule
