#include "search_algos.h"


/**
 * linear_search - Implements the linear search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for within the array
 *
 * Return: The first index of value, else -1
 */
int linear_search(int *array, size_t size, int  value)
{
	size_t i;
	int j = 0;

	if (!array)
		return (-1);

	for(i = 0; i < size; i++)
	{
		j++;
		if (array[i] == value)
			return (j);
	}

	return (-1);
}
