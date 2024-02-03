CXX=clang++
CXXFLAGS=-std=c++14 -gdwarf-4 -fstandalone-debug -O0 -Wall -Wextra -Werror -pedantic -Wno-error=unused-parameter
INCLUDES=-Iincludes/

# Using wildcard to include all .cpp files in the src directory
SRCS=$(wildcard src/*.cpp)
OBJS=$(SRCS:.cpp=.o)
EXEC=bin/exec

# Define the target to make the executable
$(EXEC): $(OBJS)
	$(CXX) $(CXXFLAGS) $(INCLUDES) $^ -o $@

# Generic rule for object files
%.o: %.cpp
	$(CXX) $(CXXFLAGS) $(INCLUDES) -c $< -o $@

# Clean up
clean:
	rm -f src/*.o $(EXEC)

.PHONY: clean
