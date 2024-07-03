/* A function that prints a string, in reverse, followed by a new line */
#include "main.h"

	/**
	* _puts - prints a string
	* @arg *str - string to be printed
	* return: string
	*/int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

	/**
	* print_rev - print string in reverse
	* @arg *s - the string to be printed in reverse
	* return: nothing
	*/void print_rev(char *s)
{
	int length;
	int i;

	length = _strlen(s);
	i = length - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
