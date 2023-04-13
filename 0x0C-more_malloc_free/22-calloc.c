#include <stdlib.h>
#include "main.h"

/**
 * _calloc - allocates memory for @nmemb elemnts
 * of size @size each
 * @nmemb: number of elemnts
 * @size: size of each elemnt
 *
 * Return: pointer to allocated memoty
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i, j;
	int *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(sizeof(nmemb));
	if (arr == NULL)
		return (NULL);

	for (i = 0; i < nmemb; i++)
	{
		arr[i] = malloc(size);
		if (arr[i] = NULL)
		{
			for (i = 0; i < j; i++)
				free(arr[i]);
			free(arr);

			return (NULL);
		}
	}

	return (NULL);
}

