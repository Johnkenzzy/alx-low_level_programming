#include <stdlib.h>

	/**
	* free_grid - dealoocates memory,
	* that was initially allocated to a 2-D array
	* @grid: 2-D array
	* @height: height of array
	* return: nothing
	*/void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
	{
		free(grid[i]);
	}
	free(grid);
}
