#ifndef CATSCRIPT_LEX_H
#define CATSCRIPT_LEX_H
#include <stddef.h>

enum tok_t{
	INT_LITTERAL,
	FLOAT_LITTERAL,
	STRING_LITTERAL,
	IDENTIFIER,
	LINE_END,
	FILE_END,
};
union tok_t{
	int int_litteral;
	float float_litteral;
	char * string_litteral;
	char * identifier;
};
struct tok{
	enum tok_t type;
	union tok_t data;
};

void lex(const char *source_code, size_t len);
#endif // CATSCRIPT_LEX_H
