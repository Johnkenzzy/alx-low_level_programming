/* A unction that draws a straight line in the terminal */
#include "main.h"

	/**
	* print_line - prints straight line
	* takes a digit a parameter n,
	* inicating number of lines to print
	*
	* returns nothing
	*/void print_line(int n)
{
	int i;

	i = 0;
	while (i < n)
	{
		if (n == 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
		i++;
	}
	_putchar('\n');
}
