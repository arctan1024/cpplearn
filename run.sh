#!/bin/bash

EXECUTABLE="./build/cpplearn"
BUILD_SCRIPT="./build.sh"

if [ -f "$EXECUTABLE" ]; then
    "$EXECUTABLE"
else
    "$BUILD_SCRIPT" && "$EXECUTABLE"
fi