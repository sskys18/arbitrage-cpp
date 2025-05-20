cmake_minimum_required(VERSION 3.12)
project(CPP_Practice VERSION 1.0.0 LANGUAGES CXX)

# Set C++ standard
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set build type if not specified
if(NOT CMAKE_BUILD_TYPE)
  set(CMAKE_BUILD_TYPE Release)
endif()

# Set compiler flags
set(CMAKE_CXX_FLAGS "-Wall -Wextra")
set(CMAKE_CXX_FLAGS_DEBUG "-g")
set(CMAKE_CXX_FLAGS_RELEASE "-O3")

# Add include directory
include_directories(${CMAKE_CURRENT_SOURCE_DIR}/include)

# Find all source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Add the executable
add_executable(cpp_practice ${SOURCES})

# Install target
install(TARGETS cpp_practice DESTINATION bin)

# Print status
message(STATUS "CMAKE_BUILD_TYPE: ${CMAKE_BUILD_TYPE}") 