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
	int i;
	int n = 0;
	char *j;

	if (str == NULL)
	return (NULL);

	while (str[n] != '\0')
	n++;

	j = malloc(sizeof(char) * n + 1);
	if (j == NULL)
	return (NULL);

	for (; i < n; i++)
	j[i] = str[i];
	return (j);
}
