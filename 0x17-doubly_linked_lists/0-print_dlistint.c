#include "lists.h"
#include <stdio.h>

/**
 * print_dlistint - prints elements of list
 * @h: heater of the list
 * 
 * Return: number of elements
 */

size_t print_dlistint(const dlistint_t *h)
{
    size_t size = 0;
    dlistint_t *current;

    if (h == NULL)
        return (0);

    current = h;
    while (current)
    {
        printf("%d", current->n);
        current = current->next;
        size++;
    }

    return (size);
}
