#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* A program that prints a randon number */

/*
 * generates a random number
 * prints the number and
 * determinines whether it's + or - */int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* checks condition whether a number is +ve, -ve or zero */
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	return (0);
}
