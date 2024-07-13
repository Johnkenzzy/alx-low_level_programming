#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

	/**
	* main - adds positive numbers
	* @count: argument count
	* @arg_arr: array of arguments
	* return: 0 if successful, else 1
	*/int main(int count, char *arg_arr[])
{
	int i;
	int result;

	result = 0;
	if (count < 2)
	{
		printf("0\n");
		return (0);
	}
	for (i = 1; i < count; i++)
	{
		if (isdigit(*arg_arr[i]))
		{
			result += atoi(arg_arr[i]);
		}
		else
		{
			printf("Error\n");
			return (1);
		}
	}
	printf("%d\n", result);

	return (0);
}


