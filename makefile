CXX = g++
CXXFLAGS = -std=c++11
SRC_DIR = src
INCLUDE_DIR = include
OBJ_DIR = lib
BIN_DIR = bin
SRCS = $(wildcard $(SRC_DIR)/*.cpp)
OBJS = $(patsubst $(SRC_DIR)/%.cpp, $(OBJ_DIR)/%.o, $(SRCS))
TARGET = $(BIN_DIR)/main.exe

all: $(TARGET)

$(TARGET): $(OBJS)
	$(CXX) -o $@ $^

$(OBJS): $(OBJ_DIR)/%.o : $(SRC_DIR)/%.cpp
	$(CXX) -I $(INCLUDE_DIR) -c $< -o $@

clean: 
	del /q .\lib\*  .\bin\*


