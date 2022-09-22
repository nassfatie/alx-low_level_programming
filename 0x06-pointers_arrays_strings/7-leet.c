#include "main.h"

/**
*leet - encodes a string into 1337.
*@s:string
*
*Return:success
*/
char *leet(char *s)
{
	int i = 0, j;
	int lowercase[] = {97, 101, 111, 116, 108};
	int caps[] = {65, 69, 79, 84, 76};
	int n[] = {52, 51, 48, 55, 49};

	while (*(s + i) != '\0')
	{
	for (j = 0; j < 5; j++)
	{
	if (*(s + i) == lowercase[j] || *(s + i) == caps[j])
	{
	*(s + i) = n[j];
	break;
	}
	}
	i++;
	}

	return (s);
}
