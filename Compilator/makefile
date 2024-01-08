CC = g++ # Compiler
LEX = flex # Flex (Lexer)
YACC = bison # Bison (Parser)

CFLAGS = -std=c++11 # Flags pentru compilator (C++11)
LEX_FLAGS = # Flags pentru Flex
YACC_FLAGS = -d # Flags pentru Bison

# Lista de fișiere sursă
SRCS = SymbolTable.h Ast.h main.cpp
YACC_SRCS = y.tab.c
LEX_SRCS = lex.yy.c
OBJS = $(SRCS:.cpp=.o) $(YACC_SRCS:.c=.o) $(LEX_SRCS:.c=.o)

# Numele fișierului executabil
TARGET = compilator

# Regula implicită
all: $(TARGET)

$(TARGET): $(OBJS)
	$(CC) $(CFLAGS) -o $(TARGET) $(OBJS)

lex.yy.c: comp.l
	$(LEX) $(LEX_FLAGS) comp.l

y.tab.c y.tab.h: comp.y
	$(YACC) $(YACC_FLAGS) comp.y

# Rule for building object files
%.o: %.cpp
	$(CC) $(CFLAGS) -c $< -o $@

# Clean rule
clean:
	rm -f $(TARGET) $(OBJS) lex.yy.c y.tab.c y.tab.h
