#include "lex.h"

void lex(const char *source_code, size_t len)
{
    for (const char *source_char = source_code; source_char != source_code + len;
        ++source_code) {
        switch (*source_char) {
        case ' ':
            break;
        default:
            break;
        }
    }
}