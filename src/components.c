#include "components.h"
#include <stdlib.h>
#include <stdio.h>
#include <math.h>

Waveguide* create_waveguide(int id, int num_wavelengths) {
    Waveguide* wg = (Waveguide*)malloc(sizeof(Waveguide));
    wg->id = id;
    wg->num_wavelengths = num_wavelengths;
    wg->input_signals = (OpticalSignal*)calloc(num_wavelengths, sizeof(OpticalSignal));
    wg->output_signals = (OpticalSignal*)calloc(num_wavelengths, sizeof(OpticalSignal));
    wg->wavelengths = (float*)malloc(num_wavelengths * sizeof(float));
    wg->insertion_loss = 0.2f;  // dB per cm (typical for silicon waveguides)
    wg->power_consumption = 0.0f;
    
    // Initialize wavelengths
    for (int i = 0; i < num_wavelengths; i++) {
        wg->wavelengths[i] = MIN_WAVELENGTH + i * WAVELENGTH_STEP;
    }
    
    return wg;
}

OpticalRouter* create_router(int id, int num_ports) {
    OpticalRouter* router = (OpticalRouter*)malloc(sizeof(OpticalRouter));
    router->id = id;
    router->num_ports = num_ports;
    router->input_ports = (OpticalSignal*)calloc(num_ports, sizeof(OpticalSignal));
    router->output_ports = (OpticalSignal*)calloc(num_ports, sizeof(OpticalSignal));
    router->routing_loss = 1.5f;  // dB (typical for optical routers)
    router->power_consumption = 0.0f;
    router->routing_delay = 0.5f;  // ns
    
    return router;
}

Photodetector* create_photodetector(int id, int num_wavelengths) {
    Photodetector* pd = (Photodetector*)malloc(sizeof(Photodetector));
    pd->id = id;
    pd->num_wavelengths = num_wavelengths;
    pd->outputs = (OpticalSignal*)calloc(num_wavelengths, sizeof(OpticalSignal));
    pd->power_consumption = 0.0f;
    pd->conversion_loss = 3.0f;  // dB (typical for photodetectors)
    
    // Initialize input signal
    pd->input.valid = false;
    
    return pd;
}

MuxDemux* create_muxdemux(int id, int num_wavelengths, bool is_mux) {
    MuxDemux* md = (MuxDemux*)malloc(sizeof(MuxDemux));
    md->id = id;
    md->num_wavelengths = num_wavelengths;
    md->outputs = (OpticalSignal*)calloc(num_wavelengths, sizeof(OpticalSignal));
    md->wavelength_channels = (float*)malloc(num_wavelengths * sizeof(float));
    md->insertion_loss = 1.0f;  // dB (typical for MUX/DEMUX)
    md->power_consumption = 0.0f;
    
    // Initialize wavelengths
    for (int i = 0; i < num_wavelengths; i++) {
        md->wavelength_channels[i] = MIN_WAVELENGTH + i * WAVELENGTH_STEP;
    }
    
    // Initialize input/output
    md->input.valid = false;
    for (int i = 0; i < num_wavelengths; i++) {
        md->outputs[i].valid = false;
    }
    
    return md;
}

void free_waveguide(Waveguide* wg) {
    free(wg->input_signals);
    free(wg->output_signals);
    free(wg->wavelengths);
    free(wg);
}

void free_router(OpticalRouter* router) {
    free(router->input_ports);
    free(router->output_ports);
    free(router);
}

void free_photodetector(Photodetector* pd) {
    free(pd->outputs);
    free(pd);
}

void free_muxdemux(MuxDemux* md) {
    free(md->outputs);
    free(md->wavelength_channels);
    free(md);
}