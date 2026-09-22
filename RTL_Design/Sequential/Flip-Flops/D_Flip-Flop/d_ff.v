`timescale 1ns/1ps

module d_ff (
    input wire clk,
    input wire D,
    output reg Q
);

always @(posedge clk) begin 
    Q <= D;
end
endmodule