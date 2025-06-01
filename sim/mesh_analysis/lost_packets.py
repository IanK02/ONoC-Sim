import re

# Path to the debug log file
file_path = "mesh_debug.txt"

# Regular expressions for sent and received packets
sent_pattern = re.compile(r"IP (\d+) sending (\d+)-(\d+) to (\d+),(\d+)")
recv_pattern = re.compile(r"IP block (\d+) received packet (\d+)-(\d+) from\s+(\d+),\s+(\d+)")

sent_packets = set()
received_packets = set()

with open(file_path, "r") as f:
    for line in f:
        sent_match = sent_pattern.search(line)
        if sent_match:
            src_id, src_num, timestamp, dst_x, dst_y = sent_match.groups()
            sent_packets.add(f"{src_num}-{timestamp}")

        recv_match = recv_pattern.search(line)
        if recv_match:
            dst_id, src_num, timestamp, src_x, src_y = recv_match.groups()
            received_packets.add(f"{src_num}-{timestamp}")

# Find lost packets
lost_packets = sorted(sent_packets - received_packets)

# Output results
print(f"Total lost packets: {len(lost_packets)}")
print("Lost packets:")
for pkt in lost_packets:
    print(pkt)
