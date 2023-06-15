#include "lists.h"

/**
 * free_dlistint - clears the list
 * @head: head
 */

void free_dlistint(dlistint_t *head)
{
	dlistint_t *current;

	if (head == NULL)
		return;

	current = head;
	while (current)
	{
		head = current->next;
		free(current);
		current = head;
	}
}
