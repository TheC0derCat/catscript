#include "lexer.h"

#include "lexer.c"

int main(int argc, char *argv[])
{
    const char *source_code = "int x = 1;";

    lex(source_code);
}
