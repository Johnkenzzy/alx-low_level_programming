	/**
	* _strspn - gets the length of a prefix substring
	* @s: string array
	* @accept: substring
	* return: number of bytes for accept from @s segmemt
	*/unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *a;

	while (*s)
	{
		a = accept;
		while (*a)
		{
			if (*s == *a)
			{
				break;
			}
			a++;
		}
		if (*a == '\0')
		{
			break;
		}
		i++;
		s++;
	}
	return (i);
}
