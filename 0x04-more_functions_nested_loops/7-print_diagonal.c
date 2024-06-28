/* A function that draws a diagonal line in the terminal */
#include "main.h"

	/**
	* print_line - prints diagonal line
	* takes a digit a parameter n,
	* inicating number of lines to print
	*
	* returns nothing
	*/void print_diagonal(int n)
{
	int i;
	int sp;

	i = 0;
	while (i < n)
	{
		sp = 0;
		while (sp < i)
		{
			if (n <= 0)
			{
				_putchar('\n');
			}
			else
			{
				_putchar(' ');
			}
			sp++;
		}
		_putchar('\\');
		_putchar('\n');
		i++;
	}
}
