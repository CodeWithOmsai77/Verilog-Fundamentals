`timescale 1ns / 1ps

module T_FF_Assyn (
    input wire clk,
    input wire rst,
    input wire T,
    output reg Q
);

always @ (posedge clk or negedge rst) begin
    if (!rst) begin
        Q <= 1'b0;
    end
    else if (T) begin
        Q <= ~Q; // toggle
    end

end

endmodule