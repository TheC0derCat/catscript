#include "tests.h"
#include <stdio.h>

void eval_result(bool result);

int main(void)
{
    eval_result(test_lex());
}

void eval_result(bool result)
{
    printf("test %s\n", result ? "success" : "failure");
}