#include <stdio.h>

	/**
	* main - prints the number of arguments passed
	* @count: argument count
	* @str_arr: argument string array
	* return: alway 0
	*/int main(int count, char *str_arr[])
{
	if (count == 1)
	{
		printf("0\n");
	}
	else
		printf("%d\n", count - 1);
	*str_arr = str_arr[count - 1];

	return (0);
}
