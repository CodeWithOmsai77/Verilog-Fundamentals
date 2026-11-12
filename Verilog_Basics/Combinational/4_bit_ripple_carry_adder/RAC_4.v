`timescale 1ns/1ps

module RAC_4 (
    input [3:0] A, B,
    input Cin,
    output [3:0] Sum,
    output Cout
);

wire c1, c2, c3;

full_adder FA0 (.A(A[0]), .B(B[0]), .Cin(Cin), .sum(Sum[0]), .cout(c1));
full_adder FA1 (.A(A[1]), .B(B[1]), .Cin(c1), .sum(Sum[1]), .cout(c2));
full_adder FA2 (.A(A[2]), .B(B[2]), .Cin(c2), .sum(Sum[2]), .cout(c3));
full_adder FA3 (.A(A[3]), .B(B[3]), .Cin(c3), .sum(Sum[3]), .cout(Cout));

endmodule  