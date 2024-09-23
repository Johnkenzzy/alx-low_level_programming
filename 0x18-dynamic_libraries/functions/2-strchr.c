#include <stddef.h>

	/**
	* strchr - locates a character in a string
	* @s: string pointer
	* @c: string character to be located
	* return: pointer to the string from first @c occurrence
	* return: null if not found
	*/char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}
	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}
