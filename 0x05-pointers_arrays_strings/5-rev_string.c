#include "main.h"

/**
*rev_string - reverse string
*@s:string character
*
*Return: success.
*/
void rev_string(char *s)
{
	int x = 0, index = 0;
	char a;

	while (s[index++])
		x++;

	for (index = x - 1; index >= x / 2; index--)
	{
	a = s[index];
	s[index] = s[x - index - 1];
	s[x - index - 1] = a;
	}
}
