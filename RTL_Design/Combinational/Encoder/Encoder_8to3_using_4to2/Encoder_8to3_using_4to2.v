module Encoder_8to3_using_4to2 (
    input  [7:0] I,
    output [2:0] Y
);

wire [1:0] Y_low;
wire [1:0] Y_high;

// Lower 4 inputs: I[3:0]
Encoder_4to2 E0 (
    .I(I[3:0]),
    .Y(Y_low)
);

// Upper 4 inputs: I[7:4]
Encoder_4to2 E1 (
    .I(I[7:4]),
    .Y(Y_high)
);

// Select upper/lower group
assign Y[2] = |I[7:4];

assign Y[1:0] = Y[2] ? Y_high : Y_low;

endmodule