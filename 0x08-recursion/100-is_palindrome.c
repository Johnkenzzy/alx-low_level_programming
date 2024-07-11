int _is_palindrome_helper(char *s, int start, int end);

	/**
	* is_palindrome - check if string is palindrome
	* @s: string
	* return: 1 if it is palindrome, 0 if not
	*/int is_palindrome(char *s)
{
	int len = strlen(s);
	
	if (len == 0)
	{
		return (1);
	}
	return (_is_palindrome_helper(s, 0, len - 1));
}

int _is_palindrome_helper(char *s, int start, int end)
{
	if (start >= end)
	{
		return (1);
	}
	if (s[start] != s[end])
	{
		return (0);
	}
}
