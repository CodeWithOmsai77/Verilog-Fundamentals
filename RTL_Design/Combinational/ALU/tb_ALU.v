module tb_ALU ;
    reg [3:0] A, B;
    reg [2:0] S;
    wire [3:0] Y;
    wire Cout;
    integer i;

    ALU DUT (
        .A(A),
        .B(B),
        .S(S),
        .Y(Y),
        .Cout(Cout)
    );

    initial begin

        $dumpfile ("dump.vcd");
        $dumpvars (0, tb_ALU);

        A = 4'b0101;
        B = 4'b0011;
        $display ("S  A  B  |  Y  Cout");
        $display ("-------------------");

        for (i = 0 ; i <= 8 ; i = i + 1) begin
            S = i;
            #10 $display ("%b  %b  %b  |  %b  %b", S, A, B, Y, Cout);
        end
        $finish;
    end
endmodule