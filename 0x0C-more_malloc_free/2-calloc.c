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
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(sizeof(nmemb * size));
	if (arr == NULL)
		return (NULL);

	return (NULL);
}

