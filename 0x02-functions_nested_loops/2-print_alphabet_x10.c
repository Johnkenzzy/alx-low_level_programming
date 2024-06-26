/* A program that prints lowercase alphabet using user-defined header */
#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet x10 when called
 *
 * returns nothing*/void print_alphabet_x10(void)
{
	char a;
	char z;
	int i = 0;

	while (i < 10)
	{
		a = 'a';
		z = 'z';
		while (a <= z)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}
