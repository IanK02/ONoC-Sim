#!/bin/bash

# Usage: ./check_waveguide_dual_valids.sh verilator_output.txt

if [ $# -ne 1 ]; then
    echo "Usage: $0 <verilator_output.txt>"
    exit 1
fi

file="$1"
cycle=""
violations=0
lr_line=""
rl_line=""

while IFS= read -r line; do
    # Capture cycle number
    if [[ $line =~ Cycle\ \#\ +([0-9]+) ]]; then
        cycle="${BASH_REMATCH[1]}"
    fi

    # Store L->R and R->L lines
    if [[ $line == *"L->R"* ]]; then
        lr_line="$line"
    elif [[ $line == *"R->L"* ]]; then
        rl_line="$line"

        # Now that we have both L->R and R->L, count total Vs
        combined="$lr_line $rl_line"
        num_v=$(echo "$combined" | grep -o "V" | wc -l)

        if [ "$num_v" -gt 1 ]; then
            echo "🚨 Violation at Cycle #$cycle: $num_v valid signals"
            echo "  $lr_line"
            echo "  $rl_line"
            echo ""
            ((violations++))
        fi

        # Reset for next cycle
        lr_line=""
        rl_line=""
    fi
done < "$file"

if [ "$violations" -eq 0 ]; then
    echo "✅ No waveguide violations found."
else
    echo "❌ $violations violation(s) found."
fi
