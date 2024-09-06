#include "main.h"


	/**
	* print_digits - prints digits
	* @n: integer argument
	* return: nothing
	*/void print_digits(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
		print_digits(n / 10);

	_putchar((n % 10) + '0');
}


	/**
	* print_times_table - prints the n times table
	* returns nothing
	*/void print_times_table(int n)
{
	int i, j, k;

	if (n < 0 || n > 15)
		return;

	for (i = 0; i <= n; i++)
	{
		for (j = 0; j <= n; j++)
		{
			k = i * j;
			if (k < 10)
			{
				if (j < 1)
					_putchar('0');
				else
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
			}
			else
			{
				if (k < 100)
					_putchar(' ');

				print_digits(k);
			}
			if (j < n)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
