module half_adder (
    input a, b,
    output reg sum, cout
);

always @ (*) begin
    {cout, sum} = a + b;
end
endmodule
