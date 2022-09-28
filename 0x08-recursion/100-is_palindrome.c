#include "main.h"
/**
*length - helps do it
*@s: string
*Return: string length
*/
int length(char *s)
{
	int i = 0;

	if (*s)
	{
	i = i + length(s + 1);
	return (i += 1);
	}
	return (0);
}
/**
*checker - helps more
*@i: integer i
*@s: string
*Return: int value
*/
int checker(int i, char *s)
{
	if (*s)
	{
	if (*s != s[length(s) - i])
	{
	return (0);
	}
	else
	{
	return (checker(i + 1, s + 1));
	}
	}
	return (1);
}
/**
*is_palindrome - if the palindrome
*@s: string to check
 * Return: palindrome
 */
int is_palindrome(char *s)
{
	int i = 1;

	return (checker(i, s));

}
