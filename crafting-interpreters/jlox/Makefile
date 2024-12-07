# Define variables
SRC_DIR = src
BIN_DIR = bin
PACKAGE = lox
MAIN_CLASS = $(PACKAGE).Lox
SRC_FILES = $(wildcard $(SRC_DIR)/$(PACKAGE)/*.java)
CLASS_FILES = $(SRC_FILES:$(SRC_DIR)/%.java=$(BIN_DIR)/%.class)

# Default target
default: compile

# Compile target
compile: $(CLASS_FILES)

$(BIN_DIR)/%.class: $(SRC_DIR)/%.java
	@mkdir -p $(BIN_DIR)
	javac -d $(BIN_DIR) $(SRC_FILES)

# Run target
run: compile
	java -cp $(BIN_DIR) $(MAIN_CLASS)

# Clean target
clean:
	rm -rf $(BIN_DIR)
