/* A function that prints 10 times the numbers, from 0 to 14 */
#include "main.h"

void print_number(int n);

	/**
	* more_numbers - prints 10 line of 0 to 14 count
	*
	* returns nothing
	*/void more_numbers(void)
{
	int count;
	int i;

	for (count = 0; count < 10; count++)
	{
		for (i = 0; i < 15; i++)
		{
			print_number(i);
		}
		_putchar('\n');
	}
}

	/**
	* print-number - print all numbers
	*
	* include tense and units digits
	*/void print_number(int n)
{
	if (n >= 10)
	{
	_putchar((n / 10) + '0');
	}
	_putchar((n % 10) + '0');
}
