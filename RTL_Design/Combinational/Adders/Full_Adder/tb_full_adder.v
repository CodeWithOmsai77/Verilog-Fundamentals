module tb_full_adder;
reg A, B, Cin;
wire Sum, Cout;
integer i;

full_adder DUT (
    .A(A),
    .B(B),
    .Cin(Cin),
    .Sum(Sum),
    .Cout(Cout)
);

initial begin
    $dumpfile ("dump.vcd");
    $dumpvars (0, tb_full_adder);

    $monitor("Time=%0t | A=%b B=%b Cin=%b | Cout=%b Sum=%b", $time, A, B, Cin, Cout, Sum);

    for (i = 0 ; i < 8 ; i++) begin
        {A, B, Cin} = i[2:0];
        #10;
    end
    $finish;
end

endmodule