#include <stdio.h>

/**
 *main - Entry point.
 *
 *Return: Always 0
 */
int main(void)
{
	int x, y;

	for (x = 10; x <= 19; x++)
	{
		for (y = 10; y <= 19; y++)
		{
			if ((x % 10) > (y % 10))
			{
			putchar((x % 10) + '0');
			putchar((y % 10) + '0');
			if (x != 18 || y != 19)
			{

			}
			putchar(',');
			putchar(' ');

			}
		}

	}
	putchar('\n');
	return (0);
}
