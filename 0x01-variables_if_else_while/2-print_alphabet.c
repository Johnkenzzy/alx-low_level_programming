#include <stdio.h>
/* This program prints the alphabet in lowercase */

/*
 * prints the lower case alphabet
 * uses putchar function
 * and adds a new line */int main(void)
{
	char alph = 'a';
	/* loops the english alphabet */
	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
