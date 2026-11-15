`timescale 1ns / 1ps

module tb_SISO;
reg clk, rst;
reg serial_in;
wire serial_out;

SISO Dut (
    .clk(clk),
    .rst(rst),
    .serial_in(serial_in),
    .serial_out(serial_out)
);

always #10 clk = ~clk;

always @(posedge clk) begin
    $strobe("Time=%0t | rst=%b | serial_in=%b | Internal_reg=%b | serial_out=%b", $time, rst, serial_in, Dut.shift_reg, serial_out);
end

initial begin

    $dumpfile("SISO.vcd");
    $dumpvars(0, tb_SISO);

    clk = 0;
    rst = 1;
    serial_in = 0;

    #20 rst = 0;

    // Input serial sequence 1  0  1  1
    @(posedge clk); serial_in = 1;
    @(posedge clk); serial_in = 0;
    @(posedge clk); serial_in = 1;
    @(posedge clk); serial_in = 1;

    // Feed 0s to push in sequence
    @(posedge clk); serial_in = 0;
    @(posedge clk); serial_in = 0;
    @(posedge clk); serial_in = 0;
    @(posedge clk); serial_in = 0;

    #40;

    $finish;

end
endmodule