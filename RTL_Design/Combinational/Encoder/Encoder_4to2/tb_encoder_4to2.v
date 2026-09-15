module tb_encoder_4to2;

reg  [3:0] I;
wire [1:0] Y;
reg  [1:0] expected;

encoder_4to2 DUT (
    .I(I),
    .Y(Y)
);  

initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0, tb_encoder_4to2);

        // Test 1
    I = 4'b0001;
    expected = 2'b00;
    #10;
    if (Y == expected)
        $display("PASS: I=%b Y=%b", I, Y);
    else
        $display("FAIL: I=%b Y=%b Expected=%b", I, Y, expected);

    // Test 2
    I = 4'b0010;
    expected = 2'b01;
    #10;
    if (Y == expected)
        $display("PASS: I=%b Y=%b", I, Y);
    else
        $display("FAIL: I=%b Y=%b Expected=%b", I, Y, expected);

    // Test 3
    I = 4'b0100;
    expected = 2'b10;
    #10;
    if (Y == expected)
        $display("PASS: I=%b Y=%b", I, Y);
    else
        $display("FAIL: I=%b Y=%b Expected=%b", I, Y, expected);

    // Test 4
    I = 4'b1000;
    expected = 2'b11;
    #10;
    if (Y == expected)
        $display("PASS: I=%b Y=%b", I, Y);
    else
        $display("FAIL: I=%b Y=%b Expected=%b", I, Y, expected);

//        I = 4'b0001;
//        #10 I = 4'b0010;
//        #10 I = 4'b0100;
//        #10 I = 4'b1000;

//I = 4'h1;
// #10 I = 4'h2;
// #10 I = 4'h4;
// #10 I = 4'h8;

//    I[3] = 0 ; I[2] = 0 ; I[1] = 0 ; I[0] = 1;
//    #10 I[3] = 0 ; I[2] = 0 ; I[1] = 1 ; I[0] = 0;
//    #10 I[3] = 0 ; I[2] = 1 ; I[1] = 0 ; I[0] = 0;
//    #10 I[3] = 1 ; I[2] = 0 ; I[1] = 0 ; I[0] = 0;

    #10 $finish;

end
endmodule