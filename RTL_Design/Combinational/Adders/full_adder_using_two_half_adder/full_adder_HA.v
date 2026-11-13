module full_adder_HA (
    input a, b, cin,
    output sum, cout
);

    wire sum1, carry1, carry2;

    // First Half Adder
    half_adder HA1 (
        .a(a),
        .b(b),
        .sum(sum1),
        .cout(carry1)
    );

    // Second Half Adder
    half_adder HA2 (
        .a(sum1),
        .b(cin),
        .sum(sum),
        .cout(carry2)
    );

    // Final Carry
    assign cout = carry1 | carry2;

endmodule