#include "main.h"
/**
*_isalpha - Shows 1 if the input is a
*
*@c: The character in ASCII code
*Return: always 0
*/
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'e' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
