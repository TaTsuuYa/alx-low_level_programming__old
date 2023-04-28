#include "lists.h"

/**
 * free_listint - frees a listint_t
 * @head: pointer to first element
 *
 * Return: void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (head == NULL)
		return;

	while (head->next != NULL)
	{
		temp = head;
		free(head);
		head = temp->next;
	}
	free(head);
}

