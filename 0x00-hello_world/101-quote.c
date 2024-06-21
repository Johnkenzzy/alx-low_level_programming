#include <unistd.h>

/*A program that prints text without printf or puts, but write function*/

/**
 * main - function is the enpoint
 *
 * set to print text with write()*/int main(void)
{
	/*initialized message with the string value*/
	const char message1[] = "and that piece of art is useful\" - Dora Korpar, ";
	const char message2[] = "2015-10-19\n";

	write(2, message1, sizeof(message1) - 1);
	write(2, message2, sizeof(message2) - 1);
	/*return: value is set to one (error)*/
	return (1);
}
