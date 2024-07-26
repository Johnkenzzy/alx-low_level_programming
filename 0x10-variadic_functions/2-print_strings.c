#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

	/**
	* print_strings - print strings
	*
	* @separator: a string printed between strings
	* @n: strings count
	* return: nothing
	*/void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strgs;
	unsigned int i;
	char *strg;

	va_start(strgs, n);
	for (i = 0; i < n; i++)
	{
		strg = va_arg(strgs, char *);
		if (strg == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", strg);
		}
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");

	va_end(strgs);
}
