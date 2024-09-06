#include <stdio.h>



/**
 * main - Gets the first 50 fibonacci numbers. Start from 1 and 2
 *
 * Return: 0 Always successful
 */
int main(void)
{
	int i = 0;
	long n1 = 1, n2 = 1, next;

	while (i < 50)
	{
		if (i == 0)
			printf("%ld", n1);
		else
			printf("%ld", n2);

		next = n1 + n2;
		n1 = n2;
		n2 = next;

		if (i < 49)
			printf(", ");

		i++;
	}
	putchar('\n');
	return (0);
}
