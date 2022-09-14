#include "main.h"
/**
*print_alphabet - function that prints the alphabet,in lowercase
*
*Return: always 0
*/
void print_alphabet(void)
{
	int x;

	for (x = 'a'; x <= 'z'; x++)
	{
		_putchar(x);
	}
	_putchar('\n');
}
