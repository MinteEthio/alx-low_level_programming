#include "main.h"
/**
 *islower - check for lowercase character
 *
 *Description: checks for alphabetic character.
 *Return: 1 if lowercase else o.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
return (0);
}
