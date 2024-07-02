/* A function that returns the length of a string */
#include "main.h"

	/**
	* _strlen - checks the length of a string
	* @arg *s - the string array
	* return - string length
	*/int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}
