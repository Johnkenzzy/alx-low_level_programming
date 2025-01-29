#include "search_algos.h"


/**
 * binary_search - Implements the binary search algorithm
 * @array: Pointer to the first element of the array to search in
 * @size: Number of elements in the array
 * @value: Value to search for within the array
 *
 * Return: The index of the value, else -1
 */
int binary_search(int *array, size_t size, int  value)
{
	size_t i, j, m, p;

	if (!array || size == 0)
		return (-1);

	i = 0;
	j = size - 1;
	while (i <= j)
	{
		printf("Searching in array: ");
		for (p = i; p <= j; p++)
		{
			printf("%d", array[p]);
			if (p < j)
				printf(", ");
		}
		printf("\n");

		m = (i + j) / 2;
		if (array[m] < value)
			i = m + 1;
		else if (array[m] > value)
			j = m - 1;
		else
			return ((int)m);
	}

	return (-1);
}
