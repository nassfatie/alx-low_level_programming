#include <stdio.h>

/**
*main - reversed alphabet
*
*Return: always 0
*/
int main(void)
{

	char alp[26] = "zyxwvutsrqponmlkjihgfedcba";
	int j;

	for (j = 0; j < 26; j++)
	{
		putchar(alp[j]);
	}
	putchar('\n');
	return (0);
}
