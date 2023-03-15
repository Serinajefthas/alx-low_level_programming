#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees prev filled pointer 2d array
 * @grid: width grid
 * @height: height grid
 * Return: free grid
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
