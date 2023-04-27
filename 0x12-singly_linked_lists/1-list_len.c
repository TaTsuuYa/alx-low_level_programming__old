#include "lists.h"

/**
 * list_len - counts number of elements in a list_t
 * @h: pointer to list_t
 *
 * Return: number of elements
 */

size_t list_len(const list_t *h)
{
	size_t elements = 0;

	if (h == NULL)
		return (0);

	while (1)
	{
		elements++;

		if (h->next == NULL)
			break;

		h = h->next;
	}

	return (elements);
}

