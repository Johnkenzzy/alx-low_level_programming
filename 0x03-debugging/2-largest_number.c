#include "main.h"

	/**
	* largest_number - returns the largest of 3 numbers
	* @a: first integer
	* @b: second integer
	* @c: third integer
	* Return: largest number
	*/int largest_number(int a, int b, int c)
{
	int largest;

	largest = a;
	if (b > largest)
	{
		largest = b;
	}
	else if (c > largest)
	{
		largest = c;
	}
	else
	{
		largest = a;
	}
	return (largest);
}
