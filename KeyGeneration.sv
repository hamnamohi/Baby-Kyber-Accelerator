module KeyGeneration (
    input logic clk,
    input logic rst_n,
    input logic enable,
    output logic [31:0] keys [1:0][3:0]
);
    // Random number generation logic here
    logic [31:0] rand_num0, rand_num1, rand_num2, rand_num3;
    logic [31:0] rand_num4, rand_num5, rand_num6, rand_num7;

    RandomNumberGenerator rng0 (.clk(clk), .rst_n(rst_n), .enable(enable), .random_number(rand_num0));
    RandomNumberGenerator rng1 (.clk(clk), .rst_n(rst_n), .enable(enable), .random_number(rand_num1));
    RandomNumberGenerator rng2 (.clk(clk), .rst_n(rst_n), .enable(enable), .random_number(rand_num2));
    RandomNumberGenerator rng3 (.clk(clk), .rst_n(rst_n), .enable(enable), .random_number(rand_num3));
    RandomNumberGenerator rng4 (.clk(clk), .rst_n(rst_n), .enable(enable), .random_number(rand_num4));
    RandomNumberGenerator rng5 (.clk(clk), .rst_n(rst_n), .enable(enable), .random_number(rand_num5));
    RandomNumberGenerator rng6 (.clk(clk), .rst_n(rst_n), .enable(enable), .random_number(rand_num6));
    RandomNumberGenerator rng7 (.clk(clk), .rst_n(rst_n), .enable(enable), .random_number(rand_num7));

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (int i = 0; i < 2; i++) begin
                for (int j = 0; j < 4; j++) begin
                    keys[i][j] <= 0;
                end
            end
        end else if (enable) begin
            keys[0][0] <= rand_num0;
            keys[0][1] <= rand_num1;
            keys[0][2] <= rand_num2;
            keys[0][3] <= rand_num3;
            keys[1][0] <= rand_num4;
            keys[1][1] <= rand_num5;
            keys[1][2] <= rand_num6;
            keys[1][3] <= rand_num7;
        end
    end
endmodule
