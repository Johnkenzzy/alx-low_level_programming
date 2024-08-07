#include <stdio.h>
/* Prints all possible different combinations of three digits */

/*
 * prints possible unique combinations
 * starts from zero */int main(void)
{
	int number1;
	int number2;
	int number3;

	/* loop through numbers */
	for (number1 = 0; number1 < 9; number1++)
	{
		for (number2 = number1 + 1; number2 <= 9; number2++)
		{
			for (number3 = number2 + 1; number3 <= 9; number3++)
			{
				/* change integer to corresponding character */
				putchar(number1 + '0');
				putchar(number1 + '0');
				putchar(' ');
				putchar(number2 + '0');
				putchar(number3 + '0');
				if (number1 != 7 || number2 != 8 || number3 != 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
