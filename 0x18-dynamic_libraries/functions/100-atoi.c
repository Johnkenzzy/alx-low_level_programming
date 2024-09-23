/* A function that convert a string to an integer */
#include <stdio.h>
#include <limits.h>	/* for INT_MAX and INT_MIN */

	/**
	* _atoi - converts a string to an integer
	* @arg *s - string pointer
	* return: integer if string contains number or 0 if not
	*/int _atoi(char *s)
{
	int result = 0;
	int sign = 1;
	int digit_found = 0;

	while (*s)
	{
		if (*s == '-')
		{
			sign *= -1;
		}
		else if (*s == '+')
		{
			continue;
		}
		else if (*s >= '0' && *s <= '9')
		{
			digit_found = 1;
			if (result > (INT_MAX - (*s - '0')) / 10)
			{
				return ((sign == 1) ? INT_MAX : INT_MIN);
			}
			result = result * 10 + (*s - '0');
		}
		else if	(digit_found)
		{
			break;
		}
		s++;
	}
	return (result * sign);
}
