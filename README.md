# C++ Practice Project

A simple C++ practice project with basic structure and build configuration.

## Project Structure

```
.
├── src/            # Source files
│   └── main.cpp    # Main entry point
├── include/        # Header files
│   └── utils.hpp   # Utility functions
├── build/          # Build output (generated)
├── CMakeLists.txt  # CMake build configuration
├── Makefile        # Alternative build configuration
└── README.md       # This file
```

## Requirements

- C++17 compatible compiler (GCC, Clang, MSVC, etc.)
- CMake 3.12+ (recommended)
- Make (optional)

## Building the Project

### Using CMake (recommended)

```bash
# Configure the project
mkdir -p build && cd build
cmake ..

# Build the project
cmake --build .

# Run the executable
./cpp_practice
```

### Using Make

```bash
# Build the project
make

# Run the executable
make run

# Clean build files
make clean
```

## Adding New Source Files

1. Create new `.cpp` files in the `src` directory
2. Create header files in the `include` directory
3. Include the headers in your source files
4. The build system will automatically find and compile the new files

## Learning Resources

- [C++ Reference](https://en.cppreference.com/)
- [The C++ Programming Language](https://www.stroustrup.com/4th.html) by Bjarne Stroustrup
- [Effective Modern C++](https://www.oreilly.com/library/view/effective-modern-c/9781491908419/) by Scott Meyers
- [C++ Core Guidelines](https://isocpp.github.io/CppCoreGuidelines/CppCoreGuidelines) 