#include "lexer.h"

void lex(const char *source_code)
{
    for (const char *source_char = source_code; *source_code != '\0';
        ++source_code) {
        switch (*source_char) {
        case ' ':
            break;
        default:
            break;
        }
    }
}