#include <stdio.h>
/**
* main - Entry point
*
*
* Return: Always 0
*/
int main (void) 
{
	char c;
	int i;
	long int li;
	float f;
	prinf("Size of a char: %d bytes \n",(unsigned long)sizeof(c));
	prinf("Size of an int:%d bytes \n",(unsigned long)sizeof(i));
	prinf("Size of a long int:%d bytes \n",(unsigned long)sizeof(li));
	prinf("Size of a float is:%dbytes \n",(unsigned long)sizeof(f));
return (0);
}
