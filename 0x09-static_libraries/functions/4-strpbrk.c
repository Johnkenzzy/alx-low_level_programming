#include <stddef.h>

	/**
	* _strpbrk - searches a string for any set of bytes
	* @s: string array
	* @accept: substring
	* return: a pointer to bytes in @c
	* or NULL if no such byte is found
	*/char *_strpbrk(char *s, char *accept)
{
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				return (s);
			}
			a++;
		}
		s++;
	}
	return (NULL);
}
