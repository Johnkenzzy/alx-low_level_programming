	/**
	* count_set_bits - counts the number of bits
	* @n: integer
	* return: the bit count
	*/unsigned int count_set_bits(unsigned long int n)
{
	unsigned int count = 0;

	while (n)
	{
		count += n & 1;
		n >>= 1;
	}

	return (count);
}

	/**
	* flip_bits - checks the number of bits that'll be flipped
	* to convert a number to another
	*
	* @n: a given number one
	* @m: a given number two
	* return: number of bits
	*/unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int differing_bits = n ^ m;

	return (count_set_bits(differing_bits));
}
