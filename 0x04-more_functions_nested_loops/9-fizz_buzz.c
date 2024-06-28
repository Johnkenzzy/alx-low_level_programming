/* A program that prints the numbers from 1 to 100 */
#include <stdio.h>

void fizz_buzz(void);

	/**
	* main - entry point
	* takes no parameter
	*
	* returns (sucess)
	*/int main(void)
{
	fizz_buzz();
	return (0);
}

	/**
	* fizz_buzz - prints number 1 to 100
	* certain number are replaced if a condition is met
	* takes no parameter
	*
	* returns nothing
	*/void fizz_buzz(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{
		if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
		else
		{
			printf("%d", i);
		}

		if (i != 100)
		{
			printf(" ");
		}
	}
	printf("\n");
}

