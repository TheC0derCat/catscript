#include <stdio.h>
#include <stdlib.h>

#include "compile.h"

int main(int argc, char *argv[])
{
    if (argc < 2) {
        printf("too less arguments provided\n");

        exit(EXIT_FAILURE);
    }

    for (char **arg = argv; arg != (argv + argc); ++arg) {
        compile(*arg);
    }
}
