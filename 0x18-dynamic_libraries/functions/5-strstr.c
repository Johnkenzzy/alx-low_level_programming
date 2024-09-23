#include <stddef.h>

	/**
	* _strstr - locates a sustring
	* @haystack: main string
	* @needle: substring
	* return: a pointer to the begining of the located substring,
	* or NULL if no such byte is found
	*/char *_strstr(char *haystack, char *needle)
{
	if (*needle == '\0')
	{
		return (haystack);
	}

	while (*haystack)
	{
		char *h = haystack;
		char *n = needle;

		for (; *h && *n && (*h == *n);)
		{
			h++;
			n++;
		}
		if (*n == '\0')
		{
			return (haystack);
		}
		haystack++;
	}
	return (NULL);
}
