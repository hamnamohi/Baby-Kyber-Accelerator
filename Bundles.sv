module DataResponse #(
    input logic ready,
    output logic signed [31:0] dataResponse,
    output logic valid
);  
endmodule

module DataRequest #(
    input logic [31:0] message,
    input logic signed [31:0] publickey, 
    input logic signed [3:0] compEnable,
    input logic valid,
    output logic ready
    
);
endmodule
