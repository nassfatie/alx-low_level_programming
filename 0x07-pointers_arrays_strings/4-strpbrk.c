#include "main.h"

/**
*_memset -  memory with constant byte
*@n:number of bytes
*@s:string
*@b:consant byte
*Return: string
*/
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
