#include <stdio.h>
/**
* main - Entry point
*
*
* Return: Always 0 (Success)
*/
int main (void) 
{
	char c;
	int i;
	long int li;
	float f;
	printf("Size of a char: %lu bytes \n",(unsigned long)sizeof(c));
	printf("Size of an int:%lu bytes \n",(unsigned long)sizeof(i));
	printf("Size of a long long int:%lu bytes \n",(unsigned long)sizeof(li));
	printf("Size of a float is:%lu bytes \n",(unsigned long)sizeof(f));
return (0);
}
