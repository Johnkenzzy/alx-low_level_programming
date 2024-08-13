	/**
	* _islower - check lowercase characters
	* checks whether c argument is lowercase
	*
	* returns 1 if lowercase
	* else returns 0
	*/int _islower(int c)
{
	char a = 'a';
	char z = 'z';

	if (c >= a && c <= z)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
