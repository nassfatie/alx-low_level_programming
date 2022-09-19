#include "main.h"
#include <stdio.h>

/**
*swap_int - swaps the values of two integers.
*@a:integer to be swapped
*@b:another in integer for swapping
*
*Return: swapped values
*/
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}
