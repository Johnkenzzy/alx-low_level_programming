#include <stdio.h>
/* A function that prints all natural numbers from n to 98 */

	/**
	* print_to_98 - prints numbers to 98
	* uses the integer give as argument to start number printing
	*
	* returns nothing.
	*/void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);
		if (n < 98)
		{
			n++;
		}
		else
		{
			n--;
		}
	}
	printf("98\n");
}
