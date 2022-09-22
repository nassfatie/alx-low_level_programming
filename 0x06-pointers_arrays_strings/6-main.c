#include "main.h"
#include <stdio.h>

/**
*main - check the code
*
*Return: Always 0.
*/
int main(void)
{
	char str[] = "Expect the best. Prepare for the worst. Capitalize on what to come s.\nhello World! hello-World 0123456hello world\the	    llo world.hello world\n";
	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);
	return (0);
}
