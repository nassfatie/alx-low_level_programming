#include "main.h"

/**
*int _islower - checks for lowercase character.
*
*Return: 1 for lowercase and 0 for the rest
*_islower shows 1 if the input is a
*@c: The character in ASCII code
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	_putchar('\n');
}
