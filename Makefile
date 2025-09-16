# Compiler
CXX := g++
# Compiler flags (e.g. -Wall for warnings, -g for debugging, -O2 for optimization)
CXXFLAGS := -Wall -g

# Source files (*.cpp in current dir)
SRCS := $(wildcard *.cpp)
# Object files (replace .cpp with .o)
OBJS := $(SRCS:.cpp=.o)
# Executable name
TARGET := main

# Default rule
all: $(TARGET)

# Link object files into executable
$(TARGET): $(OBJS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Compile .cpp to .o
%.o: %.cpp
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Remove compiled files
clean:
	rm -f $(OBJS) $(TARGET)

# Phony targets
.PHONY: all clean

run: $(TARGET)
	./$(TARGET)