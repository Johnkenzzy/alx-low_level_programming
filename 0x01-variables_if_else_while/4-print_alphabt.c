#include <stdio.h>
/* This program prints the alphabet in lowercase without q and e */

/*
 * prints the lower case alphabet
 * uses putchar function
 * do not print q and e
 * and adds a new line */int main(void)
{
	char alph = 'a';
	/* loops the english alphabet */
	while (alph <= 'z')
	{
		/* do not print q and e */
		if (alph != 'q' && alph != 'e')
		{
			putchar(alph);
		}
		alph++;
	}
	putchar('\n');
	return (0);
}
