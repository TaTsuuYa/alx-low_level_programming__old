#include "lists.h"

/**
 * add_dnodeint_end - adds a node to the end
 * @head: head
 * @n: data
 *
 * Return: new node
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *current, *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
		return (new);

	current = *head;
	while (current->next)
		current = current->next;

	new->prev = current;

	return (new);
}
