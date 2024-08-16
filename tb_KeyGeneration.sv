module KeyGeneration_tb;

    // Parameters
    localparam INPUT_WIDTH = 32;
    localparam NUM_TESTS = 10;  // Number of test cases to run

    // Signals
    logic clk;
    logic rst_n;
    logic enable;
    logic signed [31:0] A1 [3:0][3:0];
    logic signed [31:0] e_ [1:0][3:0];
    logic signed [31:0] secret_key [1:0][3:0];
    logic signed [31:0] secretkey [1:0][3:0];
    logic [31:0] result [1:0][3:0];
    logic signed [31:0] combined_output [1:0][3:0][3:0];

    // Instantiate DUT
    KeyGeneration DUT (
        .A1(A1),
        .e_(e_),
        .secret_key(secret_key),
        .secretkey(secretkey),
        .result(result),
        .combined_output(combined_output),
        .clk(clk),
        .rst_n(rst_n),
        .enable(enable)
    );

    // Clock generation
    initial begin
        clk = 0;
        forever #5 clk = ~clk; // 10 ns clock period
    end

    // Initialize and apply test vectors
    initial begin
        // Initialize signals
        rst_n = 0;
        enable = 0;

        // Reset the DUT
        #10;
        rst_n = 1;
        #10;

        // Apply test vectors
        apply_test_vectors();

        // Run simulation
        #150;
        $finish;
    end

    // Apply test vectors
    task apply_test_vectors;
        integer i, j;
        begin
            for (i = 0; i < NUM_TESTS; i++) begin
                // Generate random test inputs
                for (int m = 0; m < 4; m++) begin
                    for (int n = 0; n < 4; n++) begin
                        A1[m][n] = $random;
                    end
                end
                for (int m = 0; m < 2; m++) begin
                    for (int n = 0; n < 4; n++) begin
                        e_[m][n] = $random;
                        secret_key[m][n] = $random;
                    end
                end

                // Apply inputs
                enable = 1;
                #10; // Wait for one clock cycle

                // Disable enable signal to stop DUT processing
                enable = 0;

                // Wait for some time to observe outputs
                #10;

                // Check results
                check_results();
            end
        end
    endtask

    // Check results
    task check_results;
        begin
            // Print results
            $display("Time: %0t |", $time);

            $display("Secret Key 0: {");
            for (int j = 0; j < 4; j++) begin
                $display("  %0d", secretkey[0][j]);
            end
            $display("}");

            $display("Secret Key 1: {");
            for (int j = 0; j < 4; j++) begin
                $display("  %0d", secretkey[1][j]);
            end
            $display("}");

            $display("Result 0: {");
            for (int j = 0; j < 4; j++) begin
                $display("  %0d", result[0][j]);
            end
            $display("}");

            $display("Result 1: {");
            for (int j = 0; j < 4; j++) begin
                $display("  %0d", result[1][j]);
            end
            $display("}");

            $display("Combined Output 0: {");
            for (int j = 0; j < 4; j++) begin
                $display("  {");
                for (int k = 0; k < 4; k++) begin
                    $display("    %0d", combined_output[0][j][k]);
                end
                $display("  }");
            end
            $display("}");

            $display("Combined Output 1: {");
            for (int j = 0; j < 2; j++) begin
                $display("  {");
                for (int k = 0; k < 4; k++) begin
                    $display("    %0d", combined_output[1][j][k]);
                end
                $display("  }");
            end
            $display("}");
        end
    endtask

endmodule
