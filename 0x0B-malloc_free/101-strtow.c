#include <stdlib.h>
#include <string.h>

	/**
	* strtow - splits a string into two
	* @str: the string
	* return: return null if str is null
	*/char **strtow(char *str)
{
	int i;
	int j;
	int k;
	int word_count;
	int word_length;
	char **words;

	word_count = 0;
	word_length = 0;

	if (str == NULL || *str == '\0')
	{
		return (NULL);
	}

	for (i = 0; str[i] != '\0'; i++)
	{
		for (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			word_count++;
		}
	}

	if (word_count == 0)
	{
		return (NULL);
	}

	words = malloc((word_count + 1) * sizeof(char *));
	if (word == NULL)
	{
		return (NULL);
	}

	j = 0;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] != ' ' && (i == 0 || str[i - 1] == ' '))
		{
			word_length = 0;
			while (str[i + word_length] != '\0' && str[i + word_length] != ' ')
			{
				word_length++;
			}
			words[j] = malloc((word_length + 1) * sizeof(char));
			if (words[j] == NULL)
			{
				for (k = 0; k < j; k++)
				{
					free(words[k]);
				}
				free(words);
				return (NULL);
			}
			strncpy(words[j], &str[i], word_length);
			 words[j][word_length] = '\0';
			 i += word_length - 1;
		}

	}
	words[j] = NULL;
	return (NULL);
}
