/* A program that prints the name of the file it was compiled from */
#include <stdio.h>

	/**
	* print_file_name - prints the file name
	* @: takes no argument
	* return: nothing
	*/void print_file_name(void)
{
	printf("%s\n", __FILE__);
}

	/**
	* main - entry point
	* @: takes no argument
	* return: 0 - Always successful
	*/int main(void)
{
	print_file_name();
	return (0);
}
