/* A program that prints lowercase alphabet using user-defined header */
#include "main.h"

void print_alphabet(void);

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

/*
 * main function - entry point
 *
 * calls the print alphabet function
 * returns 0 (success)
 */int main(void)
{
	print_alphabet();
	return (0);
}
