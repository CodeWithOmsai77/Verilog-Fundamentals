module ALU (
    input [3:0] A,
    input [3:0] B,
    input [2:0] S,
    output reg [3:0] Y,
    output reg Cout
);

always @ (*) begin 
    case (S) 
        3'b000 : {Cout, Y} = A + B;
        3'b001 : {Cout, Y} = {1'b0, A} + {1'b0, ~B} + 5'd1;
        3'b010 : begin 
            Y = A & B ; Cout = 1'b0;
        end
        3'b011 : begin 
            Y = A | B ; Cout = 1'b0;
        end
        3'b100 : begin
            Y = A ^ B ; Cout = 1'b0;
        end
        3'b101 : begin 
            Y = ~A ; Cout = 1'b0;
        end
        3'b110 : begin 
            Y = A << 1 ; Cout = A[3] ;
        end
        3'b111 : begin
            Y = A >> 1 ; Cout = A[0] ;
        end
        default : begin
            Y = 4'b0000 ; Cout = 1'b0;
        end
    endcase
end
endmodule