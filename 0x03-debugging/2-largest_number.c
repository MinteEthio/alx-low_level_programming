#include "main.h"

/**
 * largest_number-returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{


	if (a >= b && a >= c)
	{
		largest = a;
		printf("%d is the largest number\n", largest);
	}
	else if (b >= a && b >= c)
		printf("%d is the largest number\n", largest);
	{
		largest = b;
	}
	else
	{
		largest = c;
		printf("%d is the largest number\n", largest);
	}
	return (largest);
}
