#include <stdio.h>
/* Prints all possible different combinations of two digits */

/*
 * prints possible unique combinations
 * starts from zero */int main(void)
{
	int number1;
	int number2;

	/* loop through numbers */
	for (number1 = 0; number1 < 9; number1++)
	{
		for (number2 = number1 + 1; number2 <= 9; number2++)
		{
			/* change integer to corresponding character */
			putchar(number1 + '0');
			putchar(number2 + '0');
			if (number1 != 8 || number2 != 9)
			{
				putchar(', ');
			}
		}
	}
	putchar('\n');
	return (0);
}