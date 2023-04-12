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

	arr = malloc(sizeof(int) * height);

	for (i = 0; i < height; i++)
	{
		arr[i] = malloc(sizeof(int) * width);
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}

	return (arr);
}

