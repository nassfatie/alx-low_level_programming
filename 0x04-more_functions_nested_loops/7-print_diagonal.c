#include "main.h"
/**
*print_diagonal - prints diagonal line.
*
*@n: number of times the character \ should be printed
*
*/
void print_diagonal(int n)
{
	int l;
	int m;

	if (n <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (l = 0; l < n; l++)
	{
	for (m = 0; m < l; m++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');
	}
	}
}
