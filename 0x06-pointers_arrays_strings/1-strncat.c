/* A function that concatenates two strings */
#include "main.h"

	/**
	* *_strncat - concats to strings
	* @dest: destination
	* @src: source of string
	* @n: integer variable
	* Return: a pointer to string
	*/char *_strncat(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}
	while (n-- > 0 && *src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';

	return (dest);
}


