# Makefile for compiling a LinkedList project

# Compiler settings - Can change to clang++ if preferred
CXX = g++
CXXFLAGS = -Wall -g

# Define the executable name
TARGET = LinkedListApp

# Define source and object directories
SRCDIR = LinkedList
OBJDIR = LinkedList/obj

# Automatically list all the source (.cpp) files
SOURCES = $(SRCDIR)/main.cpp $(SRCDIR)/LinkedList.cpp

# Define object files based on source files
OBJECTS = $(SOURCES:$(SRCDIR)/%.cpp=$(OBJDIR)/%.o)

# Rule for making the target
$(TARGET): $(OBJECTS)
	$(CXX) $(CXXFLAGS) -o $@ $^

# Rule for creating object files
$(OBJDIR)/%.o: $(SRCDIR)/%.cpp
	@mkdir -p $(@D)
	$(CXX) $(CXXFLAGS) -c $< -o $@

# Rule to clean out compiled objects and the executable
clean:
	rm -rf $(OBJDIR)/*.o $(TARGET)

# Rule to run the program
run: $(TARGET)
	./$(TARGET)

# Phony targets for commands that don't represent files
.PHONY: clean run
