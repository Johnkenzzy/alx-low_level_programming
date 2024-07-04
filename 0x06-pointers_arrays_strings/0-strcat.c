/* A function that concatenates two strings */
#include "main.h"

	/**
	* *_strcat - concats to strings
	* @dest: destination
	* @src - source of string
	* Return: a pointer to string
	*/char *_strcat(char *dest, char *src)
{
	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (dest);
}


