module tb_half_adder;
reg a, b;
wire sum, cout;
integer i;

half_adder DUT (
    .a(a),
    .b(b),
    .sum(sum),
    .cout(cout)
);

initial begin
    $dumpfile ("dump.vcd");
    $dumpvars (0, tb_half_adder);

    $monitor("Time=%0t | a=%b b=%b | cout=%b Sum=%b", $time, a, b, cout, sum);

    for (i = 0 ; i < 4 ; i++) begin
        {a, b} = i[1:0];
        #10;
    end
    $finish;
end

endmodule