#include <stdlib.h>
/**
 * malloc_checked - allocate memory
 * @b: size to be allocated
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);
	if (a == NULL)
	{
		exit(98);
	}
	return (a);
}
