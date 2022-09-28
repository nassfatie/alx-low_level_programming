#include "main.h"

/**
*checker - helps decide if i'm right
*@i: integer
*@n: number
*Return: value of root
*/
int checker(int i, int n)
{
	int j;

	if (i * i != n)
	{
	if (i > n)
	{
	return (-1);
	}
	j = checker(i + 1, n);
		return (j + 1);
	}
	return (0);
}
/**
*_sqrt_recursion - returns square root
*@n: integer to return
*
*Return: returns int of squareroot
*/
int _sqrt_recursion(int n)
{
	int i = 0;

	if (checker(i, n) == n && n != 1)
	return (-1);
	return (checker(i, n));

}
