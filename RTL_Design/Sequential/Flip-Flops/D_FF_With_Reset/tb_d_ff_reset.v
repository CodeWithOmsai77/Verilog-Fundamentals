module tb_d_ff_reset;
reg D;
reg clk ;
reg rst;
wire Q;

d_ff_reset DUT ( .D(D), .clk(clk), .rst(rst), .Q(Q) );

//clock generation 
initial begin 
    clk = 0;
    forever #5 clk = ~clk;
end

task check;
input expected;
begin
    #1;
    if (Q !== expected)
        $display("FAIL: t=%0t Q=%b expected=%b", $time, Q, expected);
    else
        $display("PASS: t=%0t Q=%b", $time, Q);
    end
endtask

initial begin
    D = 0;
    rst = 1;

    // Test asynchr rst
    #2; check(0);

    // Release rst 
    rst = 0;

    // Q should remain 0 before clk
    #2; check(0);

    // capture 1
    D = 1;
    @(posedge clk);
    check(1);

    // D without clk
    D = 0; 
    #2;
    check(1);

    // capture D = 0
    @(posedge clk); check(0);

    // rst async
    rst = 1;
    #2; check(0);

    // release rst
    rst = 0;
    D = 1;

    // Q should remain 0 until clk
    check(0);

    // capture after rst
    @(posedge clk);
    check(1);

$finish;
end

initial begin
    $dumpfile("dump.vcd");
    $dumpvars(0, tb_d_ff_reset);
end
endmodule