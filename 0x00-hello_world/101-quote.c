#include <unistd.h>

/**
*
* main - function is the enpoint
*
* write -  function prints the character string on the screen
*
* return: value is set at zero (success)
*/

int main(void)
{
	const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	write(2, message, 59);
	return (1);
}
