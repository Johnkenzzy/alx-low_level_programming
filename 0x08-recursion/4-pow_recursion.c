	/**
	* _pow_recursion - calculates x to the power of y
	* @x: the base integer
	* @y: exponent of x
	* return: the value x^y
	*/int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	if (y == 0)
	{
		return (1);
	}
	return (x * _pow_recursion(x, y - 1));
}
