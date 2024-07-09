#include <stdio.h>

	/**
	* print_diagsums - prints the sum of two diagonals
	* @*a: array pointer
	* @size: dimention of array
	* return: nothing
	*/void print_diagsums(int *a, int size)
{
	int i;
	int diagsum1 = 0;
	int diagsum2 = 0;

	for (i = 0; i < size; i++)
	{
		diagsum1 += a[i * size + i];
		diagsum2 += a[i * size + (size - 1 - i)];
	}
	printf("%d, %d\n", diagsum1, diagsum2);
}
