#include "main.h"

	/**
	* print_binary - prints the binary of a number
	* @n: integer number
	* return: nothing
	*/void print_binary(unsigned long int n)
{
	unsigned long int mask = 1UL << (sizeof(unsigned long int) * 8 - 1);
	int lead_zero = 1;

	while (mask > 0)
	{
		if (n & mask)
		{
			_putchar('1');
			lead_zero = 0;
		}
		else if (!lead_zero)
		{
			_putchar('0');
		}

		mask >>= 1;
	}

	if (lead_zero)
	{
		_putchar('0');
	}
}
