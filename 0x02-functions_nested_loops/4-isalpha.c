#include "main.h"
#include <unistd.h>

/**
* _isalpha - check alphabetic character
*
* @c: is the letter
* Descrption: check alphabetic character
* Return: 1 if is a letter
*/

int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
{
return (1);
}
else
{
return (0);
}
}
