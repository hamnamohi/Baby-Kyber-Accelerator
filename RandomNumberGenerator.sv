module RandomNumberGenerator #(
    parameter int MIN_VALUE = -17,  // Lower limit
    parameter int MAX_VALUE = 17    // Upper limit
)(
    input logic clk,
    input logic rst_n,
    input logic enable,
    output logic signed [31:0] random_number
);

    // DPI-C function declaration
    import "DPI-C" function int generate_random_number(int min_value, int max_value);

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            random_number <= 0;  // Reset output on reset
        end else if (enable) begin
            random_number <= generate_random_number(MIN_VALUE, MAX_VALUE);  // Call C++ function
        end
    end

endmodule
