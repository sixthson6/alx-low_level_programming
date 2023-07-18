#include "dog.h"

/**
 * init_dog - initialize struct
 * @d: pointer
 * @name: name
 * @age: age
 * @owner: owner of dog
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}
