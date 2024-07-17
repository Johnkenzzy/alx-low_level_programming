#include <stdlib.h>
#include <ctype.h>

	/**
	* alloc_grid - creates a 2 dimentional array
	* @width: width of array
	* @height: height of array
	* return: pointer to s 2-dimentional array,
	* or NULL on failure
	*/int **alloc_grid(int width, int height)
{
	int **two_dim_arr;
	int i;
	int j;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}

	two_dim_arr = malloc(sizeof(int *) * height);

	if (two_dim_arr == NULL)
	{
		return (NULL);
	}

	for (i = 0; i < height; i++)
	{
		two_dim_arr[i] = malloc(sizeof(int) * width);

		if (two_dim_arr[i] == NULL)
		{
			free(two_dim_arr);
			return (NULL);
		}

		for (j = 0; j < width; j++)
		{
			two_dim_arr[i][j] = 0;
		}
	}

	return (two_dim_arr);
}
