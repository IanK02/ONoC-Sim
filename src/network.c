#include "network.h"
#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <math.h>

OpticalNetwork* create_network() {
    OpticalNetwork* network = (OpticalNetwork*)malloc(sizeof(OpticalNetwork));
    
    // Create routers
    for (int i = 0; i < NUM_NODES; i++) {
        network->routers[i] = create_router(i, NUM_NODES);
    }
    
    // Create waveguides between routers
    for (int i = 0; i < NUM_NODES; i++) {
        for (int j = 0; j < NUM_NODES; j++) {
            if (i != j) {
                network->waveguides[i][j] = create_waveguide(i * NUM_NODES + j, NUM_WAVELENGTHS);
            } else {
                network->waveguides[i][j] = NULL;
            }
        }
    }
    
    // Create photodetectors, muxes, and demuxes for each node
    for (int i = 0; i < NUM_NODES; i++) {
        network->photodetectors[i] = create_photodetector(i, NUM_WAVELENGTHS);
        network->muxes[i] = create_muxdemux(i, NUM_WAVELENGTHS, true);
        network->demuxes[i] = create_muxdemux(i, NUM_WAVELENGTHS, false);
    }
    
    // Initialize statistics
    network->total_latency = 0.0f;
    network->total_power = 0.0f;
    network->packets_sent = 0;
    network->packets_received = 0;
    network->total_bandwidth = 0.0f;
    
    return network;
}

void simulate_network(OpticalNetwork* network) {
    FILE* stats_file = fopen("data/results.csv", "w");
    if (!stats_file) {
        perror("Failed to open results file");
        return;
    }
    
    fprintf(stats_file, "time,latency,throughput,bandwidth,power\n");
    
    srand(time(NULL));
    
    for (int t = 0; t < SIMULATION_TIME; t++) {
        // Generate traffic
        generate_traffic(network, t);
        
        // Process network components
        process_routers(network);
        propagate_signals(network);
        process_photodetectors(network);
        
        // Calculate and record statistics every 10 time units
        if (t % 10 == 0) {
            float throughput = (float)network->packets_received / (t + 1);
            float avg_latency = network->total_latency / (network->packets_received + 1);
            float avg_power = network->total_power / (t + 1);
            float bandwidth = network->total_bandwidth / (t + 1);
            
            fprintf(stats_file, "%d,%.2f,%.2f,%.2f,%.2f\n", 
                    t, avg_latency, throughput, bandwidth, avg_power);
        }
    }
    
    fclose(stats_file);
}

void generate_traffic(OpticalNetwork* network, int current_time) {
    // Randomly generate traffic with 10% probability
    if (rand() % 100 < 10) {
        int src = rand() % NUM_NODES;
        int dest = rand() % NUM_NODES;
        while (dest == src) {
            dest = rand() % NUM_NODES;
        }
        
        int wavelength_idx = rand() % NUM_WAVELENGTHS;
        float wavelength = MIN_WAVELENGTH + wavelength_idx * WAVELENGTH_STEP;
        
        // Create optical signal
        OpticalSignal signal;
        signal.wavelength = wavelength;
        signal.power = 0.0f;  // Will be set by MUX
        signal.source_node = src;
        signal.destination_node = dest;
        signal.injection_time = current_time;
        signal.valid = true;
        
        // Add to MUX input
        network->muxes[src]->input = signal;
        
        // Update statistics
        network->packets_sent++;
        update_statistics(network, 0.0f, 0.0f, 10.0f);  // 10 Gbps per wavelength
    }
}

void propagate_signals(OpticalNetwork* network) {
    // Propagate signals through waveguides
    for (int i = 0; i < NUM_NODES; i++) {
        for (int j = 0; j < NUM_NODES; j++) {
            if (i != j && network->waveguides[i][j]) {
                Waveguide* wg = network->waveguides[i][j];
                
                // Apply waveguide effects (loss)
                for (int w = 0; w < wg->num_wavelengths; w++) {
                    if (wg->input_signals[w].valid) {
                        wg->output_signals[w] = wg->input_signals[w];
                        wg->output_signals[w].power -= wg->insertion_loss;
                        wg->power_consumption += 0.01f;  // Static power consumption
                        
                        // Clear input for next cycle
                        wg->input_signals[w].valid = false;
                    }
                }
            }
        }
    }
}

void process_routers(OpticalNetwork* network) {
    for (int i = 0; i < NUM_NODES; i++) {
        OpticalRouter* router = network->routers[i];
        
        // Process input ports (from DEMUX or other routers)
        for (int p = 0; p < router->num_ports; p++) {
            if (router->input_ports[p].valid) {
                OpticalSignal signal = router->input_ports[p];
                
                // Apply router effects (loss and delay)
                signal.power -= router->routing_loss;
                float latency = router->routing_delay;
                
                // Simple routing: send to destination node's port
                int dest = signal.destination_node;
                if (dest != i) {  // Not for this node
                    router->output_ports[dest] = signal;
                    
                    // Connect to waveguide
                    if (network->waveguides[i][dest]) {
                        int wavelength_idx = (int)((signal.wavelength - MIN_WAVELENGTH) / WAVELENGTH_STEP);
                        network->waveguides[i][dest]->input_signals[wavelength_idx] = signal;
                    }
                } else {  // For this node, send to photodetector
                    network->photodetectors[i]->input = signal;
                }
                
                router->power_consumption += 0.05f;  // Dynamic power consumption
                update_statistics(network, latency, 0.05f, 0.0f);
                
                // Clear input for next cycle
                router->input_ports[p].valid = false;
            }
        }
    }
}

void process_photodetectors(OpticalNetwork* network) {
    for (int i = 0; i < NUM_NODES; i++) {
        Photodetector* pd = network->photodetectors[i];
        
        if (pd->input.valid) {
            // Convert optical signal to electrical (simplified)
            int wavelength_idx = (int)((pd->input.wavelength - MIN_WAVELENGTH) / WAVELENGTH_STEP);
            pd->outputs[wavelength_idx] = pd->input;
            pd->outputs[wavelength_idx].power -= pd->conversion_loss;
            
            // Calculate latency
            float latency = pd->input.injection_time - SIMULATION_TIME;
            pd->power_consumption += 0.1f;  // Photodetector power consumption
            
            // Update statistics
            network->packets_received++;
            update_statistics(network, latency, 0.1f, 0.0f);
            
            // Clear input for next cycle
            pd->input.valid = false;
        }
    }
}

void update_statistics(OpticalNetwork* network, float latency, float power, float bandwidth) {
    network->total_latency += latency;
    network->total_power += power;
    network->total_bandwidth += bandwidth;
}

void free_network(OpticalNetwork* network) {
    for (int i = 0; i < NUM_NODES; i++) {
        free_router(network->routers[i]);
        free_photodetector(network->photodetectors[i]);
        free_muxdemux(network->muxes[i]);
        free_muxdemux(network->demuxes[i]);
        
        for (int j = 0; j < NUM_NODES; j++) {
            if (network->waveguides[i][j]) {
                free_waveguide(network->waveguides[i][j]);
            }
        }
    }
    
    free(network);
}