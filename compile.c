#include "compile.h"
#include "lexer.h"
#include <stddef.h>
#include <stdio.h>

void read_file(const char *filepath, void (*receiver)(const char *source_code));
void receive_source_code(const char *source_code);

void compile(const char *filepath)
{
    read_file(filepath, receive_source_code);
}

void read_file(const char *filepath, void (*receiver)(const char *source_code))
{
    FILE *file = fopen(filepath, "r");

    size_t max_source_file_size = 100;
    char source_code[max_source_file_size] = { };
    size_t element_size = sizeof(source_code[0]);

    fread(source_code, element_size, max_source_file_size, file);

    receiver(source_code);

    fclose(file);
}

void receive_source_code(const char *source_code)
{
    lex(source_code);
}
