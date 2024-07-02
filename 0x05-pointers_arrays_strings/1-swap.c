/* A function that swaps the values of two integers */
#include "main.h"
	/**
	* swap_int - swap integers values
	* @arg *a - the first integer
	* @arg *b - the second integer
	* returns nothing
	*/void swap_int(int *a, int *b)
{
	*a = *b;
	*b = *a;
}
