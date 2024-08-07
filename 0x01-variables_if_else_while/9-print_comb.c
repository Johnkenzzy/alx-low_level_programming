#include <stdio.h>
/* A program that prints all numbers of base 16 */

/*
 * prints all single digit numbers of base sixteen
 * starts from zero */int main(void)
{
	int num;

	for (num = 0; num < 10; num++)
	{
		if (num > 9)
			putchar('\n');
		else
		{
			putchar(num + '0');
			putchar(',');
			putchar(' ');

		}
	}

	return (0);
}
