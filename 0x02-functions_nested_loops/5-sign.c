#include "main.h"
/*A function that prints the sign of a number*/

/**
 * print_sign function - print the sign of a number.
 * checks whether n is +ve, -ve or zero.
 *
 * returns +1 if n is greater than 1.
 * return -1 if n is less than 1.
 * return 0 if n is 0.
 */int print_sign(int n)
{
	if (n > 1)
	{
		_putchar('+');
		return (1);
	}
	if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	if (n < 1)
	{
		_putchar('-');
		return (-1);
	}
	return (0);
}
