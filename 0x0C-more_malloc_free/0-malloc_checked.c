#include "main.h"
#include <stdlib.h>

/**
 * malloc_checked - use malloc
 * @b: size
 * Return: pointer
 */

void *malloc_checked(unsigned int b)
{
	void *res;

	res = malloc(b);

	if (res == NULL)
		exit(98);

	return (res);
}
