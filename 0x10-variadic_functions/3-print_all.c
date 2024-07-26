#include <stdio.h>
#include <stdarg.h>

	/**
	* print_all - prints all types of arguments given
	* @format: printing format
	* @...: arguments
	* return: nothing
	*/void print_all(const char * const format, ...)
{
	va_list args;
	int i = 0;
	char *strg;

	va_start(args, format);

	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(args, int));
				break;
			case 'i':
				printf("%d", va_arg(args, int));
				break;
			case 'f':
				printf("%f", va_arg(args, double));
				break;
			case 's':
				strg = va_arg(args, char *);
				if (strg == NULL)
				{
					strg = "(nil)";
				}
				printf("%s", strg);
				break;
		}
		i++;
		if (format[i] && (format[i] == 'c' || format[i] == 'i' || format[i] == 'f' || format[i] == 's'))
		{
			printf(", ");
		}
	}
	printf("\n");
	va_end(args);
}
