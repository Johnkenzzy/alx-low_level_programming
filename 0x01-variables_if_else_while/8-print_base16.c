#include <stdio.h>
/* A program that prints all numbers of base 16 */

/*
 * prints all single digit numbers of base sixteen
 * starts from zero */int main(void)
{
	int number;

	/* loop through number 1 to 16 */
	for (number = 0; number < 16; number++)
	{
		if (number < 10)
		{
			/* change integer to corresponding character */
			putchar(number + '0');
		}
		else
			/* change 1-15 to a-f */
			putchar(number - 10 + 'a');
	}
	putchar('\n');
	return (0);
}
