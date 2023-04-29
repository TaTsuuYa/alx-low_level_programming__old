#include "lists.h"

/**
 * free_listint2 - frees a listint_t and sets head to NULL
 * @head: pointer to the address of the first element
 *
 * Return: void
 */

void free_listint2(listint_t **head)
{
	listint_t *temp;

	if (*head == NULL)
		return;

	while (*head != NULL)
	{
		temp = *head;
		free(*head);
		*head = temp->next;
	}
	*head = NULL;
}

