main:
	mkdir -p bin
	clang main.c lex.c compile.c -o bin/app
	./bin/app