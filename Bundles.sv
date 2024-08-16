module DataRequest #()(
    output logic signed [31:0] addr,
    output logic signed [31:0] data,
    output logic signed wen,
    output logic signed ren, 
    output logic [7:0] bytelane,
    output logic ready,
    output logic valid
);
endmodule

module DataResponse #()(
    input logic ready,
    input logic signed [31:0] data,
    input logic error,
    input logic valid
);  
endmodule


