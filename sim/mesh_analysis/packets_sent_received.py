import matplotlib
matplotlib.use('Agg')  # Use non-GUI backend for WSL or headless environments

import pandas as pd
import matplotlib.pyplot as plt
import os

# Set up paths
csv_path = "../mesh_data/ip_sent_and_received.csv"
output_dir = "../mesh_graphs"
os.makedirs(output_dir, exist_ok=True)

# Load the CSV data
df = pd.read_csv(csv_path)

# Infer number of routers
num_routers = sum(col.startswith("ip_valid_to_router") for col in df.columns)

# Compute cumulative sums of sent and received packets
sent = {i: df[f"ip_valid_to_router{i}"].astype(int).cumsum() for i in range(num_routers)}
received = {i: df[f"router_valid_to_ip{i}"].astype(int).cumsum() for i in range(num_routers)}

# Add total sent and received across all routers
df["total_sent"] = sum(df[f"ip_valid_to_router{i}"] for i in range(num_routers)).cumsum()
df["total_received"] = sum(df[f"router_valid_to_ip{i}"] for i in range(num_routers)).cumsum()

# Plot total sent vs total received
plt.figure()
plt.plot(df["cycle"], df["total_sent"], label="Total Sent")
plt.plot(df["cycle"], df["total_received"], label="Total Received")
plt.xlabel("Cycle")
plt.ylabel("Packets")
plt.title("Total Packets Sent vs Received")
plt.legend()
plt.grid(True)
plt.tight_layout()
plt.savefig(os.path.join(output_dir, "total_packets_sent_received.png"))

# Plot per-router sent and received
plt.figure()
for i in range(num_routers):
    plt.plot(df["cycle"], sent[i], '--', label=f"Router {i} Sent")
    plt.plot(df["cycle"], received[i], label=f"Router {i} Received")
plt.xlabel("Cycle")
plt.ylabel("Packets")
plt.title("Per-Router Packets Sent and Received")
plt.legend()
plt.grid(True)
plt.tight_layout()
plt.savefig(os.path.join(output_dir, "per_router_packets_sent_received.png"))

print("Plots saved to mesh_graphs/")
