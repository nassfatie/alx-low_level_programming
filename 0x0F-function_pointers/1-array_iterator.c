#include <stdio.h>
#include "function_pointers.h"
#include <stdlib.h>
/**
*array_iterator - iterates through array
*@array: array
*@size: size of array
*@action: action
*
*Return: nothing
*/
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		exit(98);
	for (i = 0; i < size; i++)
	{
	action(array[i]);
	}
}
