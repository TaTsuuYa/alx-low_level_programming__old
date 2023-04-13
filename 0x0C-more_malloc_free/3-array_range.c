#include <stdlib.h>
#include "main.h"

/**
 * array_range - creates an array of ints
 * @min: min value
 * @max: max value
 *
 * Return: pointer to the array
 */

int *array_range(int min, int max)
{
	int i, *arr;

	if (min > max)
		return (NULL);

	arr = malloc(sizeof(int) * ((max - min) + 1));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i <= max - min; i++)
		arr[i] = i + min;

	return (arr);
}

