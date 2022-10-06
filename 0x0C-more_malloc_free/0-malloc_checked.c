#include "main.h"
#include <stdlib.h>
/**
*malloc_checked - checks malloc
*@b: integer to check?
*
*Return: a pointer
*/
void *malloc_checked(unsigned int b)
{

	void *p;

	p = malloc(b);
	if (!p)
	exit(98);

	return (p);
}
