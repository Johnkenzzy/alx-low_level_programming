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
			strg = "(nil)";
		}
		if (separator == NULL)
		{
			printf("%s ", strg);
		}
		else
		{
			if (i != n - 1)
			{
				printf("%s%s ", strg, separator);	
			}
			else
				printf("%s", strg);
		}
	}
	printf("\n");

	va_end(strgs);
}
