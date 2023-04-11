#include <stdlib.h>
#include "main.h"

/**
 * alloc_grid - pointer to an array of  @width by @height
 * @width: size of array
 * @height: size of contained arrays
 * Return: pointer to a 2d array
 */

int **alloc_grid(int width, int height)
{
	int i, j, **arr;

	if (width <= 0 || height <= 0)
		return (NULL);

	arr = malloc(sizeof(int) * width * height);

	for (i = 0; i < width; i++)
		for (j = 0; j < height; j++)
			arr[i][j] = 0;

	return (arr);
}

