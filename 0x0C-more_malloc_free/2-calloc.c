#include <stdlib.h>

char *_memset(char *s, char b, unsigned int n);

	/**
	* _calloc - allocates memory for an array
	* @nmemb: array
	* @size: bytes size of array
	* return: void pointer
	*/void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	arr = malloc(nmemb * size);
	if (arr == NULL)
	{
		return (NULL);
	}

	_memset(arr, 0, nmemb * size);

	return (arr);
}

	/**
	* _memset - copies bytes constant int a memory,
	* a temporary storage area in memory (a buffer)
	*
	* @*s: the array/pointer of concern
	* @b: the byte constant to be copied
	* @n: the number of bytes to be filled
	* return: a pointer to memory area, s
	*/char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
