/* Prints all possible different combinations of three digits */
#include <stdio.h>

void print_integer(int n);

/*
 * main - prints possible unique combination pairs
 * starts from zero
 * return: 0 Always successful */int main(void)
{
	int number1;
	int number2;

	/* loop through numbers */
	for (number1 = 0; number1 < 100; number1++)
	{
		for (number2 = number1 + 1; number2 < 100; number2++)
		{
			if (number1 < 10)
				putchar(0 + '0');

			print_integer(number1);
			putchar(' ');

			if (number2 < 10)
				putchar(0 + '0');

			print_integer(number2);

			if (number1 != 98 && number2 < 100)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}

	/**
	* print_int - prints an integer
	* @n: integer argument
	* return: nothing
	*/void print_integer(int n)
{

	if (n == 0)
	{
		putchar('0');
		return;
	}

	if (n < 0)
	{
		putchar('-');
		n = -n;
	}

	if (n / 10 != 0)
		print_integer(n / 10);

	putchar((n % 10) + '0');
}

