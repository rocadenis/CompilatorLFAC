

all:
	yacc -d parser.y
	lex lexer.l
	g++ lex.yy.c y.tab.c -ll -ly -o parser.out	-w
	rm -rf lex.yy.c y.tab.h y.tab.c