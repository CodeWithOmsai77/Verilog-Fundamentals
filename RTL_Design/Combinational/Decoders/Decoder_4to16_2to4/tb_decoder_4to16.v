`timescale 1ns/1ps

module tb_decoder_4to16;

    reg  [3:0]  I;
    wire [15:0] Y;
    reg [15:0] expected;

    // DUT
    decoder_4to16_2to4 DUT (
        .I(I),
        .Y(Y)
    );

    integer i;
    initial begin 
        $dumpfile("dump.vcd");
        $dumpvars(0, tb_decoder_4to16);

        for (i = 0 ; i < 16 ; i++)begin 
            I = i;
            expected = 16'b1 << I;
            #10;

            if (Y == expected)
            $display("PASS: I=%b Y=%b", I, Y);
            else
            $display("FAIL: I=%b Y=%b Expected=%b",
                     I, Y, expected);

        end
        $finish;
    end
endmodule