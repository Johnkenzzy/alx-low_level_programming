/* A function that changes all lowercase letters of a string to uppercase */
#include <ctype.h>

	/**
	* *string - converts lower to uppercase letters
	* @char *: take a pointer to a character as parameter
	* return: uppercase string characters
	*/char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr != '\0')
	{
		*ptr = toupper((unsigned char) *ptr);
		ptr++;
	}
	return (str);
}
