
`timescale 1ns / 1ps

module tb_JK_FF;

    reg clk;
    reg rst;
    reg J;
    reg K;

    wire Q;
    wire Q_bar;

    // DUT instantiation
    JK_FF dut (
        .clk(clk),
        .rst(rst),
        .J(J),
        .K(K),
        .Q(Q),
        .Q_bar(Q_bar)
    );

    // 10ns clock period
    initial begin
        clk = 0;
        forever #5 clk = ~clk;
    end

    initial begin

        $dumpfile("dump.vcd");
        $dumpvars(0, tb_JK_FF);

        $monitor("Time=%0t | rst=%b | J=%b K=%b | Q=%b Q_bar=%b",
                 $time, rst, J, K, Q, Q_bar);

        // Initialize inputs
        rst = 1;
        J = 0;
        K = 0;

        // Apply asynchronous reset
        #12;
        rst = 0;

        // Test 1: Hold
        @(negedge clk);
        J = 0; K = 0;
        @(posedge clk); #1;

        // Test 2: Set
        @(negedge clk);
        J = 1; K = 0;
        @(posedge clk); #1;

        // Test 3: Hold
        @(negedge clk);
        J = 0; K = 0;
        @(posedge clk); #1;

        // Test 4: Reset through JK inputs
        @(negedge clk);
        J = 0; K = 1;
        @(posedge clk); #1;

        // Test 5: Toggle
        @(negedge clk);
        J = 1; K = 1;
        @(posedge clk); #1;

        // Test 6: Toggle again
        @(negedge clk);
        J = 1; K = 1;
        @(posedge clk); #1;

        // Test 7: Asynchronous reset between clock edges
        #3 rst = 1;

        #10;
        $finish;

    end

endmodule
