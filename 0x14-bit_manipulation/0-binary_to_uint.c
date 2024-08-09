#include <stdlib.h>
#include "main.h"

	/**
	* binary_to_uint - converts a binary to an unsigned int
	* @b: pointer the binary (a string of 1 and 0 chars)
	* return: the converted number or 0
	*/unsigned int binary_to_uint(const char *b)
{
	unsigned int uint = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b != '0' && *b != '1')
			return (0);

		uint = uint << 1;

		if (*b == '1')
			uint++;

		b++;
	}
	return (uint);
}
