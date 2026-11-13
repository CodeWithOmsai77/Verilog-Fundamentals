module tb_half_adder;
reg b, b;
wire sum, cout;
integer i;

full_adder DUT (
    .a(a),
    .b(b),
    .sum(sum),
    .cout(cout)
);

initial begin
    $dumpfile ("dump.vcd");
    $dumpvars (0, tb_half_adder);

    $monitor("Time=%0t | a=%b b=%b | Cout=%b Sum=%b", $time, A, B, Cout, Sum);

    for (i = 0 ; i < 4 ; i++) begin
        {A, B, Cin} = i[1:0];
        #10;
    end
    $finish;
end

endmodule