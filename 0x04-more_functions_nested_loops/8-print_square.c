#include "main.h"
/**
*print_square - prints squares
*@size: size of the square
*
*Return: always 0
*/
void print_square(int size)
{
	int l;
	int m;

	if (size <= 0)
	{
	_putchar('\n');
	}
	else
	{
	for (l = 0; l < size; l++)
	{
	for (m = 0; m < size; m++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
}
