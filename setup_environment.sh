#!/bin/bash

# Update package index
sudo apt update

# Install essential development tools
sudo apt install -y build-essential cmake git

# Install Clang and Clang-format
sudo apt install -y clang clang-format

# Install additional useful tools
sudo apt install -y gdb valgrind

# Clean up
sudo apt autoremove -y
sudo apt clean

echo "All necessary tools have been installed successfully!"
