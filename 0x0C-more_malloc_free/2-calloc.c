#include <stdlib.h>
/**
 * _calloc - rewrite calloc
 * @nmemb: block
 * @size: bytes to allocate
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *a;

	a = 0;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}

	a = malloc(nmemb * size);
	if (a == NULL)
	{
		return (NULL);
	}

	return (a);
}
