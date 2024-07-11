#include "main.h"

	/**
	* factorial - calculates the factorial of a given integer
	* @n: integer
	* return: the factorial of the given number
	*/int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	if (n == 0)
	{
		return (1);
	}
	return (n * factorial(n - 1));
}
