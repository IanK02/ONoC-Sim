
#include "Vonoc_bus.h"
#include "verilated.h"
#include <iostream>
#include <fstream>
#include <unordered_map>

struct PacketKey {
    int sender_id;
    int packet_id;

    bool operator==(const PacketKey& other) const {
        return sender_id == other.sender_id && packet_id == other.packet_id;
    }
};

namespace std {
    template <>
    struct hash<PacketKey> {
        std::size_t operator()(const PacketKey& k) const {
            return std::hash<int>()(k.sender_id) ^ (std::hash<int>()(k.packet_id) << 1);
        }
    };
}

int main(int argc, char** argv) {
    Verilated::commandArgs(argc, argv);
    Vonoc_bus top;
    int CYCLES = 500;

    std::ofstream logfile("results.csv");
    logfile << "cycle,sent,received,router_sent\n";

    std::ofstream latency_log("latencies.csv");
    latency_log << "source,packet_id,latency\n";
    std::unordered_map<PacketKey, int> send_time;

    std::ofstream power_log("power.csv");
    power_log << "cycle,total_power,modulator_power,router_power,detector_power\n";

    std::ofstream heat_log("heat.csv");
    heat_log << "cycle,total_heat,modulator_heat,router_heat,detector_heat\n";

    int total_sent = 0;
    int total_received = 0;
    int total_router_sent = 0;

    bool prev_received0 = false;
    bool prev_received1 = false;

    double total_power = 0.0;
    double modulator_power = 0.0;
    double router_power = 0.0;
    double detector_power = 0.0;

    double total_heat = 0.0;
    double heat_mod = 0.0;
    double heat_router = 0.0;
    double heat_det = 0.0;

    // Reset
    top.rst = 1;
    for (int i = 0; i < 2; i++) {
        top.clk = 0;
        top.eval();
        top.clk = 1;
        top.eval();
    }
    top.rst = 0;

    for (int cycle = 0; cycle < CYCLES; ++cycle) {
        top.clk = 0;
        top.eval();
        top.clk = 1;
        top.eval();

        bool sent0 = top.ip_0_sent;
        bool sent1 = top.ip_1_sent;
        bool received0 = top.ip_0_received;
        bool received1 = top.ip_1_received;
        bool r0sent = top.router_0_sent;
        bool r1sent = top.router_1_sent;

        if (sent0) {
            int pkt_data = (int)top.ip_tx_packet_0_data;
            int sender_id = (pkt_data >> 16) & 0xFFFF;
            int pkt_id = pkt_data & 0xFFFF;
            send_time[{sender_id, pkt_id}] = cycle;
            total_sent++;
        }
        if (sent1) {
            int pkt_data = top.ip_tx_packet_1_data;
            int sender_id = (pkt_data >> 16) & 0xFFFF;
            int pkt_id = pkt_data & 0xFFFF;
            send_time[{sender_id, pkt_id}] = cycle;
            total_sent++;
        }

        if (received0 && !prev_received0) {
            int pkt_data = top.ip_rx_packet_0_data;
            int sender_id = (pkt_data >> 16) & 0xFFFF;
            int pkt_id = pkt_data & 0xFFFF;
            PacketKey key = {sender_id, pkt_id};
            if (send_time.count(key)) {
                int latency = cycle - send_time[key];
                latency_log << sender_id << "," << pkt_id << "," << latency << "\n";
                total_received++;
            }
        }

        if (received1 && !prev_received1) {
            int pkt_data = top.ip_rx_packet_1_data;
            int sender_id = (pkt_data >> 16) & 0xFFFF;
            int pkt_id = pkt_data & 0xFFFF;
            PacketKey key = {sender_id, pkt_id};
            if (send_time.count(key)) {
                int latency = cycle - send_time[key];
                latency_log << sender_id << "," << pkt_id << "," << latency << "\n";
                total_received++;
            }
        }

        if (r0sent) total_router_sent++;
        if (r1sent) total_router_sent++;

        prev_received0 = received0;
        prev_received1 = received1;

        logfile << cycle << "," << total_sent << "," << total_received << "," << total_router_sent << "\n";
        // Energy per event
        const double MODULATOR_ENERGY = 0.5;
        const double ROUTER_ENERGY = 0.2;
        const double DETECTOR_ENERGY = 0.3;

        // Reset cycle energy
        double cycle_modulator = 0.0;
        double cycle_router = 0.0;
        double cycle_detector = 0.0;

        if (sent0 || sent1) {
            if (sent0) cycle_modulator += MODULATOR_ENERGY;
            if (sent1) cycle_modulator += MODULATOR_ENERGY;
        }
        if (r0sent) cycle_router += ROUTER_ENERGY;
        if (r1sent) cycle_router += ROUTER_ENERGY;
        if ((received0) || (received1)) {
            if (received0) cycle_detector += DETECTOR_ENERGY;
            if (received1) cycle_detector += DETECTOR_ENERGY;
        }

        // Accumulate
        modulator_power += cycle_modulator;
        router_power += cycle_router;
        detector_power += cycle_detector;
        double cycle_total = cycle_modulator + cycle_router + cycle_detector;
        total_power += cycle_total;

        power_log << cycle << "," << total_power << "," << modulator_power << "," << router_power << "," << detector_power << "\n";

        const double HEAT_MODULATOR = 0.4;
        const double HEAT_ROUTER = 0.2;
        const double HEAT_DETECTOR = 0.3;

        double cycle_heat_mod = 0.0;
        double cycle_heat_router = 0.0;
        double cycle_heat_det = 0.0;

        // Example packet tracking logic (your signals may vary)
        if (sent0) cycle_heat_mod += HEAT_MODULATOR;
        if (sent1) cycle_heat_mod += HEAT_MODULATOR;

        if (r0sent) cycle_heat_router += HEAT_ROUTER;
        if (r1sent) cycle_heat_router += HEAT_ROUTER;

        if (received0 && !prev_received0) cycle_heat_det += HEAT_DETECTOR;
        if (received1 && !prev_received1) cycle_heat_det += HEAT_DETECTOR;

        // Update totals
        heat_mod += cycle_heat_mod;
        heat_router += cycle_heat_router;
        heat_det += cycle_heat_det;

        total_heat += cycle_heat_mod + cycle_heat_router + cycle_heat_det;

        heat_log << cycle << "," << total_heat << "," << heat_mod << "," << heat_router << "," << heat_det << "\n";
    }

    logfile.close();
    latency_log.close();
    power_log.close();
    heat_log.close();
    top.final();
    return 0;
}
