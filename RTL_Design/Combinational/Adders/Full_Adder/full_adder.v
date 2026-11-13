module full_adder (
    input wire A,
    input wire B,
    input wire Cin,
    output reg Sum,
    output reg Cout
);

always @ (*) begin 
    {Cout, Sum} = A + B + Cin;

end
endmodule