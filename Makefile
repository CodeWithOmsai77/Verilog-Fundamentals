# ============================================================
# Master Makefile for verilog_Learning
# ============================================================

SEARCH_DIRS = RTL_Design Verilog_Basics

# Icarus Verilog options
IVERILOG_FLAGS = -g2005-sv

# RTL library directories
LIB_DIRS = \
	-y Verilog_Basics/Combinational/Multiplexers/mux_2to1 \
	-y Verilog_Basics/Combinational/Multiplexers/mux_4to1 \
	-y Verilog_Basics/Combinational/Multiplexers/mux_8to1 \
	-y Verilog_Basics/Combinational/Multiplexers/mux_16to1 \
	-y Verilog_Basics/Combinational/Demultiplexer/demux_1to2 \
	-y Verilog_Basics/Combinational/Demultiplexer/demux_1to4 \
	-y Verilog_Basics/Combinational/Demultiplexer/demux_1to8 \
	-y Verilog_Basics/Combinational/Demultiplexer/demux_1to16


# ============================================================
# Help
# ============================================================

help:
	@echo ""
	@echo "Verilog Learning - Make Commands"
	@echo "================================="
	@echo ""
	@echo "  make list"
	@echo "      List all Verilog projects"
	@echo ""
	@echo "  make run PROJECT=<name>"
	@echo "      Compile + simulate + open GTKWave"
	@echo ""
	@echo "  make compile PROJECT=<name>"
	@echo "      Compile RTL + testbench only"
	@echo ""
	@echo "  make sim PROJECT=<name>"
	@echo "      Run an already compiled simulation"
	@echo ""
	@echo "  make wave PROJECT=<name>"
	@echo "      Open existing VCD in GTKWave"
	@echo ""
	@echo "  make lint PROJECT=<name>"
	@echo "      Run Verilator lint"
	@echo ""
	@echo "  make clean"
	@echo "      Remove generated simulation files"
	@echo ""
	@echo "  make clean-all"
	@echo "      Remove all generated simulation artifacts"
	@echo ""


# ============================================================
# List Projects
# ============================================================

list:
	@echo ""
	@echo "Available Verilog projects:"
	@echo "==========================="
	@find $(SEARCH_DIRS) -type f -name "*.v" \
		! -name "tb_*.v" \
		! -name "*_tb.v" \
		! -name "checker.v" \
		! -name "sim.out" \
		| sed 's|/[^/]*\.v$$||' \
		| sort -u
	@echo ""


# ============================================================
# Run
# ============================================================

run:
	@DIR="$$(find $(SEARCH_DIRS) -type d -iname "$(PROJECT)" -print -quit)"; \
	if [ -z "$$DIR" ]; then \
		echo "ERROR: Project '$(PROJECT)' not found."; \
		echo "Run: make list"; \
		exit 1; \
	fi; \
	echo ""; \
	echo "========================================"; \
	echo "Project: $$DIR"; \
	echo "========================================"; \
	RTL="$$(find "$$DIR" -maxdepth 1 -type f -name "*.v" \
		! -name "tb_*.v" \
		! -name "*_tb.v" \
		! -name "checker.v" \
		| head -n 1)"; \
	TB="$$(find "$$DIR" -maxdepth 1 -type f \
		\( -name "tb_*.v" -o -name "*_tb.v" \) \
		| head -n 1)"; \
	if [ -z "$$RTL" ]; then \
		echo "ERROR: RTL file not found."; \
		exit 1; \
	fi; \
	if [ -z "$$TB" ]; then \
		echo "ERROR: Testbench not found."; \
		exit 1; \
	fi; \
	echo "RTL : $$RTL"; \
	echo "TB  : $$TB"; \
	echo ""; \
	iverilog $(IVERILOG_FLAGS) $(LIB_DIRS) \
		-o "$$DIR/sim.out" "$$RTL" "$$TB"; \
	if [ $$? -ne 0 ]; then \
		echo "Compilation FAILED."; \
		exit 1; \
	fi; \
	(cd "$$DIR" && vvp sim.out); \
	if [ -f "$$DIR/dump.vcd" ]; then \
		gtkwave "$$DIR/dump.vcd" & \
	else \
		echo ""; \
		echo "No dump.vcd found. GTKWave not opened."; \
	fi


