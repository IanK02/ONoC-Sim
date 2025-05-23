#ifndef NETWORK_H
#define NETWORK_H

#include "components.h"

#define NUM_NODES 2
#define NUM_WAVELENGTHS 1
#define SIMULATION_TIME 1000  // ns

typedef struct {
    OpticalRouter* routers[NUM_NODES];
    Waveguide* waveguides[NUM_NODES][NUM_NODES];
    Photodetector* photodetectors[NUM_NODES];
    MuxDemux* muxes[NUM_NODES];
    MuxDemux* demuxes[NUM_NODES];
    
    // Statistics
    float total_latency;
    float total_power;
    int packets_sent;
    int packets_received;
    float total_bandwidth;
} OpticalNetwork;

// Function prototypes
OpticalNetwork* create_network();
void simulate_network(OpticalNetwork* network);
void free_network(OpticalNetwork* network);
void generate_traffic(OpticalNetwork* network, int current_time);
void propagate_signals(OpticalNetwork* network);
void process_routers(OpticalNetwork* network);
void process_photodetectors(OpticalNetwork* network);
void update_statistics(OpticalNetwork* network, float latency, float power, float bandwidth);

#endif