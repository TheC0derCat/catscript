#include "compile.h"
#include "lexer.h"

void compile(const char *filepath)
{
    const char *source_code = "int x = 1;";

    lex(source_code);
}