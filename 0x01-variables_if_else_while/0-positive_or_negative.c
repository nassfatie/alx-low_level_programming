#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * determine if the number is positive or negative.
 *
 * Return 0:
 */
int main()
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n>0){	
		printf("%d is postive\n", n);
	
	}
	else if (n == 0){
		printf("%d is zero\n", n);
	}
	else{
		printf("%d is negative\n", n);
	}
}
