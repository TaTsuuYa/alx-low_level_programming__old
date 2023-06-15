#include "lists.h"

/**
 * add_dnodeint - add node at beginning
 * @head: head
 * @n: data
 *
 * Return: new node
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = (*head);

	*head = new;

	return (new);
}
