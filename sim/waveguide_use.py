import re
from collections import defaultdict

# Path to the debug file
file_path = "mesh_debug.txt"

# Patterns to detect arbiter status and waveguide validity
arbiter_pattern = re.compile(r"Arb (\d+),(\d+) to (\d+),(\d+)\s+waiting")
waveguide_pattern = re.compile(r"Waveguide (\d+),(\d+) to (\d+),(\d+).*valid=0")

# Use a default dictionary to track per cycle whether each waveguide is waiting and has valid=0
waiting_count = defaultdict(int)

# Buffers to store current cycle's arbiter and waveguide status
arb_waiting_set = set()
wg_invalid_set = set()

# Process the file line by line
with open(file_path, 'r') as f:
    for line in f:
        arb_match = arbiter_pattern.search(line)
        wg_match = waveguide_pattern.search(line)

        if arb_match:
            coords = tuple(map(int, arb_match.groups()))
            arb_waiting_set.add(coords)

        if wg_match:
            coords = tuple(map(int, wg_match.groups()))
            wg_invalid_set.add(coords)

        # If line indicates end of cycle or time to evaluate
        if "Cycle:" in line or "---" in line:
            # Match waveguides and arbiters that are both waiting and invalid
            for coords in arb_waiting_set:
                if coords in wg_invalid_set:
                    waiting_count[coords] += 1
            # Reset sets for next cycle
            arb_waiting_set.clear()
            wg_invalid_set.clear()

# Output results
print("Waveguide (src_x, src_y, dst_x, dst_y) -- Count of simultaneous 'valid=0' and 'arb waiting'")
for coords, count in sorted(waiting_count.items(), key=lambda x: -x[1]):
    print(f"{coords} -- {count}")
