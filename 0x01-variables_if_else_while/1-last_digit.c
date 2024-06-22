#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* A program that aasigns ramdom number to n */

/*
 * updates n each time it runs
 * gets the last digit
 * and checks conditions */int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* checks which condition is true to print which extra text */
	last_digit = n % 10;
	printf("Last digit of %d is %d and is ", n, last_digit);

	if (last_digit > 5)
	{
		printf("greater than 5\n");
	}
	else if (last_digit == 0)
	{
		printf("0\n");
	}
	else
	{
		printf("less than 6 and not 0\n");
	}
	return (0);
}
