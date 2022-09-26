#include "main.h"

/**
*_memcpy - copies memory
*@src:source
*@dest:destination
*@n:number of times
*Return: dest
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
