`timescale 1ns/1ps

module tb_d_ff_reset;

    reg  clk, rst, D;
    wire Q;

    d_ff_reset DUT (
        .clk(clk),
        .D(D),
        .rst(rst),
        .Q(Q)
    );

    // Clock: 4 ns period
    always #2 clk = ~clk;

    initial begin
        clk = 0;
        rst = 1;
        D   = 0;

        // Reset active
        #3;
        rst = 0;

        // Apply D on falling edge
        repeat (6) begin
            @(negedge clk);
            D = $urandom_range(0,1);
        end

        // Asynchronous reset
        #1;
        rst = 1;
        #3;
        rst = 0;

        // More random data
        repeat (6) begin
            @(negedge clk);
            D = $urandom_range(0,1);
        end

        $finish;
    end

    initial begin
        $dumpfile("dump.vcd");
        $dumpvars(0, tb_d_ff_reset);
    end

endmodule