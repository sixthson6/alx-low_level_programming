#include "main.h"
#include <stdlib.h>

/**
 * _calloc - calloc
 * @nmemb: blocks
 * @size: size of blocks
 * Return: pointer
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *res;

	if (nmemb == 0)
		return (NULL);
	if (size == 0)
		return (NULL);

	res = calloc(nmemb, size);

	if (res == NULL)
		return (NULL);
	return (res);
}
