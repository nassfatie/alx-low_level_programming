#include <stdio.h>

/**
*check_prime - check if number is prime
*@n:integer number
*@i:iteration times
*
*Return:success
*/
int check_prime(int n, int i)
{

	if (n % i == 0 && n != i)
	return (0);

	if (n % i != 0 && i < n)
	return (check_prime(i + 1, n));
	return (1);
}

/**
*is_prime_number - is prime or not
*@n:integer
*
*Return: integer
*/
int is_prime_number(int n)
{
	int i = 2;

	if (n < 2)
	return (0);
	return (check_prime(i, n));
}
