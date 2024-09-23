	/**
	* _memcpy - copies memory area,
	* from one area/pointer to another
	* @dest: destinantion array
	* @src: source array to be copied into the dest
	* @n: the length of memory bytes from src to be copied
	* return: a pointer to dest
	*/char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
