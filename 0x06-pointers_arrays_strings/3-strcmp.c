#include "main.h"

/**
*_strcmp - compares two numbers
*@s1:size one
*@s2:size two
*
*Return: success
*/
int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] - s2[i] == 0 && s1[i] != '\0')
	{
	i++;
	}
	return (s1[i] - s2[i]);
}
