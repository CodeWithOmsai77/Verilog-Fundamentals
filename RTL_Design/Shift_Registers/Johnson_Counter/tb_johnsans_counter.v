`timescale 1ns / 1ps

module tb_johnsans_counter;
reg clk, rst;
wire [3:0] Q;

johnsans_counter DUT (
    .clk(clk), 
    .rst(rst),
    .Q(Q)
);

always #5 clk = ~clk;

initial begin 
    $dumpfile("JC.vcd");
    $dumpvars(0, tb_johnsans_counter);

    rst = 1;
    clk = 0;

    #100;
    rst = 0;

    #150;

    $finish;
end

    initial begin
        $monitor ("Time=%0t | rst=%b | Q=%b", $time, rst, Q);
    end


endmodule
    