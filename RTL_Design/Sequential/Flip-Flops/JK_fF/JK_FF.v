module JK_FF (
    input clk, rst,
    input J, K,
    output reg Q,
    output Q_bar
);

always @ (posedge clk or posedge rst) begin
    if (rst) begin
        Q <= 1'b0;
    end
    else begin
        case ({J, K})
            2'b00 : Q <= Q; 
            2'b01 : Q <= 1'b0; 
            2'b10 : Q <= 1'b1; 
            2'b11 : Q <= ~Q;
        endcase
    end
    end
assign Q_bar = ~Q;

endmodule
