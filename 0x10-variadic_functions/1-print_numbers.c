#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>

	/**
	* print_numbers - prints numbers
	*
	* @separator: a string printed between numbers
	* @n: integer count
	* return: nothing
	*/void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int num;

	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		num = va_arg(nums, int);
		printf("%d", num);
		if (separator && i < n - 1)
		{
			printf("%s", separator);
		}

	}
	printf("\n");

	va_end(nums);
}
