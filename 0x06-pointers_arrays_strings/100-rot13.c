/* A function that encodes using rot13 */

	/**
	* rot13 - encodes a string
	* @str: the string
	* return: the encoded string
	*/char *rot13(char *str)
{
	char *ptr =  str;
	char rot13_map[256] = {0};
	char c;

	for (c = 'A'; c <= 'Z'; c++)
	{
		rot13_map[(unsigned char)c] = (c - 'A' + 13) % 26 + 'A';
	}
	for (c = 'a'; c <= 'z'; c++)
	{
		rot13_map[(unsigned char)c] = (c - 'a' + 13) % 26 + 'a';
	}
	while (*ptr != '\0')
	{
		if (rot13_map[(unsigned char)*ptr])
		{
			*ptr = rot13_map[(unsigned char)*ptr];
		}
		ptr++;
	}
	return (str);
}
