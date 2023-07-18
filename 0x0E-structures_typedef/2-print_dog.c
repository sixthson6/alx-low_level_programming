#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * print_dog - print elements of struct
 * @d: struct
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}

	printf("Name: %s\n", d->name ? d->name : "nil");
	printf("Age: %f\n", d->age);
	printf("Owner: %s\n", d->owner ? d->owner : "nil");
}
