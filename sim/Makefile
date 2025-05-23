TOP = onoc_bus
CPP := $(realpath Verilator_top.cpp)
SRC_DIR = ../src
TOP_DIR = $(SRC_DIR)/top
COMPONENTS_DIR = $(SRC_DIR)/components
ARBITERS_DIR = $(SRC_DIR)/components/arbiters

# Listed in compilation order - packet_pkg.sv must come first
SV = $(COMPONENTS_DIR)/packet_pkg.sv \
     $(TOP_DIR)/$(TOP).sv \
     $(COMPONENTS_DIR)/ip_block.sv \
     $(COMPONENTS_DIR)/modulator.sv \
     $(COMPONENTS_DIR)/waveguide.sv \
     $(COMPONENTS_DIR)/photodetector.sv \
	 $(ARBITERS_DIR)/round_robin_arbiter.sv \
	 $(ARBITERS_DIR)/masked_round_robin_arbiter.sv \
	 $(ARBITERS_DIR)/fixed_priority_arbiter.sv \
     $(COMPONENTS_DIR)/router.sv\

INCLUDE_DIRS = -I$(SRC_DIR) -I$(TOP_DIR) -I$(COMPONENTS_DIR)

TRACE ?= 0
ifeq ($(TRACE), 1)
    TRACE_FLAGS = --trace --trace-structs
else
    TRACE_FLAGS =
endif

all: build

build:
	verilator -Wall --cc $(SV) $(INCLUDE_DIRS) --exe $(CPP) --top-module $(TOP)
	make -C obj_dir -f V$(TOP).mk V$(TOP)

run: build
	./obj_dir/V$(TOP) | tee verilator_output.txt
	python3 plot_results.py
	python3 plot_latency.py

clean:
	rm -rf obj_dir *.vcd $(TOP) results.csv latencies.csv verilator_output.txt \
	throughput.png packets_sent_received.png bandwidth_utilization.png \
	latency_distribution.png avg_latency_per_sender.png \
