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

	if (*head == NULL)
		return (NULL);

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	
	current = *head;
	while (current->next)
		current = current->next;
	
	new->n = n;
	new->prev = current;
	new->next = NULL;

	return (new);
}
