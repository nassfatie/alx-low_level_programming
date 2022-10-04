#include "main.h"
#include <stdlib.h>

/**
*create_array - array to be created
*@size:size of the array
*@c:character for initilization
*
*Return: char value
*/

char *create_array(unsigned int size, char c)
{
	char *k;
	unsigned int i;

	if (size == 0)
	return (NULL);

	k = malloc(sizeof(char) * size);

	if (k == NULL)
	return (NULL);

	for (i = 0; i < size; i++)
	k[i] = c;
	return (k);
}
