import pandas as pd
import matplotlib.pyplot as plt

data = pd.read_csv("visualization/results.csv")
for i in range(4):
    plt.plot(data['cycle'], data[f'node{i}_valid'], label=f'Node {i}')
plt.xlabel("Cycle")
plt.ylabel("Valid Signal")
plt.title("ONoC Node Activity")
plt.legend()
plt.grid(True)
plt.savefig("visualization/result_plot.png")  # Save instead of show