#include <stdio.h>

/**
 *main - Entry point.
 *
 *Return: Always 0
 */
int main(void)
{
	int x, y;

	x = 47;
	y = 47;

	while (y < 58)
	{
		x = 47;
		while (x < 58)
		{
			putchar(x);
			putchar(y);
			if (x == 57 && y == 57)
			{
				break;
			}
			putchar(',');
			putchar(' ');
			x++;
		}
		y++;
	}
	putchar('\n');
	return (0);
}
