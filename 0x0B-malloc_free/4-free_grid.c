#include "main.h"
#include <stdlib.h>
/**
 * free_grid - frees a 2d integer grid
 * @grid: pointer to array of ints
 * @height: number of rows
 * Return: nothing, free memory
 */
void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);
	free(grid);
}
