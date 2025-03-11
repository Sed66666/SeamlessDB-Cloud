#!/bin/bash

if [ ! -d "build_trace" ]; then
    mkdir build_trace
fi

cd build_trace

export PRINT_LOG=0
export TIME_OPEN=0
export ENABLE_TRACE=1


cmake ..
cmake --build . -j16