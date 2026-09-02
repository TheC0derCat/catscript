#include <stdio.h>
#include <stdlib.h>

#include "compile.h"
#include "lexer.h"

#include "compile.c"
#include "lexer.c"

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("too less arguments provided");

        exit(EXIT_FAILURE);
    }

    for (char **arg = argv; arg != (argv + argc); ++arg) {
        compile(*arg);
    }
}
