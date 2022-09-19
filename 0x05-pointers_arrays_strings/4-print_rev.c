#include "main.h"

/**
*print_rev - prints a string in reverse.
*@s:string
*
*Return: success
*/
void print_rev(char *s)
{
	int j = 0;

	while (s[j] != '\0')
	{
	j++;
	}
	while (j > 0)
	{
	_putchar(s[j]);
	j--;
	}
	_putchar('\n');
}
