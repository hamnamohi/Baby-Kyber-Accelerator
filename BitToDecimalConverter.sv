module BitToDecimalConverter (
    input logic [3:0] coefficients,  // 4-bit input representing the compressed value
    output logic [7:0] output_value  // 8-bit output representing the original value
);
    logic [7:0] bit_list;  // Reconstructed 8-bit value

    always_comb begin
        bit_list = 0; // Initialize bit_list
        for (int i = 0; i < 4; i++) begin
            bit_list[i * 2] = coefficients[i]; // Assign the bit values from coefficients
            bit_list[i * 2 + 1] = 0;           // Set the second bit in each pair to 0
        end
        output_value = bit_list; // Assign the reconstructed value to output_value
    end
endmodule
