#include <stdlib.h>
#include "dog.h"

/**
 * free_dog - use free
 * @d: struct
 * Return: void
 */

void free_dog(dog_t *d)
{
	if (d == NULL)
		return;

	free(d->name);
	free(d->owner);
	free(d);
}