# ============================================================
# Compile
# ============================================================

compile:
	@DIR="$$(find $(SEARCH_DIRS) -type d -iname "$(PROJECT)" -print -quit)"; \
	if [ -z "$$DIR" ]; then \
		echo "ERROR: Project '$(PROJECT)' not found."; \
		exit 1; \
	fi; \
	RTL="$$(find "$$DIR" -maxdepth 1 -type f -name "*.v" \
		! -name "tb_*.v" \
		! -name "*_tb.v" \
		! -name "checker.v" \
		| head -n 1)"; \
	TB="$$(find "$$DIR" -maxdepth 1 -type f \
		\( -name "tb_*.v" -o -name "*_tb.v" \) \
		| head -n 1)"; \
	if [ -z "$$RTL" ] || [ -z "$$TB" ]; then \
		echo "ERROR: RTL or testbench not found."; \
		exit 1; \
	fi; \
	echo "Compiling: $$DIR"; \
	iverilog $(IVERILOG_FLAGS) $(LIB_DIRS) \
		-o "$$DIR/sim.out" "$$RTL" "$$TB"


# ============================================================
# Simulation
# ============================================================

sim:
	@DIR="$$(find $(SEARCH_DIRS) -type d -iname "$(PROJECT)" -print -quit)"; \
	if [ -z "$$DIR" ]; then \
		echo "ERROR: Project '$(PROJECT)' not found."; \
		exit 1; \
	fi; \
	if [ ! -f "$$DIR/sim.out" ]; then \
		echo "ERROR: sim.out not found."; \
		echo "Run: make compile PROJECT=$(PROJECT)"; \
		exit 1; \
	fi; \
	echo "Running simulation: $$DIR"; \
	(cd "$$DIR" && vvp sim.out)


# ============================================================
# GTKWave
# ============================================================

wave:
	@DIR="$$(find $(SEARCH_DIRS) -type d -iname "$(PROJECT)" -print -quit)"; \
	if [ -z "$$DIR" ]; then \
		echo "ERROR: Project '$(PROJECT)' not found."; \
		exit 1; \
	fi; \
	if [ ! -f "$$DIR/dump.vcd" ]; then \
		echo "ERROR: dump.vcd not found."; \
		echo "Run: make run PROJECT=$(PROJECT)"; \
		exit 1; \
	fi; \
	echo "Opening GTKWave: $$DIR/dump.vcd"; \
	gtkwave "$$DIR/dump.vcd" &


# ============================================================
# Verilator Lint
# ============================================================

lint:
	@DIR="$$(find $(SEARCH_DIRS) -type d -iname "$(PROJECT)" -print -quit)"; \
	if [ -z "$$DIR" ]; then \
		echo "ERROR: Project '$(PROJECT)' not found."; \
		exit 1; \
	fi; \
	RTL="$$(find "$$DIR" -maxdepth 1 -type f -name "*.v" \
		! -name "tb_*.v" \
		! -name "*_tb.v" \
		! -name "checker.v" \
		| head -n 1)"; \
	if [ -z "$$RTL" ]; then \
		echo "ERROR: RTL file not found."; \
		exit 1; \
	fi; \
	echo "Linting: $$RTL"; \
	verilator --lint-only "$$RTL"


# ============================================================
# Clean
# ============================================================

clean:
	@find $(SEARCH_DIRS) -type f \
		\( -name "sim.out" \
		-o -name "dump.vcd" \
		-o -name "sim.oout" \
		\) \
		-delete
	@rm -f sim.out dump.vcd
	@echo "Generated simulation files removed."


# ============================================================
# Clean All
# ============================================================

clean-all:
	@find $(SEARCH_DIRS) -type f \
		\( -name "sim.out" \
		-o -name "dump.vcd" \
		-o -name "sim.oout" \
		-o -name "*.log" \
		-o -name "*.vvp" \
		\) \
		-delete
	@rm -f sim.out dump.vcd
	@echo "All generated simulation artifacts removed."


# ============================================================
# Test
# ============================================================

hello:
	@echo "Master Makefile is working!"


.PHONY: help list run compile sim wave lint clean clean-all hello
