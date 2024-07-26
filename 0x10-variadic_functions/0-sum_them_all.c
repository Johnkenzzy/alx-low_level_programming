#include <stdarg.h>

	/**
	* sum_them_all - sum up all its paramters
	* @n: input count
	* @...: argument list
	* return: the sum of all parameters
	*/int sum_them_all(const unsigned int n, ...)
{
	va_list nums;
	unsigned int i;
	int sum;

	if (n == 0)
	{
		return (0);
	}

	sum = 0;
	va_start(nums, n);
	for (i = 0; i < n; i++)
	{
		sum += va_arg(nums, unsigned int);
	}
	va_end(nums);

	return (sum);
}
