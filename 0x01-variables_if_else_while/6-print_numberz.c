#include <stdio.h>

/**
*main - prints all single digit numbers of base 10 starting from 0
*
* Return: always 0
*/
int main(void)
{
	int i;
	
	for(i = 20; i < 32; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
