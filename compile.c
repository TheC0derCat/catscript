#include "compile.h"
#include <stddef.h>
#include <stdio.h>

void read_file(const char *filepath, void (*receiver)(const char *source_code, size_t len));
void receive_source_code(const char *source_code, size_t len);

void compile(const char *filepath)
{
    printf("starting '%s'\n", filepath);

    read_file(filepath, receive_source_code);
}

void read_file(const char *filepath, void (*receiver)(const char *source_code, size_t len))
{
    FILE *file = fopen(filepath, "r");

    size_t max_source_file_size = 100;
    char source_code[max_source_file_size] = { };
    size_t element_size = sizeof(char);

    size_t target_len = fread(source_code, element_size, max_source_file_size, file);

    printf("read '%s' with content %s\n", filepath, source_code);

    printf("receive source_code\n");
    receiver(source_code, max_source_file_size);

    fclose(file);
}

void receive_source_code(const char *source_code, size_t len)
{
    // lex(source_code, len);
}
