#ifndef DOG_H
#define DOG_H

/**
 * struct dog - doge
 * @name: name of the dog
 * @age: age of the dog
 * @owner: owner of the dog
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

/* 1. A dog is the only thing on earth
 * that loves you more than you love yourself
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

