#include "main.h"

/**
*print_alphabet_x10 - entry point
*
*Return: always 0
*/
void print_alphabet_x10(void)
{
	int y, x;

	for (y = 0; y <= 9; y++)
	{
		for (x = 97; x <= 122; x++)
		{
		_putchar(x);
		}
		_putchar('\n');
	}

}
