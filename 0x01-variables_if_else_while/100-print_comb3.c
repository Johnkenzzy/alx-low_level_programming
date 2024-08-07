#include <stdio.h>
/* Prints all possible different combinations of two digits */

/*
 * prints possible unique combinations
 * starts from zero */int main(void)
{
	int a = 0;
	int b = 1;

	while (a < 9)
	{
		while (b < 10)
		{
			putchar(a + '0');
			putchar(b + '0');

			if (a != 8 && b < 10)
			{
				putchar(',');
				putchar(' ');
			}

			b++;
		}
		a++;
		b = a + 1;
	}
	putchar('\n');

	return (0);
}
