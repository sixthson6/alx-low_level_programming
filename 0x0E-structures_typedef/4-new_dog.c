#include "dog.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * new_dog - new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 * Return: struct dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *Newdog;

	if (name == NULL || owner == NULL)
		return NULL;

	Newdog = malloc(sizeof(dog_t));

	if (Newdog == NULL)
		return NULL;

	Newdog->name = malloc(strlen(name) + 1);
	if (Newdog->name == NULL)
	{
		free(Newdog);
		return (NULL);
	}

	Newdog->owner = malloc(strlen(owner) + 1);
	if (Newdog->owner == NULL)
	{
		free(Newdog->name);
		free(Newdog);
		return (NULL);
	}

	strcpy(Newdog->name, name);
	strcpy(Newdog->owner, owner);
	Newdog->age = age;

	return (Newdog);
}
