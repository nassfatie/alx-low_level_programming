#include <stdio.h>

/**
 * main - finds and prints the largest prime factor of the number
 *
 * Return: returns 0
 */
int main(void)
{
	 int i = 2;
	long l = 612852475143;

	while (i != l)
	{
		if (l % i == 0)
		{
			l = l / i;
		} else
		{
			i++;
		}
	}
	printf("%lu\n", l);
	return (0);
}
