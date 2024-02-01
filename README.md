# KUNI-graph
KUNI-graph is a library for graph data structures and common operations performed on them.

## Requirements
* A C++ compiler that supports at least C++17
* Meson build

## Getting started
To compile the code, change the directory to the project root (where README.md is located), and type the following: 
    
    meson setup builddir
    cd builddir
    meson compile

To run clang tidy, or clang-format (assuming those are installed):

    cd builddir
    ninja clang-format
    ninja clang-tidy