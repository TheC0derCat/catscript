#include "tests.h"
#include "../lex.h"
#include <stddef.h>
#include <string.h>

bool test_lex(void)
{
    char *source_code = "x = 1";
    bool success = false;

    struct token_stream token_stream = lex(source_code, strlen(source_code));

    for (size_t i = 0; i < token_stream.len; ++i) {
        switch (token_stream.tokens[i].kind) {
        case IDENTIFIER:
            success = i == 1 || i == 3;
            break;
        case ASSIGNMENT:
            success = i == 2;
            break;
        case INT_LITERAL:
            break;
        default:
            return false;
        }
    }

    return success;
}