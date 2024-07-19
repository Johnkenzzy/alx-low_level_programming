#include <stdlib.h>

	/**
	* string_nconcat - concatenates two strings
	* @s1: first string
	* @s2: second string
	* @n: number of bytes
	* return: new string,
	* null if function fails
	*/char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i;
	unsigned int j;
	unsigned int k;
	unsigned int len;
	char *new_str;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	j = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		j++;
	}
	len = j;
	for (i = 0; s2[i] != s2[n]; i++)
	{
		if (n == i)
		{
			n = i;
		}
		i++;
	}
	len += i;
	len++;

	new_str = malloc(sizeof(*new_str) * len);
	if (new_str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < j; i++)
	{
		new_str[i] = s1[i];
	}
	k = 0;
	for (i = j; i < len; i++)
	{
		new_str[i] = s2[k];
		k++;
	}
	new_str[i] = '\0';

	return (new_str);
}
