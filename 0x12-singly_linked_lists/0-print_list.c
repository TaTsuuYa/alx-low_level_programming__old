#include "lists.h"

/**
 * print_list - prints elements of list_t
 * @h: pointer to first list_t element
 *
 * Return: number of elements
 */

size_t print_list(const list_t *h)
{
	size_t elements = 0;

	if (h == NULL)
		return (0);

	while (1)
	{
		if (h->str == NULL)
			printf("[0] (nil)\n");
		else
			printf("[%d] %s\n", h->len, h->str);

		elements++;

		if (h->next == NULL)
			break;

		h = h->next;
	}

	return (elements);
}

