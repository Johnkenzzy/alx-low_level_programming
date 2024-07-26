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
	char curr_fmt;

	va_start(args, format);

	while (format && format[i])
	{
		curr_fmt = format[i];
		if (curr_fmt == 'c' || curr_fmt == 'i' || curr_fmt == 'f' || curr_fmt == 's')
		{

			switch (curr_fmt)
			{
				case 'c':
					printf("%c,", va_arg(args, int));
					break;
				case 'i':
					printf("%d,", va_arg(args, int));
					break;
				case 'f':
					printf("%f,", va_arg(args, double));
					break;
				case 's':
					strg = va_arg(args, char *);
					if (strg == NULL)
					{
						strg = "(nil)";
					}
					printf("%s,", strg);
					break;
			}
		}
		i++;
	}
	printf("\n");
	va_end(args);
}
