#include "dog.h"
#include <string.h>
#include <stdlib.h>

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: pointer to dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (name != NULL && owner != NULL)
	{
		d = malloc(sizeof(dog_t));
		if (d == NULL)
			return (NULL);

		d->name = malloc(strlen(name) + 1);
		if (d->name == NULL)
		{
			free(d);
			return (NULL);
		}

		d->owner = malloc(strlen(owner) + 1);
		if (d->owner == NULL)
		{
			free(d->name);
			free(d);
			return (NULL);
		}

		d->name = strcpy(d->name, name);
		d->owner = strcpy(d->owner, owner);

		d->age = age;

		return (d);
	}

	return (NULL);
}

