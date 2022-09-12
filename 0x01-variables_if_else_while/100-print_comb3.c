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

			putchar((x % 10) + '0');
			putchar((y % 10) + '0');
			if (x != 19 || y != 19)
			{

			}
			putchar(',');
			putchar(' ');

		}

	}
	putchar('\n');
	return (0);
}
