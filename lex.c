#include "lex.h"
#include <memory.h>
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void add_token(struct token_stream *token_stream, char *from, size_t len);

struct token_stream lex(const char *source_code, size_t len)
{
    struct token_stream stream;

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

    return stream;
}

static void push_token(struct token_stream *token_stream, struct token token);
static struct token create_token(char *from, size_t len);

void add_token(struct token_stream *token_stream, char *from, size_t len)
{
    struct token new_token = create_token(from, len);

    push_token(token_stream, new_token);
}

static struct token create_token(char *from, size_t len)
{
    const char *assignment = "=";

    if (strncmp(from, assignment, len | strlen(assignment))) {
        union token_storage token_storage = { .none = NULL };
        struct token new_token = { .kind = ASSIGNMENT, .storage = token_storage };

        return new_token;
    }

    union token_storage token_storage = { .identifier = NULL };
    struct token new_token = { .kind = IDENTIFIER, .storage = token_storage };

    return new_token;
}

static void push_token(struct token_stream *token_stream, struct token token)
{
    token_stream->len++;

    if (token_stream->capacity < token_stream->len) {
        token_stream->capacity *= 2;
        token_stream->tokens = realloc(token_stream->tokens, token_stream->capacity);
    }

    struct token *target = token_stream->tokens + token_stream->len - 1;
    memcpy(target, &token, sizeof(struct token));
}