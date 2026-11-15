# Verilog RTL Design & Verification Fundamentals

<p align="center">
  <img src="https://img.shields.io/badge/HDL-Verilog%20HDL-FF4B4B?style=flat-square" alt="Verilog HDL" />
  <img src="https://img.shields.io/badge/Simulation-Icarus%20Verilog%20%7C%20Verilator-2563EB?style=flat-square" alt="Icarus Verilog and Verilator" />
  <img src="https://img.shields.io/badge/Waveforms-GTKWave-orange?style=flat-square" alt="GTKWave" />
  <img src="https://img.shields.io/badge/Environment-Linux%20%2F%20WSL2-16A34A?style=flat-square" alt="Linux WSL2" />
  <img src="https://img.shields.io/badge/Focus-RTL%20Design%20%26%20Verification-7C3AED?style=flat-square" alt="RTL design and verification" />
</p>

A hands-on repository documenting my progression in digital logic, Verilog RTL design, hierarchical hardware modelling, sequential circuits, simulation, and testbench-based verification. Designs are organized by function and include RTL source files and testbenches; selected projects also include simulation output, GTKWave screenshots, and project-level documentation.

**Open a project to inspect its RTL, testbench, and available verification results.**

---

## Project Index

### 1. Logic Gates

| Project | Link |
|---|---|
| AND Gate | [Open](./Verilog_Basics/Gates/And_Gate) |
| NAND Gate | [Open](./Verilog_Basics/Gates/NAND_Gate) |
| NOR Gate | [Open](./Verilog_Basics/Gates/NOR_Gate) |
| NOT Gate | [Open](./Verilog_Basics/Gates/NOT_Gate) |
| OR Gate | [Open](./Verilog_Basics/Gates/OR_Gate) |
| XOR Gate | [Open](./Verilog_Basics/Gates/XOR_gate) |
| XNOR Gate | [Open](./Verilog_Basics/Gates/XNOR_Gate) |

### 2. Multiplexers

| Project | Link |
|---|---|
| 2:1 Multiplexer | [Open](./Verilog_Basics/Combinational/Multiplexers/mux_2to1) |
| 4:1 Multiplexer | [Open](./Verilog_Basics/Combinational/Multiplexers/mux_4to1) |
| 8:1 Multiplexer | [Open](./Verilog_Basics/Combinational/Multiplexers/mux_8to1) |
| 16:1 Multiplexer | [Open](./Verilog_Basics/Combinational/Multiplexers/mux_16to1) |
| Hierarchical 16:1 MUX using 4:1 MUX blocks | [Open](./Verilog_Basics/Combinational/Multiplexers/Mux_16to1_using_4to1) |

### 3. Demultiplexers

| Project | Link |
|---|---|
| 1:2 Demultiplexer | [Open](./Verilog_Basics/Combinational/Demultiplexer/demux_1to2) |
| 1:4 Demultiplexer | [Open](./Verilog_Basics/Combinational/Demultiplexer/demux_1to4) |
| 1:8 Demultiplexer | [Open](./Verilog_Basics/Combinational/Demultiplexer/demux_1to8) |
| 1:16 Demultiplexer | [Open](./Verilog_Basics/Combinational/Demultiplexer/demux_1to16) |
| Hierarchical 1:4 DEMUX using 1:2 blocks | [Open](./Verilog_Basics/Combinational/Demultiplexer/Demux_1to4_using_1to2) |
| Hierarchical 1:16 DEMUX using 1:4 blocks | [Open](./Verilog_Basics/Combinational/Demultiplexer/Demux_1to16_using_1to4) |

### 4. Code Converters

| Project | Description | Link |
|---|---|---|
| 4-bit Binary-to-Gray Code Converter | Converts a 4-bit binary input into its Gray-code equivalent | [Open](./Verilog_Basics/Converter/Binary_to_Grey) |

### 5. Decoders

| Project | Description | Link |
|---|---|---|
| 2-to-4 Decoder | Basic 2-input, 4-output decoder | [Open](./RTL_Design/Combinational/Decoders/Decoder_2to4) |
| 4-to-16 Decoder using 2-to-4 blocks | Hierarchical decoder implementation | [Open](./RTL_Design/Combinational/Decoders/Decoder_4to16_2to4) |
| 6-to-64 Decoder | 6-input decoder with 64 outputs | [Open](./RTL_Design/Combinational/Decoders/decoder_6to64) |

### 6. Encoders and Priority Encoders

| Project | Description | Link |
|---|---|---|
| 4:2 Encoder | Basic encoder | [Open](./RTL_Design/Combinational/Encoder/Encoder_4to2) |
| 8:3 Encoder | 8-input binary encoder | [Open](./RTL_Design/Combinational/Encoder/Encoder_8to3) |
| 8:3 Encoder using 4:2 Encoder blocks | Hierarchical implementation | [Open](./RTL_Design/Combinational/Encoder/Encoder_8to3_using_4to2) |
| 16:4 Encoder | 16-input binary encoder | [Open](./RTL_Design/Combinational/Encoder/Encoder_16to4) |
| 4:2 Priority Encoder | Priority-based encoding | [Open](./RTL_Design/Combinational/Encoder/Priority_Encoder_4to2) |
| 4:2 Priority Encoder with Valid Output | Priority encoder with validity indication | [Open](./RTL_Design/Combinational/Encoder/Priority_Encoder_4to2_using_Valid_output) |

