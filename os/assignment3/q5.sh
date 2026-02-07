#!/bin/bash
echo "enter filename "
read filename
if [ -f "$filename" ];then
    lines=$(wc -l < "$filename")
    words=$(wc -w < "$filename")
    echo "Lines : $lines"
    echo "Words : $words"
else 
    echo "file doesnt exist"
fi
