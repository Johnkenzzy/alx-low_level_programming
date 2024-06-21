#include <stdio.h>

/*A program that prints the size of various types on the computer*/

/*
 * main function - the entry point starts and ends the program*/int main(void)
{
	/*prints the various sizes of the types in bytes*/
	printf("Size of a char: %zu byte(s)\n", sizeof(char));
	printf("Size of an int: %zu byte(s)\n", sizeof(int));
	printf("Size of a long int: %zu byte(s)\n", sizeof(long int));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(long long int));
	printf("Size of a float: %zu byte(s)\n", sizeof(float));
	/*returns zero when successful*/
	return (0);
}
