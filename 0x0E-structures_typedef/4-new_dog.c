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
	dog_t *d = malloc(sizeof(dog_t));

	if (name != NULL && owner != NULL)
	{
		if (d == NULL)
			return (NULL);

		d->name = malloc(sizeof(strlen(name)) + 1);
		d->owner = malloc(sizeof(strlen(owner)) + 1);
		if (d->name == NULL || d->owner == NULL)
		{
			free(d);
			return (NULL);
		}

		strcpy(d->name, name);
		strcpy(d->owner, owner);

		d->age = age;
	}

	return (d);
}

