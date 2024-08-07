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
		if (num != 9)
		{
			putchar(num + '0');
			putchar(',');
		}
		else
			putchar(num + '0');

		putchar(' ');
	}

	return (0);
}
