module KeyGeneration (
    input logic clk,
    input logic rst_n,
    input logic enable,
    output logic signed [31:0] secretkey [1:0][3:0],
    output logic signed [31:0] result [1:0][3:0],
    output logic signed [31:0] combined_output [1:0][3:0][3:0]
);
    logic signed [31:0] rand_num [0:31];
    logic signed [31:0] A [3:0][3:0];
    logic signed[31:0] e [1:0][3:0];
    logic signed[31:0] poly_out0 [3:0];
    logic signed [31:0] poly_out1 [3:0];
    logic signed [31:0] poly_out2 [3:0];
    logic signed [31:0] poly_out3 [3:0];
    logic signed [31:0] added [3:0];
    logic signed [31:0] added1 [3:0];
    logic stop_random_generation;

    genvar idx;
    generate
        for (idx = 0; idx < 16; idx++) begin : rng_loop1
            RandomNumberGenerator #(
                .MIN_VALUE(-16), 
                .MAX_VALUE(16)
            ) rng (
                .clk(clk),
                .rst_n(rst_n),
                .enable(enable & !stop_random_generation),
                .random_number(rand_num[idx])
            );
        end
        for (idx = 16; idx < 32; idx++) begin : rng_loop2
            RandomNumberGenerator #(
                .MIN_VALUE(-1), 
                .MAX_VALUE(1)
            ) rng (
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

            A[0][0] <= rand_num[0];
            A[0][1] <= rand_num[1];
            A[0][2] <= rand_num[2];
            A[0][3] <= rand_num[3];
            A[1][0] <= rand_num[4];    
            A[1][1] <= rand_num[5];
            A[1][2] <= rand_num[6];
            A[1][3] <= rand_num[7];    
            A[2][0] <= rand_num[8];
            A[2][1] <= rand_num[9];
            A[2][2] <= rand_num[10];
            A[2][3] <= rand_num[11];
            A[3][0] <= rand_num[12];
            A[3][1] <= rand_num[13];
            A[3][2] <= rand_num[14];
            A[3][3] <= rand_num[15];

            secretkey[0][0] <= rand_num[16];
            secretkey[0][1] <= rand_num[17];
            secretkey[0][2] <= rand_num[18];
            secretkey[0][3] <= rand_num[19];
            secretkey[1][0] <= rand_num[20];
            secretkey[1][1] <= rand_num[21];
            secretkey[1][2] <= rand_num[22];
            secretkey[1][3] <= rand_num[23];
            
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
    for (int i = 0; i < 4; i++) begin
        added[i] = 0;
        added1[i] = 0;
        result[0][i] = 0;
        result[1][i] = 0;
    end
    if (enable) begin
        for (int i = 0; i < 4; i++) begin
            added[i] = (poly_out0[i] + poly_out1[i]);
            added1[i] = (poly_out2[i] + poly_out3[i]);

            if (added[i] < 0) begin
                added[i] = added[i] ;
            end else begin
                added[i] = (added[i] % 17);
            end

            if (added1[i] < 0) begin
                added1[i] = added1[i] ;
            end else begin
                added1[i] = (added1[i] % 17);
            end
        end
        for (int i = 0; i < 4; i++) begin
            result[0][i] = added[i] + e[0][i];
            result[1][i] = added1[i] + e[1][i];
            if (result[0][i] < 0) begin
                
                result[0][i] = result[0][i] ;
            end else begin
                result[0][i] = (result[0][i] % 17);
            end
            if (result[1][i] < 0) begin
                 
                result[1][i] = result[1][i] ;
            end else begin
                result[1][i] = (result[1][i] % 17);
        end
        
    end
end
    end
 always_ff @(posedge clk or negedge rst_n) begin
        if (!rst_n) begin
            for (int i = 0; i < 2; i++) begin
                for (int j = 0; j < 4; j++) begin
                    for (int k = 0; k < 4; k++) begin
                        combined_output[i][j][k] <= 0;
                    end
                end
            end
        end else if (enable) begin
            for (int i = 0; i < 4; i++) begin
                for (int j = 0; j < 4; j++) begin
                combined_output[0][i][j] <= A[i][j];
                
            end
            end
            for (int i = 0; i < 2; i++) begin
                for (int j = 0; j < 4; j++) begin
                    combined_output[1][i][j] <= result[i][j];
                end
            end
        end
    end

endmodule
