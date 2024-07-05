/* A function that capitalizes each word */
#include <ctype.h>
#include <stdbool.h>
#include <stddef.h>
#include <string.h>

	/**
	* cap_string - capitalizes each word
	* @*s: string pointer
	* returns: capitalised string characters
	*/char *cap_string(char *str)
{
	char *ptr = str;
	bool new_wd = true;
	const char separators[] = " \t\n,;.!?\"(){}";

	while (*ptr != '\0')
	{
		if (new_wd && isalpha((unsigned char)*ptr))
		{
			*ptr = toupper((unsigned char)*ptr);
			new_wd = false;
		}
		else if (strchr(separators, *ptr) != NULL)
		{
			new_wd = true;
		}
		ptr++;
	}
	return (str);
}
