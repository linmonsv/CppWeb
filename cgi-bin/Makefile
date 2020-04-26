# File paths
SRC_DIR := .
BUILD_DIR := .
OBJ_DIR := $(BUILD_DIR)/obj

# Compilation flags
CC := g++
LD := g++
CFLAGS := -Wall

# Files to be compiled
SRCS := $(wildcard $(SRC_DIR)/*.cpp)
OBJS := $(SRCS:$(SRC_DIR)/%.cpp=$(OBJ_DIR)/%.o)
BUILD := $(OBJS:$(OBJ_DIR)/%.o=$(BUILD_DIR)/%.cgi)

# Don't remove *.o files automatically
.SECONDARY: $(OBJS)

all: $(BUILD)

# Compile each *.cpp file as *.o files
$(OBJ_DIR)/%.o: $(SRC_DIR)/%.cpp 
	@echo + CC $<
	@mkdir -p $(OBJ_DIR)
	@$(CC) $(CFLAGS) -c -o $@ $<
	
# Link each *.o file as executable files
$(BUILD_DIR)/%.cgi: $(OBJ_DIR)/%.o
	@echo + LD $@
	@mkdir -p $(BUILD_DIR)
	@$(LD) $(CFLAGS) -o $@ $< -lcgicc
	
.PHONY: all clean

clean:
	rm -rf $(BUILD_DIR)
