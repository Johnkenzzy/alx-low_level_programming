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
	* rev_string - print string in reverse
	* @arg *s - the string to be printed in reverse
	* return: nothing
	*/void rev_string(char *s)
{
	int length;
	int bg;
	int end;
	char temp;

	length = _strlen(s);
	bg = 0;
	end = length - 1;

	while (bg < end)
	{
		temp = s[bg];
		s[bg] = s[end];
		s[end] = temp;
		bg++;
		end--;
	}
}
