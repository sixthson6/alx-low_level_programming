#include "dog.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * new_dog - new struct
 * @name: name
 * @age: age
 * @owner: owner
 * Return: value
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *new_dog;

	new_dog = malloc(sizeof(dog_t));

	new_dog->name = name;
	new_dog->age = age;
	new_dog->owner = owner;
	return (new_dog);
}
