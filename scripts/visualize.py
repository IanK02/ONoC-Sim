import pandas as pd
import matplotlib.pyplot as plt
import seaborn as sns
import os

def visualize_results():
    # Create data directory if it doesn't exist
    if not os.path.exists('data'):
        os.makedirs('data')
    
    # Load simulation results
    try:
        data = pd.read_csv('data/results.csv')
    except FileNotFoundError:
        print("Error: Results file not found. Run the simulation first.")
        return
    
    # Set up the plotting style
    sns.set(style="whitegrid")
    plt.figure(figsize=(15, 10))
    
    # Plot Latency over Time
    plt.subplot(2, 2, 1)
    plt.plot(data['time'], data['latency'], label='Average Latency')
    plt.title('Latency over Time')
    plt.xlabel('Time (ns)')
    plt.ylabel('Latency (ns)')
    plt.legend()
    
    # Plot Throughput over Time
    plt.subplot(2, 2, 2)
    plt.plot(data['time'], data['throughput'], label='Throughput', color='orange')
    plt.title('Throughput over Time')
    plt.xlabel('Time (ns)')
    plt.ylabel('Throughput (packets/ns)')
    plt.legend()
    
    # Plot Bandwidth Utilization over Time
    plt.subplot(2, 2, 3)
    plt.plot(data['time'], data['bandwidth'], label='Bandwidth', color='green')
    plt.title('Bandwidth Utilization over Time')
    plt.xlabel('Time (ns)')
    plt.ylabel('Bandwidth (Gbps)')
    plt.legend()
    
    # Plot Power Consumption over Time
    plt.subplot(2, 2, 4)
    plt.plot(data['time'], data['power'], label='Power Consumption', color='red')
    plt.title('Power Consumption over Time')
    plt.xlabel('Time (ns)')
    plt.ylabel('Power (mW)')
    plt.legend()
    
    plt.tight_layout()
    
    # Save the plots
    plt.savefig('data/onoc_performance.png')
    print("Visualization saved to data/onoc_performance.png")
    
    # Show additional statistics
    print("\nFinal Statistics:")
    print(f"Average Latency: {data['latency'].iloc[-1]:.2f} ns")
    print(f"Final Throughput: {data['throughput'].iloc[-1]:.4f} packets/ns")
    print(f"Average Bandwidth: {data['bandwidth'].iloc[-1]:.2f} Gbps")
    print(f"Average Power Consumption: {data['power'].iloc[-1]:.2f} mW")

if __name__ == "__main__":
    visualize_results()