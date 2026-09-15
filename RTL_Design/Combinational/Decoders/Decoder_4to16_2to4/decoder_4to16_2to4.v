module decoder_4to16_2to4 (
    input  [3:0] I,
    output [15:0] Y
);

wire [3:0] en;

// First 2:4 decoder
Decoder_2to4 D0 (
    .I(I[3:2]),
    .E(1'b1),
    .Y(en)
);

// Second-level 2:4 decoders
Decoder_2to4 D1 (
    .I(I[1:0]),
    .E(en[0]),
    .Y(Y[3:0])
);

Decoder_2to4 D2 (
    .I(I[1:0]),
    .E(en[1]),
    .Y(Y[7:4])
);

Decoder_2to4 D3 (
    .I(I[1:0]),
    .E(en[2]),
    .Y(Y[11:8])
);

Decoder_2to4 D4 (
    .I(I[1:0]),
    .E(en[3]),
    .Y(Y[15:12])
);

endmodule