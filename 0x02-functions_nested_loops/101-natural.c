#include <stdio.h>

	/**
	* main - sums up the number below 1024, multiple of 3 or 5
	* return: 0 Always successful
	*/int main(void)
{
	int i;
	int mul = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			mul = mul + i;
		}
	}
	printf("%d\n", mul);
	return (0);
}
