/* A Write a function that checks for a digit (0 through 9). */

	/**
	* _isdigit - checks through digits
	* takes an integer as parameter
	*
	* returns 1 if it's a digit
	* else returns 0
	*/int _isdigit(int c)
{
	if (c >= 0 && c < 10)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
