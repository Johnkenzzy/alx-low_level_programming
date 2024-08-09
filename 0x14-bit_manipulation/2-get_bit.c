
	/**
	* get_bit - gets the bit of a given index
	* @n: integer
	* @index: the given index
	* return: index or -1 if an error occur
	*/int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	return ((n >> index) & 1);
}
