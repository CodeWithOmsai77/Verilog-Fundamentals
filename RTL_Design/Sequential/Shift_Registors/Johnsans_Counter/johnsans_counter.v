module johnsans_counter (
    input clk, rst,
    output reg [3:0] Q
);

always @ (posedge clk or posedge rst) begin
    if (rst) begin
        Q <= 4'b0000;
    end
    
    else begin
        Q[3] <= ~Q[0];
        Q[2] <= Q[3];
        Q[1] <= Q[2];
        Q[0] <= Q[1];
    end
end
endmodule