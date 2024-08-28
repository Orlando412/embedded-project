cmake_minimum_required(VERSION 3.10)
project(EmbeddedSimulator)

set(CMAKE_CXX_STANDARD 17)

add_executable(EmbeddedSimulator
    main.cpp
    cpuCore.cpp
    rtos.cpp
    gpio.cpp
    trafficLight.cpp
    tempControl.cpp
)

# Optional: Specify output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
