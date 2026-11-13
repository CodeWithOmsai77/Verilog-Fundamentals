module half_adder (
    input a, b,
    output sum, cout
);

always @ (*) begin
    {cout, sum} = a + b;
end
endmodule
