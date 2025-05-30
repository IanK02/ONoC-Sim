#!/bin/bash

# File to parse
file="mesh_debug.txt"

# Loop over IPs 0 to 3
for ip in {0..3}; do
    echo "IP $ip received packets from:"
    
    # Grep lines for this IP block and extract the source address
    grep "IP block $ip received packet" "$file" | \
        sed -E 's/.*from[[:space:]]+([0-9]+),[[:space:]]*([0-9]+).*/\1,\2/' | \
        sort | uniq -c | sort -nr
    
    echo ""
done
