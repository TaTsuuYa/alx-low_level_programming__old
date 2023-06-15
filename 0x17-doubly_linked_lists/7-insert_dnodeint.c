#include "lists.h"

/**
 * insert_dnodeint_at_index - insert node at @idx
 * @h: head
 * @idx: index
 * @n: data
 *
 * Return: new node
 */

dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *current, *prev, *new;
	unsigned int i;

	if (*h == NULL || idx == 0)
		return(add_dnodeint(h, n));

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;

	current = *h;
	for (i = 0; current != NULL; i++)
	{
		if (i == idx)
		{
			prev = current->prev;
			current->prev = new;
			new->next = current;

			new->prev = prev;
			prev->next = new;

			return (new);
		}
		current = current->next;
	}
	free(new);
	return (add_dnodeint_end(h, n));
}
