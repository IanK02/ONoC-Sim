import re
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
import pandas as pd

# --- CONFIGURATION ---
DEBUG_FILE = "../mesh_debug.txt"  # Change this to your file path
FIFO_DEPTH = 4

# --- HELPER FUNCTION ---
def is_valid_fifo_state(count, head, tail, depth=FIFO_DEPTH):
    if not (0 <= count <= depth):
        return False
    expected_tail = (head + count) % depth
    if count == 0 or count == depth:
        return head == tail
    return tail == expected_tail

# --- READ DEBUG TEXT ---
with open(DEBUG_FILE, "r") as file:
    lines = file.readlines()

# --- PARSE FIFO LINES WITH LINE NUMBER ---
fifo_pattern = re.compile(r"(\w+)\s+FIFO\s+c=(\d+)\s+h=(\d+)\s+t=(\d+)")
results = []

for i, line in enumerate(lines, start=1):
    match = fifo_pattern.search(line)
    if match:
        fifo_name = match.group(1)
        count = int(match.group(2))
        head = int(match.group(3))
        tail = int(match.group(4))
        valid = is_valid_fifo_state(count, head, tail)
        if not valid:
            results.append((i, fifo_name, count, head, tail))

# --- CREATE DATAFRAME OF INVALID STATES ---
df_invalid = pd.DataFrame(results, columns=["Line", "FIFO", "Count", "Head", "Tail"])

# --- REPORT INVALID STATES ---
print(f"Invalid FIFO states found: {len(df_invalid)}")
print(df_invalid)

# Optional: Save to CSV for inspection
df_invalid.to_csv("../mesh_data/invalid_fifo_states.csv", index=False)
