int is_prime_helper(int n, int d);

	/**
	* is_prime_number - checks for prime numbers
	* @n: the integer
	* return: 1 if an integer is a prime number, else 0
	*/int is_prime_number(int n)
{
	if (n <= 1)
	{
		return (0);
	}
	return (is_prime_helper(n, 2));
}


	/**
	* is_prime_helper - handle recursive logic
	* @n: integer
	* @d: divisor
	* return: check the potential divisor
	*/int is_prime_helper(int n, int d)
{
	if (d * d > n)
	{
		return (1);
	}
	if (n % d == 0)
	{
		return (0);
	}
	return (is_prime_helper(n, d + 1));
}
