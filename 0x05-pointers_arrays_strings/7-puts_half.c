/* A function that prints half of a string */
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
	* _puts - prints half of a string
	* @arg *str - string to be printed
	* return: nothing
	*/void puts_half(char *str)
{
	int length = _strlen(str);
	int bg;
	int i;

	if (length % 2 == 0)
	{
		bg = length / 2;
	}
	else
	{
		bg = (length - 1) / 2 + 1;
	}
	i = bg;
	while (i < length)
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
