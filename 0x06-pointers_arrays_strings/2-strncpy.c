/* A function that copies a string */
#include "main.h"

	/**
	* *_strncpy - copies a string
	* @dest: destination
	* @src: source of string
	* @n: integer variable
	* Return: a pointer to string
	*/char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (n-- > 0 && (*dest++ = *src++))
	{
	
	}
	while (n-- > 0)
	{
		*dest++ = '\0';
	}

	return (temp);
}


