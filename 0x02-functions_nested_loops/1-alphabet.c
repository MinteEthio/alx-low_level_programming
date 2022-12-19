#include "main.h"

/**
 *print_alphabet - print the alphabet in lower case
 *
 *Description: prints the alphabet in lowercase
 */

void print_alphabet(void)
{
char chr;
for (chr = 'a'; chr <= 'z'; chr++)
{
_putchar(chr);
}

_putchar('\n');
}
