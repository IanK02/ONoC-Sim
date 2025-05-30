#!/bin/bash

# Input file
FILE="mesh_debug.txt"

# Initialize counters
total_empty_cycles=0
total_valid_cycles=0

# Read through file, store previous line
prev_line=""

while IFS= read -r line; do
  # Check if current and previous lines represent a waveguide state
  if [[ "$prev_line" == *"L->R"* && "$line" == *"R->L"* ]]; then
    if [[ "$prev_line" != *"V"* && "$line" != *"V"* ]]; then
      ((total_empty_cycles++))
    else
      ((total_valid_cycles++))
    fi
  fi
  prev_line="$line"
done < "$FILE"

echo "Total empty waveguide cycles: $total_empty_cycles"
echo "Total cycles with at least one V (valid): $total_valid_cycles"
