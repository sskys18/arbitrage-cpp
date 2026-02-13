# Arbitrage Bot

A C++ project for algorithmic trading with focus on arbitrage strategies.

## Project Structure

```
.
├── CMakeLists.txt        # Project configuration
├── src/                  # Source code
│   ├── main.cpp          # Entry point
│   ├── config/           # Configuration management
│   ├── network/          # Network and API communication
│   ├── messaging/        # Inter-component communication
│   ├── strategy/         # Trading strategies
│   ├── order/            # Order management
│   ├── util/             # Utility functions
│   └── metrics/          # Performance tracking
└── include/              # Public headers
```

## Build Instructions

### Prerequisites
- CMake 3.14 or higher
- C++17 compatible compiler

### Building the Project
```bash
# Create build directory
mkdir -p build && cd build

# Generate build files
cmake ..

# Build the project
cmake --build .
```

### Running the Application
```bash
# From the build directory
./bin/arbitrage_bot
``` 