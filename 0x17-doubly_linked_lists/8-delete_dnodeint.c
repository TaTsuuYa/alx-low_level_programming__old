#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes a node at @index
 * 
 * @head: head
 * @index: index
 * Return: 1 if success, -1 otherwise
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *current, *prev;
	unsigned int i;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free((*head)->prev);
		(*head)->prev = NULL;
		return (1);
	}

	current = *head;
	for (i = 0; current != NULL; i++)
	{
		if (i == index)
		{
			prev = current->prev;
			prev->next = current->next;
			(current->next)->prev = prev;
			free(current);
			return (1);
		}
		current = current->next;
	}

	prev = current->prev;
	prev->next = NULL;
	free(current);
	return (1);
}