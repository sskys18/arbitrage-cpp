CXX = g++
CXXFLAGS = -Wall -Wextra -std=c++17 -I./include
LDFLAGS =

SRC_DIR = src
OBJ_DIR = build/obj
BIN_DIR = build/bin

EXECUTABLE = $(BIN_DIR)/cpp_practice

SOURCES = $(wildcard $(SRC_DIR)/*.cpp)
OBJECTS = $(patsubst $(SRC_DIR)/%.cpp,$(OBJ_DIR)/%.o,$(SOURCES))

all: directories $(EXECUTABLE)

directories:
	@mkdir -p $(OBJ_DIR) $(BIN_DIR)

$(EXECUTABLE): $(OBJECTS)
	$(CXX) $(LDFLAGS) -o $@ $^

$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp
	$(CXX) $(CXXFLAGS) -c -o $@ $<

clean:
	rm -rf $(OBJ_DIR) $(BIN_DIR)

run: all
	$(EXECUTABLE)

.PHONY: all clean run directories 