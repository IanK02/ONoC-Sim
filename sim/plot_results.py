import pandas as pd
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt

# Load the simulation results
data = pd.read_csv("results.csv")

# --- 1. Plot cumulative packets sent and received ---
plt.figure()
plt.plot(data['cycle'], data['sent'], label='IP Packets Sent')
plt.plot(data['cycle'], data['received'], label='Packets Received')

# Plot router packets sent if the column exists
if 'router_sent' in data.columns:
    plt.plot(data['cycle'], data['router_sent'], label='Router Packets Sent')

plt.title("Packets Sent and Received Over Time")
plt.xlabel("Cycle")
plt.ylabel("Cumulative Packet Count")
plt.legend()
plt.grid(True)
plt.savefig("packets_sent_received.png")
plt.close()

# --- 2. Plot throughput over time ---
window_size = 200
throughput = data['received'].diff().rolling(window=window_size).mean()

# Compute average throughput (ignoring NaNs from initial window)
average_throughput = throughput.mean()

plt.figure()
plt.plot(data['cycle'], throughput, label="Rolling Throughput")
plt.axhline(y=average_throughput, color='red', linestyle='--', label=f'Average = {average_throughput:.2f}')
plt.title(f"Throughput (Window Size = {window_size} Cycles)")
plt.xlabel("Cycle")
plt.ylabel("Packets per Cycle")
plt.grid(True)
plt.legend()
plt.savefig("throughput.png")
plt.close()

# --- 3. Plot latency histogram ---
try:
    latency_data = pd.read_csv("latencies.csv")
    plt.figure()
    plt.hist(latency_data['latency'], bins=30, edgecolor='black')
    plt.title("Packet Latency Distribution")
    plt.xlabel("Latency (cycles)")
    plt.ylabel("Number of Packets")
    plt.grid(True)
    plt.savefig("latency_histogram.png")
    plt.close()
except FileNotFoundError:
    print("No latencies.csv found — skipping latency plot.")

# --- 3. Plot power ---
try:
    power_data = pd.read_csv("power.csv")
    plt.figure()
    plt.plot(power_data['cycle'], power_data['modulator_power'], label='Modulator Power')
    plt.plot(power_data['cycle'], power_data['router_power'], label='Router Power')
    plt.plot(power_data['cycle'], power_data['detector_power'], label='Photodetector Power')
    plt.plot(power_data['cycle'], power_data['total_power'], label='Total Power', linestyle='--')
    plt.title("Cumulative Power Consumption Over Time")
    plt.xlabel("Cycle")
    plt.ylabel("Energy (arbitrary units)")
    plt.legend()
    plt.grid(True)
    plt.savefig("power_consumption.png")
    plt.close()
except FileNotFoundError:
    print("No power.csv found — skipping power plot.")

# --- 3. Plot heat ---
try:
    heat_data = pd.read_csv("heat.csv")
    plt.figure()
    plt.plot(heat_data['cycle'], heat_data['modulator_heat'], label='Modulator Heat')
    plt.plot(heat_data['cycle'], heat_data['router_heat'], label='Router Heat')
    plt.plot(heat_data['cycle'], heat_data['detector_heat'], label='Detector Heat')
    plt.plot(heat_data['cycle'], heat_data['total_heat'], label='Total Heat', linestyle='--')
    plt.title("Cumulative Heat Generation Over Time")
    plt.xlabel("Cycle")
    plt.ylabel("Heat (arbitrary units)")
    plt.legend()
    plt.grid(True)
    plt.savefig("heat_generation.png")
    plt.close()
except FileNotFoundError:
    print("No heat.csv found — skipping heat plot.")


