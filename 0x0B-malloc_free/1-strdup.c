#include <stdlib.h>

	/**
	* strdup - creates a copy of a string
	* @str: string given as parameter
	* return: a pointer to the duplicate string
	* return: NULL if str is NULL
	*/char *_strdup(char *str)
{
	char *dupstr;
	unsigned int len;
	unsigned int i;

	if (str == NULL)
	{
		return (NULL);
	}

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}

	dupstr = malloc(sizeof(char) * (len + 1));

	if (dupstr == NULL)
	{
		return (NULL);
	}

	i = 0;
	while (i < (len + 1))
	{
		dupstr[i] = str[i];
		i++;
	}

	return (dupstr);
}