### 7. Adders

| Project | Description | Link |
|---|---|---|
| Half Adder | 1-bit addition with Sum and Carry | [Open](./RTL_Design/Combinational/Adders/Half_Adder) |
| Full Adder | 1-bit addition with A, B, Cin, Sum, and Cout | [Open](./RTL_Design/Combinational/Adders/Full_Adder) |
| Full Adder using Two Half Adders | Hierarchical construction from two Half Adders | [Open](./RTL_Design/Combinational/Adders/full_adder_using_two_half_adder) |
| 4-bit Ripple Carry Adder | Four cascaded Full Adders; self-checking exhaustive testbench with 512 input combinations | [Open](./RTL_Design/Combinational/Adders/Ripple_Carry_Adder/4_bit_ripple_carry_adder) |

### 8. Arithmetic Logic Unit

| Project | Description | Link |
|---|---|---|
| 4-bit ALU | Eight arithmetic and logic operations: add, subtract, AND, OR, XOR, NOT A, shift left, and shift right; includes simulation output and GTKWave waveform | [Open](./RTL_Design/Combinational/ALU) |

### 9. Sequential Logic — Flip-Flops

| Project | Description | Link |
|---|---|---|
| D Flip-Flop | Basic edge-triggered D flip-flop | [Open](./RTL_Design/Sequential/Flip-Flops/D_Flip-Flop) |
| D Flip-Flop with Reset | D flip-flop with asynchronous reset | [Open](./RTL_Design/Sequential/Flip-Flops/D_FF_With_Reset) |
| JK Flip-Flop | JK operation with hold, set, reset, toggle, and asynchronous reset | [Open](./RTL_Design/Sequential/Flip-Flops/JK_fF) |
| T Flip-Flop with Asynchronous Reset | Toggle flip-flop with asynchronous active-low reset | [Open](./RTL_Design/Sequential/Flip-Flops/T_FF_With_Async_Reset) |

### 10. Shift Registers and Counters

| Project | Description | Link |
|---|---|---|
| 4-bit Johnson Counter | Four-stage twisted-ring counter with complemented feedback; produces eight states | [Open](./RTL_Design/Shift_Registers/Johnson_Counter) |

---


| Project | Description | Link |
|---|---|---|
| D Flip-Flop | Basic edge-triggered D flip-flop | [Open](./RTL_Design/Sequential/Flip-Flops/D_Flip-Flop) |
| D Flip-Flop with Reset | D flip-flop with asynchronous reset | [Open](./RTL_Design/Sequential/Flip-Flops/D_FF_With_Reset) |
| JK Flip-Flop | JK operation with hold, set, reset, toggle, and asynchronous reset | [Open](./RTL_Design/Sequential/Flip-Flops/JK_fF) |
| T Flip-Flop with Asynchronous Reset | Toggle flip-flop with asynchronous active-low reset | [Open](./RTL_Design/Sequential/Flip-Flops/T_FF_With_Async_Reset) |

---

## Simulation and Development Workflow

The repository uses Verilog HDL with command-line simulation and waveform inspection.

Typical Icarus Verilog workflow:

```bash
iverilog -o sim.out design.v testbench.v
vvp sim.out
gtkwave dump.vcd
```

Use the source filenames and compile options required by each individual project. Some testbenches generate VCD files for waveform analysis.

- [Root Makefile](./Makefile) — project simulation and automation targets.
- [Makefile and RTL Automation Notes](./Makefile_and_RTL_Automation_Notes.md) — command-line workflow and automation notes.

## Repository Structure

```text
Verilog-Fundamentals/
├── Verilog_Basics/
│   ├── Gates/
│   ├── Combinational/
│   │   ├── Multiplexers/
│   │   └── Demultiplexer/
│   └── Converter/
│       └── Binary_to_Grey/
├── RTL_Design/
│   ├── Combinational/
│   │   ├── ALU/
│   │   ├── Adders/
│   │   │   └── Ripple_Carry_Adder/
│   │   │       └── 4_bit_ripple_carry_adder/
│   │   ├── Decoders/
│   │   └── Encoder/
│   └── Sequential/
│       └── Flip-Flops/
├── Makefile
├── Makefile_and_RTL_Automation_Notes.md
└── README.md
```

## Learning Focus

The project sequence moves from basic logic gates and combinational building blocks to hierarchical arithmetic designs and sequential RTL. Each implementation is an opportunity to practise translating logic into Verilog, organizing a testbench, compiling, checking simulation output, and inspecting waveforms.

> Understand the logic, write the RTL, verify the behaviour, and debug the result.
