#!/bin/bash

FILE="mesh_debug.txt"

# Extract all received packets with source and timestamp
grep -oP 'packet \d+-\d+' "$FILE" | sort | uniq -d > duplicates.txt

echo "Duplicate packet receptions found:"
cat duplicates.txt

echo
echo "Count of duplicate packet receptions: $(wc -l < duplicates.txt)"
