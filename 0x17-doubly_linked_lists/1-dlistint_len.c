#include "lists.h"

/**
 * dlistint_len - number of elements
 * @h: header
 *
 * Return: number of elements
 */

size_t dlistint_len(const dlistint_t *h)
{
	size_t size = 0;
	const dlistint_t *current;

	if (h == NULL)
		return (0);

	current = h;
	while (current)
	{
		current = current->next;
		size++;
	}

	return (size);
}
