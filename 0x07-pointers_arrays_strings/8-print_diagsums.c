#include "main.h"
#include <stdio.h>

/**
 *print_diagsums - Print the sum of two diagonals of square matrix
 *
 *@a:matrix
 *@size:size
 *
 *Return: Nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, j, k;

	for (i = 0; i < size; i++)
	{
		j += a[(size + 1) * i];
		k += a[(size - 1) * (i + 1)];
	}

	printf("%d, %d\n", j, k);
}
