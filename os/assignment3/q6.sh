#!/bin/bash
read -p "Enter filename: " file
if [ -e "$file" ]; then
    echo "File Information for: $file"
    echo "Size: $(stat -c%s "$file") bytes"
    echo "Permissions: $(stat -c%a "$file")"
    echo "Owner: $(stat -c%U "$file")"
    echo "Last Modified: $(stat -c%y "$file")"
else
    echo "File not found."
fi
