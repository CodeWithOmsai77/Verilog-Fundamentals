# Half Adder

A 1-bit combinational circuit that adds two inputs (**A** and **B**) and produces **Sum** and **Carry**.

## Boolean Equations

- **Sum** = A XOR B
- **Carry** = A AND B

## Truth Table

| A | B | Sum | Carry |
|---|---|---|---|
| 0 | 0 | 0 | 0 |
| 0 | 1 | 1 | 0 |
| 1 | 0 | 1 | 0 |
| 1 | 1 | 0 | 1 |

A Half Adder has no carry-in input. Therefore, it cannot directly serve as the least-significant or any other stage of a multi-bit addition when an incoming carry must be included; a Full Adder is required for that operation.

## Simulation Output

The testbench checks all four input combinations.

![Half Adder simulation output](./images/simulation.png)

## GTKWave Waveform

![Half Adder waveform](./images/waveform.png)
