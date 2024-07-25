	/**
	* print_name - prints a name
	* @name: pointer to a name
	* @(*f)(char *): a function pointer,
	* takes a character pointer as an argument
	* return: nothing
	*/void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}
	(*f)(name);
}
