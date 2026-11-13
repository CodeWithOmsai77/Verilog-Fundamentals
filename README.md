# Verilog RTL Design & Verification Fundamentals

<p align="center">
  <img src="https://img.shields.io/badge/HDL-Verilog%20%7C%20SystemVerilog-FF4B4B?style=flat-square" alt="Verilog and SystemVerilog" />
  <img src="https://img.shields.io/badge/Simulation-Icarus%20Verilog%20%7C%20Verilator-2563EB?style=flat-square" alt="Icarus Verilog and Verilator" />
  <img src="https://img.shields.io/badge/Waveforms-GTKWave-orange?style=flat-square" alt="GTKWave" />
  <img src="https://img.shields.io/badge/Environment-Linux%20%2F%20WSL2-16A34A?style=flat-square" alt="Linux WSL2" />
  <img src="https://img.shields.io/badge/Focus-Digital%20RTL%20Design%20%26%20Verification-7C3AED?style=flat-square" alt="Digital RTL design and verification" />
</p>

A hands-on repository for learning digital logic, Verilog RTL design, hierarchical hardware, simulation, waveform debugging, and introductory sequential logic. Projects are developed and tested in a Linux/WSL environment using open-source EDA tools.

**Use the project links below to open each design, its RTL, and any available testbench directly on GitHub.**

---

## 📚 Project Index

### 1. Logic Gates

| Project | Source / Project Files |
|---|---|
| AND Gate | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Gates/And_Gate) |
| NAND Gate | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Gates/NAND_Gate) |
| NOR Gate | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Gates/NOR_Gate) |
| NOT Gate | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Gates/NOT_Gate) |
| OR Gate | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Gates/OR_Gate) |
| XOR Gate | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Gates/XOR_gate) |
| XNOR Gate | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Gates/XNOR_Gate) |

### 2. Multiplexers (MUX)

| Project | Source / Project Files |
|---|---|
| 2:1 Multiplexer | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Combinational/Multiplexers/mux_2to1) |
| 4:1 Multiplexer | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Combinational/Multiplexers/mux_4to1) |
| 8:1 Multiplexer | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Combinational/Multiplexers/mux_8to1) |
| 16:1 Multiplexer | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Combinational/Multiplexers/mux_16to1) |
| Hierarchical 16:1 MUX using 4:1 MUX blocks | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Combinational/Multiplexers/Mux_16to1_using_4to1) |

### 3. Demultiplexers (DEMUX)

| Project | Source / Project Files |
|---|---|
| 1:2 Demultiplexer | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Combinational/Demultiplexer/demux_1to2) |
| 1:4 Demultiplexer | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Combinational/Demultiplexer/demux_1to4) |
| 1:8 Demultiplexer | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Combinational/Demultiplexer/demux_1to8) |
| 1:16 Demultiplexer | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Combinational/Demultiplexer/demux_1to16) |
| Hierarchical 1:4 DEMUX using 1:2 blocks | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Combinational/Demultiplexer/Demux_1to4_using_1to2) |
| Hierarchical 1:16 DEMUX using 1:4 blocks | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/Verilog_Basics/Combinational/Demultiplexer/Demux_1to16_using_1to4) |

### 4. Decoders

| Project | Source / Project Files |
|---|---|
| 2-to-4 Decoder | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/RTL_Design/Combinational/Decoders/Decoder_2to4) |
| Hierarchical 4-to-16 Decoder using 2-to-4 blocks | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/RTL_Design/Combinational/Decoders/Decoder_4to16_2to4) |
| 6-to-64 Decoder | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/RTL_Design/Combinational/Decoders/decoder_6to64) |

### 5. Encoders and Priority Encoders

| Project | Source / Project Files |
|---|---|
| 4:2 Encoder | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/RTL_Design/Combinational/Encoder/Encoder_4to2) |
| 8:3 Encoder | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/RTL_Design/Combinational/Encoder/Encoder_8to3) |
| 8:3 Encoder using 4:2 Encoder blocks | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/RTL_Design/Combinational/Encoder/Encoder_8to3_using_4to2) |
| 16:4 Encoder | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/RTL_Design/Combinational/Encoder/Encoder_16to4) |
| 4:2 Priority Encoder | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/RTL_Design/Combinational/Encoder/Priority_Encoder_4to2) |
| 4:2 Priority Encoder with Valid Output | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/RTL_Design/Combinational/Encoder/Priority_Encoder_4to2_using_Valid_output) |

### 6. Adders

| Project | Implementation / Verification | Source / Project Files |
|---|---|---|
| Half Adder | Combinational 1-bit adder with Sum and Carry outputs | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/RTL_Design/Combinational/Adders/Half_Adder) |
| Full Adder | Combinational 1-bit adder with two outputs: Sum and Carry | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/RTL_Design/Combinational/Adders/Full_Adder) |
| Full Adder using Two Half Adders | Hierarchical Full Adder built from two Half Adder modules | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/RTL_Design/Combinational/Adders/full_adder_using_two_half_adder) |
| 4-bit Ripple Carry Adder | Hierarchical design using four Full Adder modules; self-checking testbench covering all 512 input combinations | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/RTL_Design/Combinational/Adders/Ripple_Carry_Adder) |

### 7. Sequential Logic — Flip-Flops

| Project | Source / Project Files |
|---|---|
| D Flip-Flop | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/RTL_Design/Sequential/Flip-Flops/D_Flip-Flop) |
| D Flip-Flop with Reset | [Open project](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/tree/main/RTL_Design/Sequential/Flip-Flops/D_FF_With_Reset) |

---

## 🧰 Workflow and Learning Notes

- [Root Makefile](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/blob/main/Makefile) — project simulation and automation targets.
- [Makefile and RTL Automation Notes](https://github.com/CodeWithOmsai77/Verilog-Fundamentals/blob/main/Makefile_and_RTL_Automation_Notes.md) — notes on command-line workflow and automation.

### Typical Linux Workflow

1. Open the project directory in Ubuntu/WSL.
2. Read the RTL and its testbench.
3. Compile and run using the command or Makefile target documented for that project.
4. Inspect the terminal output and waveform where available.
5. Read the code and testbench together to understand how the expected behaviour is verified.

The exact commands can differ between older Verilog examples and projects using Verilator. Check each project's files and the root Makefile before running a command.

---

## 🧭 Repository Structure

```text
Verilog-Fundamentals/
├── Verilog_Basics/
│   ├── Gates/
│   └── Combinational/
│       ├── Multiplexers/
│       └── Demultiplexer/
├── RTL_Design/
│   ├── Combinational/
│   │   ├── Adders/
│   │   │   ├── Half_Adder/
│   │   │   ├── Full_Adder/
│   │   │   ├── full_adder_using_two_half_adder/
│   │   │   └── Ripple_Carry_Adder/
│   │   ├── Decoders/
│   │   └── Encoder/
│   └── Sequential/
│       └── Flip-Flops/
├── Projects/
│   └── Traffic_Light_Controller/
├── Makefile
├── Makefile_and_RTL_Automation_Notes.md
└── README.md
```

---

## 🎯 Learning Philosophy

The objective is to progress from basic logic gates to structured combinational RTL, hierarchical design, and sequential circuits—while practising simulation, debugging, waveform analysis, and automation.

> Real learning happens when you debug your own mistakes.

<p align="center">
  <img src="https://capsule-render.vercel.app/api?type=waving&color=11998e&height=80&section=footer&fontSize=16&fontColor=0f2027" alt="Keep learning" />
</p>
