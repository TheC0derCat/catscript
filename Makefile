main:
	mkdir -p bin
	clang main.c lexer.c compile.c -o bin/app
	./bin/app