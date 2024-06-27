/* A function that prints the numbers, from 0 to 9 */
#include "main.h"

	/**
	* print_numbers - prints 0 to 9
	*
	* returns nothing
	*/void print_numbers(void)
{
	int i;

	for (i = 0; i <  10; i++)
	{
		_putchar('0' + i);
	}
	_putchar('\n');
}
