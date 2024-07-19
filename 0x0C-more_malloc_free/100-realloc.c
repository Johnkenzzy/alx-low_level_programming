#include <stdlib.h>

char *_memcpy(char *dest, char *src, unsigned int n);

	/**
	* _realloc - realocates a memory block
	* @ptr: pointer to memory prviously allocated
	* @old_size: previous size
	* @new_size: new size
	*/void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
	{
		return (ptr);
	}

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
		{
			return (NULL);
		}
		return (new_ptr);
	}

	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
	{
		return (NULL);
	}

	if (old_size > 0)
	{
		_memcpy(new_ptr, ptr, (old_size < new_size ? old_size : new_size));
	}

	return (new_ptr);
}

	/**
	* _memcpy - copies memory area,
	* from one area/pointer to another
	* @dest: destinantion array
	* @src: source array to be copied into the dest
	* @n: the length of memory bytes from src to be copied
	* return: a pointer to dest
	*/char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
