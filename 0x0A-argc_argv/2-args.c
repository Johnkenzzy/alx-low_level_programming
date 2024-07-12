#include <stdio.h>

	/**
	* main - prints all arguments
	* @count - argument count
	* @arg_arr - array of arguments
	* return: always 0
	*/int main(int count, char *arg_arr[])
{
	int i;

	for (i = 0; i < count; i++)
	{
		printf("%s\n", arg_arr[i]);
	}

	return (0);
}
