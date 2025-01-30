#include "search_algos.h"


/**
 * custom_sqrt - Computes the square root of a number using Newton's method.
 * @n: The number to compute the square root for.
 *
 * Return: The approximated square root, or -1 if n is negative.
 */
double custom_sqrt(int n)
{
	double guess, epsilon;

	if (n < 0)
		return (-1);

	guess = n;
	epsilon = 0.00001;

	while ((guess * guess - n) > epsilon || (n - guess * guess) > epsilon)
	{
		guess = (guess + n / guess) / 2;
	}

	return (guess);
}



/**
 * jump_search - Implements the jump search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for within the array
 *
 * Return: The index of the value, else -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t step, prev, i, low, high;

	if (!array || size == 0)
		return (-1);

	step = (size_t)custom_sqrt(size);
	prev = 0;
	while (prev < size && array[prev] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", prev, array[prev]);
		prev += step;
	}

	low = prev - step;
	high = (prev < size) ? prev : size - 1;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	for (i = low; i <= high; i++)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return ((int)i);
	}

	return (-1);
}
