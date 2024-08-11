#include <stdio.h>

/* Prints all possible different combinations of two two-digit numbers*/

/*
 * prints possible unique combinations
 * starts from zero */int main(void)
{
	int n1;
	int n2;
	int n3;
	int n4;

	for (n1 = 0; n1 < 10; n1++)
	{
		for (n2 = 0; n2 < 10; n2++)
		{
			for (n3 = n1; n3 < 10; n3++)
			{
				if (n1 == n3)
					n4 = n2 + 1;
				else
					n4 = 0;

				for (; n4 < 10; n4++)
				{
					putchar(n1 + '0');
					putchar(n2 + '0');
					putchar(' ');
					putchar(n3 + '0');
					putchar(n4 + '0');

					if (n1 != 9 || n2 != 8 || n3 != 9 || n4 != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');

	return (0);
}
