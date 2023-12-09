#!/bin/bash
clang cesium.c -O3 -L /opt/homebrew/lib/ -I /opt/homebrew/include/ -lraylib -std=c2x -o c && ./c