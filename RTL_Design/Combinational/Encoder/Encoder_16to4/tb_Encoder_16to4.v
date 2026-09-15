module tb_Encoder_16to4;
reg [15:0] I;
wire [3:0] Y;
reg [3:0] expected;

Encoder_16to4 DUT (
    .I(I),
    .Y(Y)
);

integer i;
initial begin 
    $dumpfile("dump.vcd");
    $dumpvars(0, tb_Encoder_16to4);

    for (i = 0 ; i < 16 ; i++) begin
        I = '0;
        I[i] = 1'b1;
        #10;
        expected = i;
        if (Y == expected)
            $display("PASS: I=%b, Y=%b",  I, Y);
        else
            $display("FAIL: I=%b, Expected=%b, Actual=%b",
                      I, expected, Y);
    end
    $finish;
end
endmodule 
        
