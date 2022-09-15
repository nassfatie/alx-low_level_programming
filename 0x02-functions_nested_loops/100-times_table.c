#include "main.h"
/**
*print_times_table - this function is called to print table
*@n: integer
*Decription: table of 9
*
*Return: Always 0. (Success)
*/
void print_times_table(int n)
{
	int x, y, z;

	for (x = 0; x <= n; x++)
	{
		_putchar('0');
		_putchar(',');
		_putchar(' ');
	for (y = 1; y <= n; y++)
	{
		z = (x * y);
	if ((z / 10) > 0)
	{
		_putchar((z / 10) + '0');
	}
	else
	{
		_putchar(' ');
	}
		_putchar((z % 10) + '0');
	if (y < n)
	{
		_putchar(',');
	      _putchar(' ');
	}
	}

	_putchar('\n');
	}
}
