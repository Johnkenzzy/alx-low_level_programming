/* A function that prints a quare in the terminal */
#include "main.h"

	/**
	* print_line - prints a square
	* takes a digit a parameter n,
	* inicating size of square to print
	*
	* returns nothing
	*/void print_square(int size)
{
	int l;
	int w;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	l = 0;
	while (l < size)
	{
		w = 0;
		while (w < size)
		{
			_putchar('#');
			w++;
		}
		_putchar('\n');
		l++;
	}
}
