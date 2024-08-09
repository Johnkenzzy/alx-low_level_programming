

	/**
	* set_bit - sets the value of a bit to 1 at a given index
	* @n: integer
	* @index:: the given index
	* return: 1 if success or -1 if error occur
	*/int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
		return (-1);

	*n |= (1UL << index);

	return (1);
}
