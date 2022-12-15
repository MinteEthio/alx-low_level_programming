#include <stdio.h>

/**
*main - Entry point
*
*Return: Always 0 (Success)
*/
int main(void)
{
int n;
char chr;

for (n = 48; n < 58; n++)
putchar((n) + 0);
for (chr = 'a'; chr <= 'f'; chr++)
putchar(chr);
putchar('\n');

return (0);
}
