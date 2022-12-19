#include "main.h"
/**
*main -  print_alphabet_x10 
*
*Description: Write a function that prints 10 times the alphabet, in lowercase
*/

void print_alphabet_x10(void)

{
  int x;
  int c;
for (x = 0; x <= 10; x++)
{
for (c = 'a'; c <= 'z'; c++)
{
_putchar(c);
}
_putchar('\n');
}
}
