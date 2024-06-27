/* A function that prints the numbers, from 0 to 9 */
#include "main.h"

	/**
	* print_numbers - prints 0 to 9,
	* excluding 2 and 4
	*
	* returns nothing
	*/void print_most_numbers(void)
{
	int i;

	for (i = 0; i <  10; i++)
	{
		if (i == 2 || i == 4)
		{
			continue;
		}
		_putchar('0' + i);
	}
	_putchar('\n');
}
