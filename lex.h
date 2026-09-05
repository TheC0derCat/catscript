#ifndef CATSCRIPT_LEX_H
#define CATSCRIPT_LEX_H
#include <stddef.h>

enum token_kind {
    ASSIGNMENT,
    INT_LITERAL,
    FLOAT_LITERAL,
    STRING_LITERAL,
    IDENTIFIER,
    LINE_END,
    FILE_END,
};

union token_storage {
    void *none;
    int int_literal;
    float float_literal;
    char *string_literal;
    char *identifier;
};

struct token {
    enum token_kind kind;
    union token_storage storage;
};

struct token_stream {
    struct token *tokens;
    size_t capacity;
    size_t len;
};

struct token_stream lex(const char *source_code, size_t len);
#endif // CATSCRIPT_LEX_H
