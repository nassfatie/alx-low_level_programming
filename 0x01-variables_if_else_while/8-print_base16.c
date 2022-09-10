#include <stdio.h>
/**
*main - entry point
*
*Return: always 0
*/
int main(void)
{

	int x;

	for (x = 42; x < 50; x++)
	{
		putchar(x);
	}
	for (x = 97; x < 100; x++)
	{
		putchar(x);
	}
	putchar('\n');
	return (0);
}
