// module TopModule (
//     input logic clk,
//     input logic rst_n,
//     input logic enable,
//     output logic [31:0] temp_secretkey [1:0][3:0],
//     output logic [31:0] temp_result [1:0][3:0]
// );

//     // Internal wires to connect to KeyGeneration module
//     logic [31:0] secretkey [1:0][3:0];
//     logic [31:0] result [1:0][3:0];
//     logic [31:0] A_out [3:0][3:0];
//     logic [31:0] e_out [1:0][3:0];

//     // Instantiate KeyGeneration module
//     KeyGeneration key_gen (
//         .clk(clk),
//         .rst_n(rst_n),
//         .enable(enable),
//         .secretkey(secretkey),
//         .result(result),
//         .A_out(A_out),
//         .e_out(e_out)
//     );

//     // Always block to save the outputs in temporary registers
//     always_ff @(posedge clk or negedge rst_n) begin
//         if (!rst_n) begin
//             for (int i = 0; i < 2; i++) begin
//                 for (int j = 0; j < 4; j++) begin
//                     temp_secretkey[i][j] <= 0;
//                     temp_result[i][j] <= 0;
//                 end
//             end
//         end else if (enable) begin
//             for (int i = 0; i < 2; i++) begin
//                 for (int j = 0; j < 4; j++) begin
//                     temp_secretkey[i][j] <= secretkey[i][j];
//                     temp_result[i][j] <= result[i][j];
//                 end
//             end
//         end
//     end

// endmodule
