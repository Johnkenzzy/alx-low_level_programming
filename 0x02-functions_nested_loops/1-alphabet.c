/* A program that prints lowercase alphabet using user-defined header */
#include "main.h"

/**
 * print_alphabet - prints lowercase alphabet  when called
 *
 * returns nothing*/void print_alphabet(void)
{
	char a = 'a';
	char z = 'z';

	while (a <= z)
	{
		_putchar(a);
		a++;
	}
	_putchar('\n');
}
