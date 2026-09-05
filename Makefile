LIB=lex.c compile.c
TESTING_LIB=tests/tests.c
COMPILER=clang

main:
	mkdir -p bin
	${COMPILER} main.c ${LIB} -o bin/app
	./bin/app scripts/main.ct

test:
	mkdir -p bin
	${COMPILER} tests/testing.c ${LIB} ${TESTING_LIB} -o bin/testing
	./bin/testing

