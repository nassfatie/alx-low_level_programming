#include "main.h"
#include <stdlib.h>

/**
*_strdup - contains a copy of given string
*@str:String to duplicate
*
*Return: string
*/

char *_strdup(char *str)
{
	int n = 0, i = 1;
	char *s;

	if (str == NULL)
	return (NULL);

	while (str[i])
	{
	i++;
	}

	s = malloc((sizeof(char) * i) + 1);
	if (s == NULL)
	return (NULL);

	while (n < i)
	{
	s[n] = str[n];
	n++;
	}
	s[n] = '\0';
	return (s);
}
