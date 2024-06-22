#include <stdio.h>
/* This program prints in reverse the alphabet in lowercase */

/*
 * prints the lowercase alphabet in reverse
 * uses putchar function
 * and adds a new line */int main(void)
{
	char alph = 'z';
	/* loops the english lowercase alphabet in reverse */
	while (alph >= 'a')
	{
		putchar(alph);
		alph--;
	}
	putchar('\n');
	return (0);
}
