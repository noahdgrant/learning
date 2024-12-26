# Define variables
SRC_DIR = src
BIN_DIR = bin
PACKAGE_LOX = lox
PACKAGE_TOOL = tool
MAIN_CLASS = $(PACKAGE_LOX).Lox
TOOL_CLASS = $(PACKAGE_TOOL).GenerateAst
SRC_FILES_LOX = $(wildcard $(SRC_DIR)/$(PACKAGE_LOX)/*.java)
SRC_FILES_TOOL = $(wildcard $(SRC_DIR)/$(PACKAGE_TOOL)/*.java)
CLASS_FILES_LOX = $(SRC_FILES_LOX:$(SRC_DIR)/%.java=$(BIN_DIR)/%.class)
CLASS_FILES_TOOL = $(SRC_FILES_TOOL:$(SRC_DIR)/%.java=$(BIN_DIR)/%.class)
ARGS =
TOOL_ARGS = ./src/lox

# Default target
default: compile

# Compile target
compile: $(CLASS_FILES_LOX)

$(BIN_DIR)/%.class: $(SRC_DIR)/%.java
	@mkdir -p $(BIN_DIR)
	javac -d $(BIN_DIR) $(SRC_FILES_LOX)

# Run target
run: compile
	java -cp $(BIN_DIR) $(MAIN_CLASS) $(ARGS)

# Tool target
tool: $(CLASS_FILES_TOOL)
	java -cp $(BIN_DIR) $(TOOL_CLASS) $(TOOL_ARGS)

$(BIN_DIR)/$(PACKAGE_TOOL)/%.class: $(SRC_DIR)/$(PACKAGE_TOOL)/%.java
	@mkdir -p $(BIN_DIR)/$(PACKAGE_TOOL)
	javac -d $(BIN_DIR) $(SRC_FILES_TOOL)

# Clean target
clean:
	rm -rf $(BIN_DIR)
