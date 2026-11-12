`timescale 1ns/1ps

module full_adder (
    input A, B, Cin,
    output sum, cout
);

wire w1, w2, w3, w4;

xor(w1, A, B);
xor(sum, w1, Cin);
and(w2, A, B);
and(w3, B, Cin);
and(w4, A, Cin);
or(cout, w2, w3, w4);

endmodule