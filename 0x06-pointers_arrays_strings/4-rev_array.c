/* A function that reverses the content of an array of integers */

	/**
	* reverse_array - reverses integer array
	* @a: array itself
	* @n: number of elements in array
	* return: nothing
	*/void reverse_array(int *a, int n)
{
	int temp;
	int i;

	for (i = 0; i < n / 2; i++)
	{
		temp = a[i];
		a[i] = a[n - 1 - i];
		a[n - 1 - i] = temp;
	}
}
