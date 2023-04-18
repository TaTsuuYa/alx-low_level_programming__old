#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: name of owner
 *
 * Return: pointer to dog
 */

dog_t d;

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog = &d;

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}

