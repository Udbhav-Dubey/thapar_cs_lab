#!/bin/bash
echo "--- OS Version ---"
lsb_release -a 2>/dev/null || cat /etc/os-release
echo -e "\n--- CPU Info ---"
lscpu | grep "Model name"
echo -e "\n--- Memory Usage ---"
free -h
echo -e "\n--- Disk Usage ---"
df -h /
echo -e "\n--- Network Details ---"
ip addr show | grep "inet "
