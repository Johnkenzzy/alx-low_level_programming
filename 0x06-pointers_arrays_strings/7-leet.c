/* A function that encodes a string into 1337 */

	/**
	* leet - encode sa string
	* @str: a string
	* return: string characters
	*/char *leet(char *str)
{
	char *ptr = str;
	char leet_map[256] = {0};

	leet_map['a'] = leet_map['A'] = '4';
	leet_map['e'] = leet_map['E'] = '3';
	leet_map['o'] = leet_map['O'] = '0';
	leet_map['t'] = leet_map['T'] = '7';
	leet_map['l'] = leet_map['L'] = '1';

	while (*ptr != '\0')
	{
		if (leet_map[(unsigned char)*ptr])
		{
			*ptr = leet_map[(unsigned char)*ptr];
		}
		ptr++;
	}

	return (str);
}
