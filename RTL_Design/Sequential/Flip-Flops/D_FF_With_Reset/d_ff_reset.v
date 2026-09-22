module d_ff_reset (
    input  wire D,
    clk,
    rst,
    output reg  Q
);

  always @(posedge clk or posedge rst) begin
    if (rst) Q <= 1'b0;
    else Q <= D;

  end
endmodule
