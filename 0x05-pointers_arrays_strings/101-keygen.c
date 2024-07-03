/* A program that generates random valid passwords */
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

	/**
	* generate_password - generates password
	* @arg *password - password pointer
	* @arg length - length of password
	* return: nothing
	*/void generate_password(char *password, int length)
{
	const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
	int charset_size = sizeof(charset) - 1;

	for (int i = 0; i < length; i++)
	{
		int key = rand() % charset_size;

		password[i] = charset[key];
	}
	password[length] = '\0';
}

	/**
	* main - prints the random generated password
	* takes no parameter
	* returns: Always success 0
	*/int main(void)
{
	int password_length = 10;
	char password[password_length + 1];

	srand(time(NULL));
	generate_password(password, password_length);
	printf("Generate Password: %s\n", password);

	return (0);
}
