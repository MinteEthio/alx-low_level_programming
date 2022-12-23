#include "main.h"

/**
 * print_numbers - a function that prints (0 to 9)
 * Description: number from 0 to 9
 */
void print_number(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		_putchar(i + '0');
	}
	_putchar('\n');
}
