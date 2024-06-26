/* A function that prints the last digit of a number */
#include <stdio.h>
#include <stdlib.h>
#include "main.h"

	/**
	* print_last_digit - prints the last digit of a number
	* takes the inter as argument
	*
	* returns the value of the last digit
	* */int print_last_digit(int i)
{
	int ld = i % 10;

	if (i < 0)
	{
		ld = abs(i % 10);
		_putchar('0' + ld);
	}
	else
	{
		_putchar('0' + ld);
	}
	return (ld);
}
