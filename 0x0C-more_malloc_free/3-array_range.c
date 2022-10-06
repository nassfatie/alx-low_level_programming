#include "main.h"
#include <stdlib.h>

/**
*array_range - array of integers
*@min:lowest values
*@max:highest values
*
*Return: Pointer
*/

int *array_range(int min, int max)
{
	int i;
	int *p;
	int j;

	if (min > max)
	return (NULL);
	j = 0;
	for (i = min; i <= max; i++)
	j++;
	p = malloc(sizeof(int) * j);
	if (p == NULL)
	return (NULL);

	i = 0;
	while (min <= max)
	{
	p[i] = min;
	i++;
	min++;
	}
	return (p);
}
