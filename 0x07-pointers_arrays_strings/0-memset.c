	/**
	* _memset - copies bytes constant int a memory,
	* a temporary storage area in memory (a buffer)
	*
	* @*s: the array/pointer of concern
	* @b: the byte constant to be copied
	* @n: the number of bytes to be filled
	* return: a pointer to memory area, s
	*/char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
