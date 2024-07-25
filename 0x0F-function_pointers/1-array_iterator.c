#include <stdlib.h>

	/**
	* array_iterator - executes a function given as a parameter,
	* on each element of array
	* @array: array
	* @size: size of the array
	* @action: a pointer to the function you need to use
	* return: nothing
	*/void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
	{
		return;
	}

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
