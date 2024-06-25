/* A program that prints lowercase alphabet using user-defined header */
#include "main.h"

void print_alphabet_x10(void);

/**
 * print_alphabet - prints lowercase alphabet x10 when called
 *
 * returns nothing*/void print_alphabet_x10(void)
{
	char a = 'a';
	char z = 'z';
	int i = 0;

	while (i < 10)
	{
		while (a <= z)
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}


/*
 * main function - entry point
 *
 * calls the print alphabet function
 * returns 0 (success)
 */int main(void)
{
	print_alphabet_x10();
	return (0);
}
