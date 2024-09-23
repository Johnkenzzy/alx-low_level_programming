/* A function that compares two strings */

	/**
	* _strcmp - compares two strings
	* @s1: first string
	* @s2: second string
	* return: the integer difference between both strings
	*/int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}

	return (*(unsigned char *)s1 - *(unsigned char *)s2);
}
