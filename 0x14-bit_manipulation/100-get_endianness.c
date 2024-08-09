
	/**
	* get_endianness - determines the endianness of a system
	* return: nothing
	*/int get_endianness(void)
{
	/**
	* union of test
	* @i: member
	* @c: member
	*/union
	{
		unsigned int i;
		unsigned char c;
	} test;

	test.i = 1;

	return (test.c);
}

