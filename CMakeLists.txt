# CMake minimum version required
cmake_minimum_required(VERSION 3.10)

# Project name
project(MICONT)

# Set C++ standard
set(CMAKE_CXX_STANDARD 20)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

# Specify the source files
file(GLOB SOURCES
    src/bit_converter.cpp
    src/math.cpp
)

include_directories(src)
# Add the executable
add_executable(MICONT main.cpp ${SOURCES})

# If you have libraries, you can link them like this:
# target_link_libraries(MyProject <your_libraries_here>