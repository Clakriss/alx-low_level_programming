#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
*main - > assigns a random number to the variable n each time it is executed and pri*nts outs based on a condition
*Return : always 0
*/
int main(void)
{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n > 0)	
	{
		print("%d is positive \n", n);
	}
	else if (n == 0)
	{
		print("%d is zero \n", n);
	}
	else (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);

}
