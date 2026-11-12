
`timescale 1ns/1ps

module RAC_4_tb;

reg [3:0] A, B;
reg Cin;

wire [3:0] Sum;
wire Cout;

reg [4:0] Expected;
integer i, j, k;
integer pass_count, fail_count;

RAC_4 DUT (
    .A(A),
    .B(B),
    .Cin(Cin),
    .Sum(Sum),
    .Cout(Cout)
);

initial begin

    $dumpfile("rca.vcd");
    $dumpvars(0, RAC_4_tb);

    pass_count = 0;
    fail_count = 0;

    // Test all 512 combinations

    for (i = 0; i < 16; i = i + 1) begin
        for (j = 0; j < 16; j = j + 1) begin
            for (k = 0; k < 2; k = k + 1) begin

                A = i;
                B = j;
                Cin = k;

                Expected = {1'b0, A} + {1'b0, B} + Cin;

                #10;

                if ({Cout, Sum} === Expected) begin
                    pass_count = pass_count + 1;
                end
                else begin
                    fail_count = fail_count + 1;

                    $display("FAIL: A=%b B=%b Cin=%b | Expected=%b | Actual=%b",
                             A, B, Cin, Expected, {Cout, Sum});
                end

            end
        end
    end

    $display("--------------------------------");
    $display("TOTAL TESTS : %0d", pass_count + fail_count);
    $display("PASSED      : %0d", pass_count);
    $display("FAILED      : %0d", fail_count);
    $display("--------------------------------");

    if (fail_count == 0)
        $display("ALL TESTS PASSED!");
    else
        $display("TEST FAILED!");

    $finish;

end

endmodule
