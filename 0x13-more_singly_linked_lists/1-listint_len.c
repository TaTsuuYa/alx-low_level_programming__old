#include "lists.h"

/**
 * listint_len - calculates the len of a list
 * @h: pointer to header address
 *
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (1)
	{
		count++;
		if (h->next == NULL)
			break;

		h = h->next;
	}

	return (count);
}

