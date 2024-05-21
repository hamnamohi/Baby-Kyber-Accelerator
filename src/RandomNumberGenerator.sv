module rng #(parameter int MIN_VALUE = -17, MAX_VALUE = 17)(
    input logic clk,
    input logic rst_n,
    input logic enable,
    output logic signed [5:0] random_number
);

    // Internal signal for the random value
    logic signed [5:0] rand_value;
    
    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            rand_value <= 0;
        end else if (enable) begin
            rand_value <= $urandom_range(MIN_VALUE, MAX_VALUE);
        end
    end
    
    assign random_number = rand_value;
    
endmodule
