/* A function that copies a pointed string */

	/**
	* *_strcpy - copies pointer string
	* @arg *dest - destination of string
	* @arg *src - source of string
	* return: the pointer to dest
	*/char *_strcpy(char *dest, char *src)
{
	char *start = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return (start);
}
