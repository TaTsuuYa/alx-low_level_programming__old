#include "dog.h"
#include <stdlib.h>

/**
 * free_dog - frees dog_t
 * @d: pointer to dog_t variable
 *
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
		if (d->name != NULL)
			free(d->name);

		if (d->owner != NULL)
			free(d->owner);

		free(d);
	}
}

