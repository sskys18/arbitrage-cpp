cmake_minimum_required(VERSION 3.14)
project(ArbitrageBot VERSION 0.1.0 LANGUAGES CXX)

# Use modern C++
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)

# Set output directories
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/bin)
set(CMAKE_LIBRARY_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# Collect all source files
file(GLOB_RECURSE SOURCES "src/*.cpp")

# Add the executable
add_executable(arbitrage_bot ${SOURCES})

# Add include directories
target_include_directories(arbitrage_bot
    PRIVATE
        ${CMAKE_CURRENT_SOURCE_DIR}/src
    PUBLIC
        $<BUILD_INTERFACE:${CMAKE_CURRENT_SOURCE_DIR}/include>
)

# Enable compiler warnings
if(MSVC)
    target_compile_options(arbitrage_bot PRIVATE /W4)
else()
    target_compile_options(arbitrage_bot PRIVATE -Wall -Wextra -Wpedantic)
endif()

# Install targets
install(TARGETS arbitrage_bot
    RUNTIME DESTINATION bin
) 