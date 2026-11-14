# 4-bit ALU

A 4-bit combinational Arithmetic Logic Unit implemented in **Verilog HDL**.

## Operations

| Select (S) | Operation | Result |
|---|---|---|
| 000 | Addition | A + B |
| 001 | Subtraction | A - B (two's complement) |
| 010 | AND | A & B |
| 011 | OR | A \u007c B |
| 100 | XOR | A ^ B |
| 101 | NOT A | ~A |
| 110 | Shift left | A << 1 |
| 111 | Shift right | A >> 1 |

## Files

- `ALU.v` — synthesizable ALU RTL.
- `tb_ALU.v` — testbench for the eight operations.

## Simulation

```bash
iverilog -g2005 -o alu_sim ALU.v tb_ALU.v
vvp alu_sim
gtkwave dump.vcd
```

## Simulation Output

The sample run uses A = `0101` and B = `0011`.

![ALU simulation terminal output](./simulation_output.png)

## GTKWave

The waveform shows the selector stepping through all eight operations, with the corresponding ALU result and carry output.

![ALU GTKWave waveform](./alu_gtkwave.png)
