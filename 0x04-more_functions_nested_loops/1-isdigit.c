#include "main.h"

/**
*_isdigit - checks for the digit.
*@c: input character
*
*Return: gives 1
*/

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))

		return (1);

	return (0);

}
