#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
*print_numbers - Prints numbers.
*@separator:string.
*@n:integers.
*
*
*/
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int k;

	va_start(nums, n);

	for (k = 0; k < n; k++)
	{
	printf("%d", va_arg(nums, int));

	if (k != (n - 1) && separator != NULL)
	printf("%s", separator);
	}

	printf("\n");

	va_end(nums);
}
