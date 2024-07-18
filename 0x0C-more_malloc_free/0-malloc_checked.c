#include <stdlib.h>

	/**
	* malloc_checked - allocates memory using malloc
	* @b: memory size in bytes
	* return: nothing
	*/void *malloc_checked(unsigned int b)
{
	void *var;

	var = malloc(b);
	if (var == NULL)
	{
		exit(98);
	}
	return (var);
}
