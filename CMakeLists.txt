cmake_minimum_required(VERSION 3.10)
project(EmbeddedSimulator)

set(CMAKE_CXX_STANDARD 17)

# Include directories
include_directories(${PROJECT_SOURCE_DIR}/include)

# Add executable
add_executable(EmbeddedSimulator
    src/main.cpp
    src/cpuCore.cpp
    src/rtos.cpp
    src/gpio.cpp
    src/trafficLight.cpp
    src/tempControl.cpp
    src/utility.cpp
    src/scheduler.cpp
    src/config.cpp
    src/memory.cpp
    src/peripherals.cpp
)

# Optional: Specify output directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
