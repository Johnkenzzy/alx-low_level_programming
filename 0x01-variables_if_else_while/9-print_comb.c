/* A program that prints all possible combinations of a single-digit numbers */

#include <stdio.h>

/*
 * prints all single digit numbers
 * starts from zero
 * return: 0 */int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		putchar(num + '0');
		if (num != 9)
		{
			putchar(',');
			putchar(' ');
		}

	}
	putchar('\n');

	return (0);
}
