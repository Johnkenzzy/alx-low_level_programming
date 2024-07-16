#include <stdlib.h>

	/**
	* str_concat - concatenates two strings
	* @s1: first string
	* @s2: second string
	* return: pointer to the newly allocated string
	*/char *str_concat(char *s1, char *s2)
{
	char *new_str;
	unsigned int i;
	unsigned int s1_len;
	unsigned int len;
	unsigned int j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = 0;
	while (s1[i] != '\0')
	{
		i++;
	}

	s1_len = i;
	i = 0;
	while (s2[i] != '\0')
	{
		i++;
	}

	len = s1_len + i;
	new_str = malloc(sizeof(char) * (len + 1));
	if (new_str == NULL)
	{
		return (NULL);
	}

	j = 0;
	for (i = 0; i < s1_len; i++)
	{
		new_str[i] = s1[i];
	}
	for (i = s1_len; i < len; i++)
	{
		new_str[i] = s2[j];
		j++;
	}

	return (new_str);
}
