#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialize struct
 * @d: struct
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	void *res;

	res = malloc(sizeof(struct dog));

	if (res == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}
