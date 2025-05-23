#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>
#include <math.h>

// Simulation parameters
#define CYCLES 100       // Total simulation cycles
#define CLOCK_PERIOD 1.0  // ns
#define BUS_WIDTH 32      // bits

// Optical parameters
#define MODULATOR_DELAY 2    // cycles
#define DETECTOR_DELAY 3     // cycles
#define WAVEGUIDE_DELAY 5    // cycles (speed of light in waveguide)
#define MODULATOR_POWER 0.1  // mW
#define DETECTOR_POWER 0.05  // mW
#define WAVEGUIDE_LOSS 0.01  // dB per cycle

// Packet structure
typedef struct {
    uint32_t data;
    uint8_t src;
    uint8_t dest;
    uint16_t crc;
    bool valid;
} Packet;

// Optical signal representation
typedef struct {
    float intensity;  // optical power
    Packet packet;
    bool valid;
    int remaining_delay; // propagation delay counter
} OpticalSignal;

// Core structure
typedef struct {
    uint32_t reg;           // Data register
    bool sending;           // Transmission flag
    bool receiving;         // Reception flag
    Packet tx_packet;       // Transmission buffer
    Packet rx_packet;       // Reception buffer
    int modulator_counter;  // Modulator delay counter
    int detector_counter;   // Detector delay counter
    float power_consumption; // mW
} Core;

// Optical bus components
typedef struct {
    OpticalSignal signal;    // Current signal in waveguide
    float power_consumption; // mW
} Waveguide;

// Global statistics
typedef struct {
    uint32_t total_packets_sent;
    uint32_t total_packets_received;
    uint32_t total_cycles;
    float total_power;
    float total_latency;
} Stats;

// Function prototypes
void init_core(Core *core, uint8_t id);
void init_waveguide(Waveguide *wg);
void generate_packet(Core *core, uint8_t dest_id);
void process_core(Core *core, Waveguide *wg, int cycle, Stats *stats);
void process_waveguide(Waveguide *wg);
void update_stats(Stats *stats, float latency, float power);
void print_stats(Stats *stats);

int main() {
    Core core0, core1;
    Waveguide bus;
    Stats stats = {0};
    
    // Initialize components
    init_core(&core0, 0);
    init_core(&core1, 1);
    init_waveguide(&bus);
    
    printf("Starting optical NoC simulation (2 cores, 1 bus)...\n");
    
    // Cycle-accurate simulation
    for (int cycle = 0; cycle < CYCLES; cycle++) {
        // Randomly generate packets (10% probability per cycle)
        if (rand() % 100 < 10) {
            if (rand() % 2 == 0) {
                printf("Core 0 sending a packet\n");
                generate_packet(&core0, 1);
            } else {
                printf("Core 1 sending a packet\n");
                generate_packet(&core1, 0);
            }
        }
        
        // Process cores and bus
        process_core(&core0, &bus, cycle, &stats);
        process_core(&core1, &bus, cycle, &stats);
        process_waveguide(&bus);
        
        stats.total_cycles++;
    }
    
    // Print final statistics
    print_stats(&stats);
    
    return 0;
}

void init_core(Core *core, uint8_t id) {
    core->reg = 0;
    core->sending = false;
    core->receiving = false;
    core->tx_packet.valid = false;
    core->rx_packet.valid = false;
    core->modulator_counter = 0;
    core->detector_counter = 0;
    core->power_consumption = 0.0;
}

void init_waveguide(Waveguide *wg) {
    wg->signal.valid = false;
    wg->signal.intensity = 0.0;
    wg->power_consumption = 0.0;
}

void generate_packet(Core *core, uint8_t dest_id) {
    if (!core->sending && !core->tx_packet.valid) {
        core->tx_packet.data = rand();
        core->tx_packet.src = core->reg & 0xFF; // Simple ID simulation
        core->tx_packet.dest = dest_id;
        core->tx_packet.crc = (core->tx_packet.data >> 16) ^ (core->tx_packet.data & 0xFFFF); // Simple CRC
        core->tx_packet.valid = true;
    }
}

void process_core(Core *core, Waveguide *wg, int cycle, Stats *stats) {
    // Handle transmission (electrical to optical conversion)
    if (core->tx_packet.valid && !core->sending) {
        core->sending = true;
        core->modulator_counter = MODULATOR_DELAY;
        core->power_consumption += MODULATOR_POWER;
    }
    
    // Modulator delay countdown
    if (core->sending && core->modulator_counter > 0) {
        core->modulator_counter--;
        
        // When modulator delay completes, put signal on bus
        if (core->modulator_counter == 0) {
            if (!wg->signal.valid) { // Only transmit if bus is free
                wg->signal.packet = core->tx_packet;
                wg->signal.intensity = 1.0; // Normalized intensity
                wg->signal.valid = true;
                wg->signal.remaining_delay = WAVEGUIDE_DELAY;
                
                core->tx_packet.valid = false;
                core->sending = false;
                stats->total_packets_sent++;
                
                // Record transmission time for latency calculation
                wg->signal.packet.data = (wg->signal.packet.data & 0xFFFFFF) | (cycle << 24);
            } else {
                // Bus collision - retry next cycle
                core->modulator_counter = 1;
            }
        }
    }
    
    // Handle reception (optical to electrical conversion)
    if (wg->signal.valid && wg->signal.packet.dest == (core->reg & 0xFF) && !core->receiving) {
        core->receiving = true;
        core->detector_counter = DETECTOR_DELAY;
        core->power_consumption += DETECTOR_POWER;
    }
    
    // Detector delay countdown
    if (core->receiving && core->detector_counter > 0) {
        core->detector_counter--;
        
        // When detector delay completes, receive the packet
        if (core->detector_counter == 0) {
            core->rx_packet = wg->signal.packet;
            core->rx_packet.valid = true;
            core->receiving = false;
            
            // Calculate latency (cycles from transmission to reception)
            uint32_t tx_cycle = wg->signal.packet.data >> 24;
            float latency = (cycle - tx_cycle) * CLOCK_PERIOD + 
                          MODULATOR_DELAY + WAVEGUIDE_DELAY + DETECTOR_DELAY;
            
            stats->total_packets_received++;
            update_stats(stats, latency, MODULATOR_POWER + DETECTOR_POWER);
            
            // Clear the bus signal after detection
            wg->signal.valid = false;
        }
    }
}

void process_waveguide(Waveguide *wg) {
    if (wg->signal.valid) {
        // Propagate the signal (count down delay)
        if (wg->signal.remaining_delay > 0) {
            wg->signal.remaining_delay--;
            
            // Apply waveguide loss
            wg->signal.intensity *= pow(10, -WAVEGUIDE_LOSS/10.0);
            wg->power_consumption += 0.001; // Static power
        }
    }
}

void update_stats(Stats *stats, float latency, float power) {
    stats->total_latency += latency;
    stats->total_power += power;
}

void print_stats(Stats *stats) {
    printf("\n=== Simulation Statistics ===\n");
    printf("Total cycles: %u\n", stats->total_cycles);
    printf("Packets sent: %u\n", stats->total_packets_sent);
    printf("Packets received: %u\n", stats->total_packets_received);
    printf("Average latency: %.2f ns\n", 
           stats->total_packets_received > 0 ? 
           stats->total_latency / stats->total_packets_received : 0);
    printf("Average power: %.2f mW\n", 
           stats->total_power / stats->total_cycles);
    printf("Throughput: %.2f packets/cycle\n",
           (float)stats->total_packets_received / stats->total_cycles);
    printf("============================\n");
}