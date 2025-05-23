#ifndef COMPONENTS_H
#define COMPONENTS_H

#include <stdbool.h>

// Define wavelength ranges
#define MIN_WAVELENGTH 1260  // nm
#define MAX_WAVELENGTH 1360  // nm
#define WAVELENGTH_STEP 20   // nm

typedef struct {
    float wavelength;  // in nm
    float power;       // in dBm
    int source_node;
    int destination_node;
    float injection_time;
    bool valid;
} OpticalSignal;

typedef struct {
    int id;
    OpticalSignal* input_signals;
    OpticalSignal* output_signals;
    int num_wavelengths;
    float* wavelengths;
    float insertion_loss;  // in dB
    float power_consumption;
} Waveguide;

typedef struct {
    int id;
    OpticalSignal* input_ports;
    OpticalSignal* output_ports;
    int num_ports;
    float routing_loss;  // in dB
    float power_consumption;
    float routing_delay;  // in ns
} OpticalRouter;

typedef struct {
    int id;
    OpticalSignal input;
    OpticalSignal* outputs;
    int num_wavelengths;
    float power_consumption;
    float conversion_loss;  // in dB
} Photodetector;

typedef struct {
    int id;
    OpticalSignal input;
    OpticalSignal* outputs;
    int num_wavelengths;
    float* wavelength_channels;
    float insertion_loss;  // in dB
    float power_consumption;
} MuxDemux;

// Function prototypes
Waveguide* create_waveguide(int id, int num_wavelengths);
OpticalRouter* create_router(int id, int num_ports);
Photodetector* create_photodetector(int id, int num_wavelengths);
MuxDemux* create_muxdemux(int id, int num_wavelengths, bool is_mux);
void free_waveguide(Waveguide* wg);
void free_router(OpticalRouter* router);
void free_photodetector(Photodetector* pd);
void free_muxdemux(MuxDemux* md);

#endif