#include <stdio.h>
/**
*entry - Prints natural numbers
*@n: input number
*
*
*Return: always o
*/
void print_to_98(int n)
{
	if (n < 98)
	{
		for (; n < 98; n++)

		{
		printf("%d, ", n);
		}
	}

	else if (n > 98)
	{
		for (; n > 98; n--)
		{
		printf("%d, ", n);
		}
	}
	printf("%d\n", n);
}
