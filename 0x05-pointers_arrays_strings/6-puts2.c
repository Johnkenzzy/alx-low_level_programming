/* A function that prints every other character of string, with firts char */
#include "main.h"

	/**
	* _puts - prints characters
	* @arg *str - characters to be printed
	* return: characters
	*/void puts2(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
		i++;
	}
	_putchar('\n');
}
