#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
*int_index - array indexes
*@array: array
*@size: size of array
*@cmp: function
*
*Return: value
*/
int int_index(int *array, int size, int (*cmp)(int))
{
	int x;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);
	for (x = 0; x < size; x++)
	{
	if (cmp(array[x]))
	return (x);
	}
	return (-1);
}
