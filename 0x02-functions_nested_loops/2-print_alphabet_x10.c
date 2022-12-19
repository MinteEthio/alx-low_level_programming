#include "main.h"
#include <unistd.h>
/**
*print_alphabet_x10 - print 10x the alphabet in lower case.
*
*Description: Write a function that prints 10 times the alphabet, in lowercase
*/

void print_alphabet_x10(void)
{
int x;
char c;
for (x = 0; x < 10; x++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
