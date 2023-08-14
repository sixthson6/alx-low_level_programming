#include "dog.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_dog - print struct dog
 * @d: struct
 */

void print_dog(struct dog *d)
{
	void *res;

	res = malloc(sizeof(struct dog));

	if (d == NULL)
		return;

	if (res == NULL)
		return;

	printf("Name: %s\n", (d->name != NULL) ? d->name : "(nill)");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", (d->owner != NULL) ? d->owner : "(nill)");
}
