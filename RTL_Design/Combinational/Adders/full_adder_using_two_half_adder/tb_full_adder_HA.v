module tb_full_adder_HA;

    reg a, b, cin;
    wire sum, cout;
    integer i;

    full_adder_HA DUT (
        .a(a),
        .b(b),
        .cin(cin),
        .sum(sum),
        .cout(cout)
    );

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, tb_full_adder_HA);

        $monitor("Time=%0t | a=%b b=%b cin=%b | sum=%b cout=%b",
                  $time, a, b, cin, sum, cout);

        for (i = 0; i < 8; i = i + 1) begin
            {a, b, cin} = i[2:0];
            #10;
        end

        $finish;
    end

endmodule