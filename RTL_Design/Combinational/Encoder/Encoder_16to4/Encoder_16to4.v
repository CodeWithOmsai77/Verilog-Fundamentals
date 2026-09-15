module Encoder_16to4 (
    input [15:0] I,
    output reg [3:0] Y
);

//assign Y[3] = I[8] | I[9] | I[10] | I[11] | I[12] | I[13] | I[14] | I[15];
//assign Y[2] = I[4] | I[5] | I[6] | I[7] | I[12] | I[13] | I[14] | I[15];
//assign Y[1] = I[2] | I[3] | I[6] | I[7] | I[10] | I[11] | I[12] | I[13] | I[14] | I[15];
//assign Y[0] = I[1] | I[3] | I[5] | I[7] | I[9] | I[11] | I[13] | I[15];


integer i;
always @(*) begin
    Y = 6'b0000;
    
    for (i = 0; i < 16; i = i + 1) begin
        if (I[i])
        Y = i;
   end
end

endmodule