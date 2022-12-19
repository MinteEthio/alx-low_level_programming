#include "main.h"
#include <unistd.h>

/**
 * _isalpha -check character
 *
 *return: 1 if  is a letter
 *@c:character to be cheked
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
