#include "tests.h"
#include "../lex.h"
#include <string.h>

void test_lex(void)
{
    char *source_code = "def main() {}";

    lex(source_code, strlen(source_code));
}