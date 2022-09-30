#include "main.h"
#include <stdio.h>
/**
 * _strspn - length of prefix
 * @s: string
 * @accept: accepted bytes
 * Return: returns values
 */
unsigned int _strspn(char *s, char *accept)
{
	char *m = s;
	char *n;

	while (*s)
	{
	for (n = accept; *n; n++)
	{
	if (*s == *n)
	break;
	}
	if (*n == '\0')
	break;
	s++;
	}
	return (s - m);
}
