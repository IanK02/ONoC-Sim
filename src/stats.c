#include "stats.h"
#include <stdio.h>

void print_statistics(float avg_latency, float throughput, float bandwidth, float avg_power) {
    printf("\n=== Network Statistics ===\n");
    printf("Average Latency: %.2f ns\n", avg_latency);
    printf("Throughput: %.2f packets/ns\n", throughput);
    printf("Bandwidth: %.2f Gbps\n", bandwidth);
    printf("Average Power Consumption: %.2f mW\n", avg_power);
    printf("=========================\n");
}