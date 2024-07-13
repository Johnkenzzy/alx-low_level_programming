/* A function that concatenates two strings */
#include "main.h"

	/**
	* *_strcat - concats to strings
	* @dest: destination
	* @src - source of string
	* Return: a pointer to string
	*/char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp != '\0')
	{
		temp++;
	}
	while (*src != '\0')
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';

	return (dest);
}


