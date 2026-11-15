module tb_BTG;

    reg  [3:0] bin;
    wire [3:0] gray;
    integer i;

    BTG uut (
        .bin(bin),
        .gray(gray)
    );

    initial begin

        $dumpfile("BTG.vcd");
        $dumpvars (0, tb_BTG);

        $monitor("Time = %0t | Binary = %b --> Gray = %b", $time, bin, gray);

        for (i = 0; i < 16; i = i + 1) begin
            bin = i;
            #10;
        end

        $finish;
    end

endmodule
