#include <stdio.h>
#include <stdlib.h>

	/**
	* main - multiplies two numbers and prints the result
	* @count: argument count
	* @arg_arr: array of arguments
	* return: 0, or 1 if no argument is insufficient
	*/int main(int count, char *arg_arr[])
{
	int result;

	if (count == 3)
	{
		result = atoi(arg_arr[1]) * atoi(arg_arr[2]);
		printf("%d\n", result);
	}
	else
	{
		printf("Error\n");
		return (0);
	}

	return (0);
}
