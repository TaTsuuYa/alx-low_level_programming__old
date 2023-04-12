#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees a 2d arr
 * @grid: pointer to 2d arr
 * @height: number of rows
 *
 * Return: void
 */

void free_grid(int **grid, int height)
{
	int i;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

