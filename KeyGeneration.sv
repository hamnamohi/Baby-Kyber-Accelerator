module KeyGeneration (
    input logic clk,
    input logic rst_n,
    input logic enable,
    output logic [31:0] secretkey [1:0][3:0],
    output logic [31:0] result [1:0][3:0]
);

    // Internal wires for random numbers and polynomial outputs
    logic [31:0] rand_num [0:31];
    logic [31:0] A [3:0][3:0];
    logic [31:0] e [1:0][3:0];
    logic [31:0] poly_out0 [3:0];
    logic [31:0] poly_out1 [3:0];
    logic [31:0] poly_out2 [3:0];
    logic [31:0] poly_out3 [3:0];
    logic signed [31:0] added [3:0];
    logic signed [31:0] added1 [3:0];
    logic stop_random_generation;

    genvar idx;
    generate
        for (idx = 0; idx < 32; idx++) begin : rng_loop
            RandomNumberGenerator rng (
                .clk(clk),
                .rst_n(rst_n),
                .enable(enable & !stop_random_generation),
                .random_number(rand_num[idx])
            );
        end
    endgenerate

    always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (int i = 0; i < 2; i++) begin
                for (int j = 0; j < 4; j++) begin
                    secretkey[i][j] <= 0;
                    e[i][j] <= 0;
                end
            end
            for (int i = 0; i < 4; i++) begin
                for (int j = 0; j < 4; j++) begin
                    A[i][j] <= 0;
                end
            end
            stop_random_generation <= 0;
        end else if (enable) begin
            // secretkey[0][0] <= 0;
            // secretkey[0][1] <= 1;
            // secretkey[0][2] <= -1;
            // secretkey[0][3] <= -1;
            // secretkey[1][0] <= 0;
            // secretkey[1][1] <= -1;
            // secretkey[1][2] <= 0;
            // secretkey[1][3] <= -1;
            // A[0][0] <= 11;
            // A[0][1] <= 16;
            // A[0][2] <= 16;
            // A[0][3] <= 6;
            // A[1][0] <= 3;    
            // A[1][1] <= 6;
            // A[1][2] <= 4;
            // A[1][3] <= 9;    
            // A[2][0] <= 1;
            // A[2][1] <= 10;
            // A[2][2] <= 3;
            // A[2][3] <= 5;
            // A[3][0] <= 15;
            // A[3][1] <= 9;
            // A[3][2] <= 1;
            // A[3][3] <= 6;
            // e[0][0] <= 0;
            // e[0][1] <= 0;
            // e[0][2] <= 1;
            // e[0][3] <= 0;
            // e[1][0] <= 0;
            // e[1][1] <= -1;
            // e[1][2] <= 1;
            // e[1][3] <= 0;
            secretkey[0][0] <= rand_num[0];
            secretkey[0][1] <= rand_num[1];
            secretkey[0][2] <= rand_num[2];
            secretkey[0][3] <= rand_num[3];
            secretkey[1][0] <= rand_num[4];
            secretkey[1][1] <= rand_num[5];
            secretkey[1][2] <= rand_num[6];
            secretkey[1][3] <= rand_num[7];
            A[0][0] <= rand_num[8];
            A[0][1] <= rand_num[9];
            A[0][2] <= rand_num[10];
            A[0][3] <= rand_num[11];
            A[1][0] <= rand_num[12];    
            A[1][1] <= rand_num[13];
            A[1][2] <= rand_num[14];
            A[1][3] <= rand_num[15];    
            A[2][0] <= rand_num[16];
            A[2][1] <= rand_num[17];
            A[2][2] <= rand_num[18];
            A[2][3] <= rand_num[19];
            A[3][0] <= rand_num[20];
            A[3][1] <= rand_num[21];
            A[3][2] <= rand_num[22];
            A[3][3] <= rand_num[23];
            e[0][0] <= rand_num[24];
            e[0][1] <= rand_num[25];
            e[0][2] <= rand_num[26];
            e[0][3] <= rand_num[27];
            e[1][0] <= rand_num[28];
            e[1][1] <= rand_num[29];
            e[1][2] <= rand_num[30];
            e[1][3] <= rand_num[31];
            stop_random_generation <= 1; 
        end
    end
    PolynomialMatrixMultiplication poly_mult0 (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .polynomial1(A[0]),
        .polynomial2(secretkey[0]),
        .polynomial_out(poly_out0)
    );
    
    PolynomialMatrixMultiplication poly_mult1 (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .polynomial1(A[1]),
        .polynomial2(secretkey[1]),
        .polynomial_out(poly_out1)
    );

    PolynomialMatrixMultiplication poly_mult2 (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .polynomial1(A[2]),
        .polynomial2(secretkey[0]),
        .polynomial_out(poly_out2)
    );

    PolynomialMatrixMultiplication poly_mult3 (
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable),
        .polynomial1(A[3]),
        .polynomial2(secretkey[1]),
        .polynomial_out(poly_out3)
    );

    always_comb begin
    // Initialize the arrays to zero
    for (int i = 0; i < 4; i++) begin
        added[i] = 0;
        added1[i] = 0;
        result[0][i] = 0;
        result[1][i] = 0;
    end

    // Perform the addition and modulus operations
    if (enable) begin
        for (int i = 0; i < 4; i++) begin
            added[i] = (poly_out0[i] + poly_out1[i]);
            added1[i] = (poly_out2[i] + poly_out3[i]);

            // Negative modulus handling
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
        end

        // Assign results with added values and e
        for (int i = 0; i < 4; i++) begin
            result[0][i] = added[i] + e[0][i];
            result[1][i] = added1[i] + e[1][i];
        end
    end
end


endmodule

// make the output (A,t)