/* A function that prints n elements of an array of integers */
#include <stdio.h>

	/**
	* print_array - print array of integers
	* @arg *a - array pointer
	* @arg n - number of elements in array
	* returns: nothing
	*/void print_array(int *a, int n)
{
	int i;

	i = 0;
	while	(i < n)
	{
		printf("%d", a[i]);
		if (i < n - 1)
		{
			printf(", ");
		}
		i++;
	}
	printf("\n");
}
