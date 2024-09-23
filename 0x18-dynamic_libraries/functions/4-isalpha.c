/**
 * _isalpha - checks alphabet characters
 * checks whether c argument is is an alphabetic character
 *
 * returns 1 if alphabet
 * else returns 0
 */int _isalpha(int c)
{
	char a = 'a';
	char z = 'z';
	char A = 'A';
	char Z = 'Z';

	if ((c >= a && c <= z) || (c >= A && c <= Z))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
