import re
import matplotlib
matplotlib.use("Agg")
import matplotlib.pyplot as plt
import pandas as pd

DEBUG_FILE = "mesh_debug.txt"
WAVEGUIDE_CSV = "lost_packets_waveguide_presence_traced.csv"
HISTOGRAM_PNG = "lost_packet_cycle_diff_hist_traced.png"
TRACE_REPORT_CSV = "lost_packet_last_seen_trace.csv"

# === Lost packets ===
lost_packets_str = [
    "0-108", "0-110", "0-164", "0-184", "0-193", "0-232", "0-234", "0-238", "0-242", "0-246",
    "0-304", "0-323", "0-338", "0-350", "0-354", "0-363", "0-377", "0-383", "0-387", "0-399",
    "0-465", "0-474", "0-480", "0-482", "0-493", "0-76", "0-82", "0-86", "0-88", "0-94",
    "0-96", "1-137", "1-140", "1-142", "1-146", "1-157", "1-159", "1-16", "1-18", "1-22",
    "1-227", "1-233", "1-235", "1-237", "1-239", "1-248", "1-26", "1-268", "1-289", "1-313",
    "1-315", "1-32", "1-321", "1-338", "1-340", "1-347", "1-368", "1-392", "1-426", "1-439",
    "1-447", "1-455", "1-457", "1-467", "1-471", "1-474", "1-482", "1-484", "1-487", "1-490",
    "1-492", "1-499", "1-82", "1-84", "1-86", "1-90", "1-95", "2-135", "2-14", "2-167",
    "2-174", "2-177", "2-180", "2-19", "2-192", "2-21", "2-23", "2-245", "2-248", "2-254",
    "2-258", "2-26", "2-269", "2-297", "2-300", "2-304", "2-321", "2-324", "2-326", "2-354",
    "2-434", "2-454", "2-463", "2-469", "2-471", "2-7", "2-82", "3-119", "3-122", "3-125",
    "3-127", "3-131", "3-180", "3-187", "3-189", "3-193", "3-197", "3-227", "3-229", "3-235",
    "3-238", "3-271", "3-275", "3-278", "3-285", "3-340", "3-356", "3-359", "3-361", "3-366",
    "3-397", "3-399", "3-419", "3-421", "3-425", "3-433", "3-457", "3-460", "3-467", "3-469",
    "3-473", "3-478", "3-484", "3-486", "3-488", "3-497", "3-79", "3-86"
]

def main():
    with open(DEBUG_FILE, "r") as file:
        debug_lines = file.readlines()

    waveguide_hits = {pkt: False for pkt in lost_packets_str}
    pkt_last_seen = {pkt: {"line": "", "cycle": None, "tag": "Never seen"} for pkt in lost_packets_str}
    debug_text = ''.join(debug_lines)

    # === Trace line-by-line ===
    current_cycle = None
    for line in debug_lines:
        cycle_match = re.search(r"cycle\s*=\s*(\d+)", line, re.IGNORECASE)
        if cycle_match:
            current_cycle = int(cycle_match.group(1))

        for pkt in lost_packets_str:
            if pkt in line:
                pkt_last_seen[pkt]["line"] = line.strip()
                pkt_last_seen[pkt]["cycle"] = current_cycle

                if f":V:{pkt}" in line:
                    pkt_last_seen[pkt]["tag"] = "Waveguide"
                    waveguide_hits[pkt] = True
                elif "FIFO" in line:
                    pkt_last_seen[pkt]["tag"] = "FIFO"
                elif "grant" in line or "ready" in line:
                    pkt_last_seen[pkt]["tag"] = "Arbiter"
                elif "router" in line:
                    pkt_last_seen[pkt]["tag"] = "Router"
                else:
                    pkt_last_seen[pkt]["tag"] = "Other"

    # === Waveguide + Trace CSV ===
    df = pd.DataFrame({
        "packet_id": lost_packets_str,
        "seen_in_waveguide": [waveguide_hits[pkt] for pkt in lost_packets_str],
        "last_cycle_seen": [pkt_last_seen[pkt]["cycle"] for pkt in lost_packets_str],
        "last_tag": [pkt_last_seen[pkt]["tag"] for pkt in lost_packets_str],
        "last_line": [pkt_last_seen[pkt]["line"] for pkt in lost_packets_str]
    })
    df.to_csv(WAVEGUIDE_CSV, index=False)
    df[["packet_id", "last_tag", "last_cycle_seen", "last_line"]].to_csv(TRACE_REPORT_CSV, index=False)
    print(f"✅ Waveguide + disappearance trace written to {WAVEGUIDE_CSV} and {TRACE_REPORT_CSV}")

    # === Histogram of injection timing ===
    pattern = re.compile(r"cycle\s*=\s*(\d+)[\s\S]*?IP\s+\d+\s+sending\s+(\d+-\d+)", re.IGNORECASE)
    pkt_cycles = {
        pkt: int(cycle)
        for cycle, pkt in pattern.findall(debug_text)
        if pkt in lost_packets_str
    }
    sorted_cycles = sorted(pkt_cycles.values())
    cycle_diffs = [b - a for a, b in zip(sorted_cycles[:-1], sorted_cycles[1:])]

    plt.figure(figsize=(10, 5))
    plt.hist(cycle_diffs, bins=20, edgecolor='black')
    plt.title("Histogram of Clock Cycle Differences Between Lost Packets")
    plt.xlabel("Cycle Difference")
    plt.ylabel("Frequency")
    plt.grid(True)
    plt.tight_layout()
    plt.savefig(HISTOGRAM_PNG)
    print(f"📊 Histogram written to {HISTOGRAM_PNG}")

if __name__ == "__main__":
    main()
