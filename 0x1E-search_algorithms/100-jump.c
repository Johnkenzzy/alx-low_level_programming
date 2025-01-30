#include "search_algos.h"
#include <math.h>


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

	step = (size_t)sqrt(size);
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
