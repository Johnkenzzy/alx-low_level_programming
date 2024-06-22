#include <stdio.h>
/* This program prints the alphabet in lowercase, then uppercase */

/*
 * prints the lowercase, then uppercase alphabet
 * uses putchar function
 * and adds a new line */int main(void)
{
	char alph = 'a';
	/* loops lowercase english alphabet */
	while (alph <= 'z')
	{
		putchar(alph);
		alph++;
	}
	/* loops uppercase english alphabet */
	alph = 'A';
	while (alph <= 'Z')
	{
		putchar(alph);
		alph++;
	}
	putchar('\n');
	return (0);
}
