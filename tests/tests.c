#include "tests.h"
#include "../lex.h"
#include <string.h>

void test_lex(void)
{
    char *source_code = "x = 1";

    lex(source_code, strlen(source_code));
}