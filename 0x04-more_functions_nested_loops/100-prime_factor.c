/* A that prints the largest prime factor of the number 612852475143 */
#include <stdio.h>

void largest_prime_factor(long int number);

	/**
	* main - entry point
	* takes no parameter
	*
	* returns 0 (success)
	*/int main(void)
{
	long int number = 612852475143;

	largest_prime_factor(number);
	return (0);
}

	/**
	* function - finds the prime factor of s number
	* prints out the value of the largest prime factor
	*
	* takes the number as parameter
	* returns a long integer
	*/void largest_prime_factor(long int number)
{
	long int largest_factor = 1;
	long int factor = 2;

	while (number % factor == 0)
	{
		largest_factor = factor;
		number /= factor;
	}

	factor = 3;
	while (number != 1)
	{
		while (number % factor == 0)
		{
			largest_factor = factor;
			number /= factor;
		}
		factor += 2;
	}
	printf("%11ld\n", largest_factor);
}
