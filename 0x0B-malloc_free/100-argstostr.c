#include <stdlib.h>

	/**
	* argstostr - concatenates all the arguments of the program
	* @ac: argument counter
	* @av: array of arguments
	* return: pointer to a new string,
	* NULL if it fails
	*/char *argstostr(int ac, char **av)
{
	int i;
	int j;
	int len = 0;
	int k = 0;
	char *str;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			len++;
		}
		len++;
	}

	str = malloc(sizeof(char) * len);
	if (str == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
		{
			str[k++] = av[i][j];
		}
		str[k++] = '\n';
	}
	str[k] = '\0';

	return (str);
}
