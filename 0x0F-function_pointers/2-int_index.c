#include <stdlib.h>

	/**
	* int_index - searches for an integer
	* @array: the array
	* @size: number of elements in the array
	* @cmp: pointer to the function to be used to compare values
	* return: the index of the firs element,
	* -1 if no element matches
	*/int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]))
		{
			return (i);
		}
	}
	return (-1);
}
