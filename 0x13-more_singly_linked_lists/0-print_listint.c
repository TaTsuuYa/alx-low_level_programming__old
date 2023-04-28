#include "lists.h"

/**
 * print_listint - prints all elements
 * @h: pointer to header address
 *
 * Return: number of elements
 */

size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (0);
	while (1)
	{
		printf("%d\n", h->n);
		count++;

		if (h->next == NULL)
			break;

		h = h->next;
	}

	return (count);
}

