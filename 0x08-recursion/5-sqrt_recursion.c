int _sqrt_helper(int n, int p);

	/**
	* _sqrt_recursion - calculates the square root of an integer
	* @n: the integer
	* return: the value of the integer square root
	*/int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	return (_sqrt_helper(n, 0));
}


	/**
	* _sqrt_helper - handle recursive logic
	* @n: integer
	* @p: predict quare root
	* return: increment p, and try again
	*/int _sqrt_helper(int n, int p)
{
	if (p * p > n)
	{
		return (-1);
	}
	if (p * p == n)
	{
		return (p);
	}
	return (_sqrt_helper(n, p + 1));
}
