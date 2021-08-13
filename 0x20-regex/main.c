#include <stdlib.h>
#include <stdio.h>

#include "regex.h"

#define TEST_MATCH(s, p)    do {\
    {\
        int res = regex_match(s, p);\
        printf("%s -> %s = %d\n", s, p, res);\
    }\
} while(0)

/**
 * main - Entry point
 *
 * Return: EXIT_SUCCESS or EXIT_FAILURE
 */
int main(void)
{
    TEST_MATCH("H", "H");
    TEST_MATCH("HH", "H");
    TEST_MATCH("HH", "H*");
    TEST_MATCH("HHHHHHHHHHHHHHHHH", "H*");

    TEST_MATCH("Text", ".*");
    TEST_MATCH("YESS", ".*");
    TEST_MATCH("RANDOM", ".*");
    TEST_MATCH("RANDOMMM", ".*");

    TEST_MATCH("Code", "Z*H.*");
    TEST_MATCH("Code", "Z*H.*olberton");
    TEST_MATCH("Code", "Z*H.*o.");
    TEST_MATCH("Code", "Z*H.*o");

    TEST_MATCH("Code", "Code");
    TEST_MATCH("Code", ".olberton");

    TEST_MATCH("!H@o#l$b%e^r&t(o)n_", "!.@.#.$.%.^.&.(.)._");

    return (EXIT_SUCCESS);
}
