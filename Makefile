### PROJECT SETTINGS ###
TARGET=sort-visualizer.exe
BUILD_PATH=./build
BIN_PATH=./bin
SRC_PATHS=./src
SRC_EXT=cpp
INCLUDE_PATHS=-I./include -I./include/algorithms
LIB_PATHS=-L./lib
LIBS=-lopenal32 -lsfml-audio -lsfml-graphics -lsfml-main -lsfml-network -lsfml-system -lsfml-window
CFLAGS=
CC=g++.exe

# Find all source files in the source directory, sorted by most recently modified
SRCS = $(shell find $(SRC_PATHS SRC_PATHS/**) -name '*.$(SRC_EXT)' | sort -k 1nr | cut -f2-)

# Set the object file names, with the source directory stripped
# from the path, and the build path prepended in its place
OBJS = $(SRCS:$(SRC_PATHS)/%.$(SRC_EXT)=$(BUILD_PATH)/%.o)
# Set the dependency files that will be used to add header dependencies
DEPS = $(OBJS:.o=.d)

### BUILD SETTINGS

$(BIN_PATH)/$(TARGET): $(OBJS)
	@echo "Linking: $@"
	$(CC) $^ -o $@ $(LIB_PATHS) $(LIBS)

# add dependency files if they exist
-include $(DEPS)

$(BUILD_PATH)/%.o: $(SRC_PATHS)/%.$(SRC_EXT)
	@echo "Compiling $^ -> $@"
	$(CC) $(CFLAGS) $(INCLUDE_PATHS) -c $< -o $@

clean:
	rm -rf ./bin/*.exe ./build/*.o ./build/algorithms/*.o ./build/**.d
