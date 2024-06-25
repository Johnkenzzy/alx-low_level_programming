#include <stdio.h>
#include "main.h"

int main(void);
int _putchar(char c);
/**
 * main function - starting point
 *
 * prints _putchar when called
 * uses a user defined headerfile
 * with the predefined function _putchar()
 *
 * returns 0: Always successful
 */int main(void)
{
	char ch[] = "_putchar";
	int i = 0;

	while (ch[i] != '\0')
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');
	return (0);
}
