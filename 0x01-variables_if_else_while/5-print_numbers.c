#include <stdio.h>
/* A program that prints all single digit numbers of base 10 */

/*
 * prints all single digit numbers of base ten
 * starts from zero */int main(void)
{
	int number;

	/* loop through number 1 to 10 */
	for (number = 0; number < 10; number++)
	{
		/* change integer to corresponding character */
		putchar(number + '0');
	}
	putchar('\n');
	return (0);
}
