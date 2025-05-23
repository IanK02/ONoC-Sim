#include <stdio.h>
#include <stdlib.h>
#include "network.h"
#include "stats.h"

int main() {
    printf("Optical Network-on-Chip Simulation\n");
    printf("=================================\n");
    
    // Create and simulate the network
    OpticalNetwork* network = create_network();
    simulate_network(network);
    
    // Calculate final statistics
    float avg_latency = network->total_latency / network->packets_received;
    float throughput = (float)network->packets_received / SIMULATION_TIME;
    float bandwidth = network->total_bandwidth / SIMULATION_TIME;
    float avg_power = network->total_power / SIMULATION_TIME;
    
    // Print final statistics
    print_statistics(avg_latency, throughput, bandwidth, avg_power);
    
    // Clean up
    free_network(network);
    
    return 0;
}