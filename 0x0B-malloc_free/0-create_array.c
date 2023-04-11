#include <stdlib.h>
#include "main.h"

/**
 * create_array - acreate an array of chars
 * @size: size of the array
 * @c: initialization character
 *
 * Return: pointer to the array
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *arr = malloc(sizeof(char) * size);

	if (arr == NULL || size == 0)
		return (NULL);

	for (i = 0;i < size; i++)
		arr[i] = c;

	return (arr);
}

