#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
*alloc_grid - creates matrix
*@width: width of array
*@height: height of array
*
*Return: pointer of new grid
*/
int **alloc_grid(int width, int height)
{
	int **i;
	int j;
	int k;

	if (width <= 0 || height <= 0)
	return (NULL);

	i = (int **)malloc(sizeof(int *) * height);
	if (i == NULL)
	return (NULL);

	for (j = 0; j < height; j++)
	{
	i[j] = (int *)malloc(sizeof(int) * width);
	if (i[j] == NULL)
	{
	for (k = 0; k < j; k++)
	{
	free(i[k]);
	}
	free(i);
	}
	}

	for (j = 0; j < height; j++)
	for (k = 0; k < width; k++)
	i[j][k] = 0;

	return (i);
}
