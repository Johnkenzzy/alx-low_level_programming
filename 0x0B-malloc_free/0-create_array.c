#include <stdlib.h>

	/**
	* create_array - creates an array of char,
	* and initailizes it with a special character
	*
	* @size: size of array
	* @c: character assigined to the new array
	*
	* return: NULL if size is 0
	* return: a pointer to the array if successful
	*/char *create_array(unsigned int size, char c)
{
	char *array_ptr;
	unsigned int i;

	if (size == 0)
	{
		return (NULL);
	}
	else
	{
		array_ptr = malloc(sizeof(char) * size);
	}
	for (i = 0; i < size; i++)
	{
		array_ptr[i] = c;
	}

	return (array_ptr);
}
