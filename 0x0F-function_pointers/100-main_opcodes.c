#include <stdio.h>
#include <stdlib.h>

	/**
	* print_opcodes - prints opcodes
	*
	*/void print_opcodes(void *func, int num_bytes)
{
	unsigned char *ptr = (unsigned char *)func;
	int i;

	for (i = 0; i < num_bytes; i++)
	{
		printf("%02x", ptr[i]);
		if (i != num_bytes - 1)
		{
			printf(" ");
		}
	}
}

	/**
	* main - Prints the opcodes of its own main function.
	* @argc: Number of arguments passed to the program.
	* @argv: Array of arguments passed to the program.
	*
	* Return: 0 on success, 1 if the number of arguments is incorrect,
	* 2 if the number of bytes is negative.
	*/int main(int argc, char *argv[])
{
	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}

	int num_bytes = atoi(argv[1]);

	if (num_bytes < 0)
	{
		printf("Error\n");
		return (2);
	}

	print_opcodes((void *)main, num_bytes);
	return (0);
}
