#include "lex.h"
#include <stdio.h>

void lex(const char *source_code, size_t len)
{
    printf("lexing %s", source_code);

    for (const char *source_char = source_code; source_char != source_code + len;
        ++source_char) {
        switch (*source_char) {
        case ' ':
            break;
        default:
            break;
        }
    }
}