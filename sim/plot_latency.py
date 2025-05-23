import pandas as pd
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt

# Load latency data
df = pd.read_csv("latencies.csv")

# Compute average latency per sender
avg_latency = df.groupby("source")["latency"].mean().reset_index()

# Bar plot
plt.figure()
plt.bar(avg_latency["source"], avg_latency["latency"])
plt.title("Average Packet Latency per Sender")
plt.xlabel("Source ID")
plt.ylabel("Average Latency (cycles)")
plt.xticks(avg_latency["source"])
plt.grid(axis='y')
plt.savefig("avg_latency_per_sender.png")
