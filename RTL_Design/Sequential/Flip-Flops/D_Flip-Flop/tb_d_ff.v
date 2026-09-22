`timescale 1ns/1ps

module tb_d_ff;

reg clk, D;
wire Q;

d_ff DUT (
    .clk(clk),
    .D(D),
    .Q(Q)
);

initial begin
    clk = 0;
    forever #5 clk = ~clk;
end

task check;
    if (Q === D)
        $display("PASS: D=%b Q=%b", D, Q);
    else
        $display("FAIL: D=%b Q=%b", D, Q);
endtask

    integer i;
initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0, tb_d_ff);

    D = 0;

    for (i = 0; i < 4; i = i + 1) begin
        #10;
        check();
        D = ~D;
    end

    $finish;
end

/*    D = 0; #10; check();
    D = 1; #10; check();
    D = 0; #10; check();
    D = 1; #10; check(); */

endmodule