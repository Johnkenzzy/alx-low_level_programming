#include "main.h"

	/**
	* _print_rev_recursion - prints a string in reverse
	* @*s: string pointer
	* return: nothing
	*/void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		return;
	}
	_puts_recursion(s + 1);
	_putchar(*s);
}
