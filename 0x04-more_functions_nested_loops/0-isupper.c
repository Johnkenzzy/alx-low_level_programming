/* A function that checks for uppercase character */
#include "main.h"

	/**
	* _isupper - to check uppercase character
	* take the character as an agument
	*
	* returns 1 if uppercase
	* else returns 0
	*/int _isupper(int c)
{
	char A = 'A';
	char Z = 'Z';

	for (; A <= Z; A++)
	{
		if (c == A)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
	return (0);
}
