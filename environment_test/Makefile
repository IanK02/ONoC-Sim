# Makefile for Verilator simulation

TOP_MODULE = counter
CPP_FILE = verilator_top.cpp
OBJ_DIR = obj_dir
EXEC = $(OBJ_DIR)/V$(TOP_MODULE)

all: run

# Compile Verilog and C++ simulation
build:
	verilator -Wall --cc $(TOP_MODULE).sv --exe $(CPP_FILE)
	make -C $(OBJ_DIR) -f V$(TOP_MODULE).mk V$(TOP_MODULE)

# Run the simulation
run: build
	./$(EXEC)

# Clean up build artifacts
clean:
	rm -rf $(OBJ_DIR) logs.vcd
