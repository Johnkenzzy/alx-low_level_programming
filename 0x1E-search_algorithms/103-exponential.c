#include "search_algos.h"



/**
 * binary_search_mod - Searches for value in sorted array using binary search.
 * @array: Pointer to the first element of the array.
 * @low: Starting index of the subarray.
 * @high: Ending index of the subarray.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found.
 */
int binary_search_mod(int *array, size_t low, size_t high, int value)
{
	size_t mid, i;

	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			printf("%d", array[i]);
			if (i < high)
				printf(", ");
		}
		printf("\n");

		mid = low + (high - low) / 2;

		if (array[mid] == value)
			return (mid);
		else if (array[mid] < value)
			low = mid + 1;
		else
			high = mid - 1;
	}

	return (-1);
}



/**
 * exponential_search - Searches for a value in a sorted array
 * using Exponential Search algorithm.
 *
 * @array: Pointer to the first element of the array.
 * @size: Number of elements in the array.
 * @value: The value to search for.
 *
 * Return: The first index where value is located, or -1 if not found.
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t bound, low, high;

	if (!array || size == 0)
		return (-1);

	bound = 1;

	while (bound < size && array[bound] < value)
	{
		printf("Value checked array[%lu] = [%d]\n", bound, array[bound]);
		bound *= 2;
	}

	low = bound / 2;
	high = (bound < size) ? bound : size - 1;

	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	return (binary_search_mod(array, low, high, value));
}
