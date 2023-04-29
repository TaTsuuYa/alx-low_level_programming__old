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

	temp = *head;
	while (temp != NULL)
	{
		free(temp);
		temp = temp->next;
	}
}

