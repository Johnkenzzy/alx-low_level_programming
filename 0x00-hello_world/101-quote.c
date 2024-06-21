#include <unistd.h>

/*A program that prints text without printf or puts, but write function*/

/**
 * main - function is the enpoint
 * set to print text with write()*/int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(2, message, 59);
	/*return: value is set to one (error)*/
	return (1);
}
