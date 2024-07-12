#include <stdio.h>

	/**
	* main - prints the program name
	* @argc: argumemt count
	* @argv: argument vector; array of argument strings
	* return: nothing
	*/int main(int argc, char *argv[])
{
	if (argc == 1)
	{
		printf("%s\n", argv[0]);
	}
	return (0);
}
