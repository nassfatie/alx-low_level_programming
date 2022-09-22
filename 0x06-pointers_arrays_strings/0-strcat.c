#include "main.h"

/**
*_strcat - concatenates two strings
*@dest:destination.
*@src:source.
*
*Return: destination
*/
char *_strcat(char *dest, char *src)
{
	int destlen = 0;
	int srclen = 0;
	int i = 0;

	while (*(dest + destlen) != '\0')
	{
	destlen++;
	}

	while (*(src + srclen) != '\0')
	{
		srclen++;
	}

	while (i < srclen)
	{
	*(dest + destlen) = *(src + i);
	i++;
	destlen++;
	}
	return (dest);
}
