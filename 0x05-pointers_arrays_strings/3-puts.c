/* A function that prints a string, followed by a new line, to stdout */
#include "main.h"

	/**
	* _puts - prints a string
	* @arg *str - string to be printed
	* return: string
	*/void _puts(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
