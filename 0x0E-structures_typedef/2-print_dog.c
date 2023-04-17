#include "dog.h"
#include <stdio.h>
#include <stddef.h>

/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name)
			printf("Name: %s\n", d->name);
		else
			printf("Name: (nil)\n");

		if (d->age)
			printf("Age: %.6f\n", d->age);
		else
			printf("Age: 0\n");

		if (d->owner)
			printf("Owner: %s\n", d->owner);
		else
			printf("Owner: (nil)\n");
	}
}

