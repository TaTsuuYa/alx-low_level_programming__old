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

/**
 * init_dog - initialize a struct dog
 * @d: pointer to struct dog
 * @name: pointer to string name of dog
 * @age: age of dog
 * @owner: pointer to string name of owner
 */
void init_dog(struct dog *d, char *name, float age, char *owner);

void print_dog(struct dog *d);

/**
 * dog_t - type of struct dog
 */
typedef struct dog dog_t;

dog_t *new_dog(char *name, float age, char *owner);

#endif

