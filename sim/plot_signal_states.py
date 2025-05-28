import pandas as pd
import matplotlib
matplotlib.use("Agg")  # Use non-interactive backend for WSL
import matplotlib.pyplot as plt
import os


# Load data
df = pd.read_csv("signals.csv")

# Create output directory for plots
os.makedirs("router_plots", exist_ok=True)

# Group data by router
routers = df['router_id'].unique()

for router in routers:
    r_df = df[df['router_id'] == router]
    cycle = r_df['cycle']

    fig, axs = plt.subplots(4, 1, figsize=(12, 10), sharex=True)
    fig.suptitle(f"Router {router} Signal States Over Time", fontsize=16)

    # Modulator validity
    axs[0].plot(cycle, r_df['mod_valid[0]'], label='mod_valid[0]')
    axs[0].plot(cycle, r_df['mod_valid[1]'], label='mod_valid[1]')
    axs[0].plot(cycle, r_df['mod_valid[2]'], label='mod_valid[2]')
    axs[0].plot(cycle, r_df['mod_valid[3]'], label='mod_valid[3]')
    axs[0].set_ylabel("Modulator Valid")
    axs[0].legend()

    # Waveguide validity
    axs[1].plot(cycle, r_df['wave_valid[0]'], label='wave_valid[0]')
    axs[1].plot(cycle, r_df['wave_valid[1]'], label='wave_valid[1]')
    axs[1].plot(cycle, r_df['wave_valid[2]'], label='wave_valid[2]')
    axs[1].plot(cycle, r_df['wave_valid[3]'], label='wave_valid[3]')
    axs[1].set_ylabel("Waveguide Valid")
    axs[1].legend()

    # Photodetector + router valid
    axs[2].plot(cycle, r_df['photodet_valid[0]'], label='photodet[0]')
    axs[2].plot(cycle, r_df['photodet_valid[1]'], label='photodet[1]')
    axs[2].plot(cycle, r_df['photodet_valid[2]'], label='photodet[2]')
    axs[2].plot(cycle, r_df['photodet_valid[3]'], label='photodet[3]')
    axs[2].plot(cycle, r_df['router_valid[0]'], '--', label='router[0]')
    axs[2].plot(cycle, r_df['router_valid[1]'], '--', label='router[1]')
    axs[2].plot(cycle, r_df['router_valid[2]'], '--', label='router[2]')
    axs[2].plot(cycle, r_df['router_valid[3]'], '--', label='router[3]')
    axs[2].set_ylabel("Photodet / Router Valid")
    axs[2].legend()

    # Request and Grant
    axs[3].plot(cycle, r_df['router_req'], label='request', drawstyle='steps-post')
    axs[3].plot(cycle, r_df['router_grant'], label='grant', drawstyle='steps-post')
    axs[3].plot(cycle, r_df['router_ready_local'], label='ready_local', drawstyle='steps-post')
    axs[3].set_ylabel("Control Signals")
    axs[3].set_xlabel("Cycle")
    axs[3].legend()

    plt.tight_layout(rect=[0, 0.03, 1, 0.95])
    plt.savefig(f"router_plots/router_{router}.png")
    plt.close()

print("✅ Plots saved to ./router_plots/")
