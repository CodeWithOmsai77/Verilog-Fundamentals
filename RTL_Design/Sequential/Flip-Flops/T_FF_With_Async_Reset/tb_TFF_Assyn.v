`timescale 1ns / 1ps

module tb_TFF_Assyn;
reg clk, rst;
reg T;
wire Q;

T_FF_Assyn DUt (
    .clk(clk),
    .rst(rst),
    .T(T),
    .Q(Q)
);

initial begin 
    clk = 0;
    forever #5 clk = ~clk;
end

initial begin
    $dumpfile("T_FF_Assyn.vcd");
    $dumpvars(0, tb_TFF_Assyn);

    $monitor("Time=%0t | rst=%b | T=%b | Q=%b", $time, rst, T, Q);

    rst = 0;
    T = 0;
    #10;

    rst = 1;
    T = 1;
    #20;

    T = 0;
    #20;

    rst = 0;
    #20;

    rst = 1;
    T = 1;
    #10;

    $finish;
end
endmodule