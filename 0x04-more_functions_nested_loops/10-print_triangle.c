#include "main.h"
/**
 * print_tiangle - a function to prints a triangle
 * Description: prints a triangle
 * @size: the size of the triangle.
 */
void print_triangle(int size)
{
	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;
		int j;

		for (i = 1; i <= size; i++)
		{
			for (j = size - i; j > 0; j--)
			{
				_putchar(' ');
			}
			for (j = i; j > 0; j--)
			{
				_putchar(35);
			}
			-putchar('\n');
		}
	}
}
