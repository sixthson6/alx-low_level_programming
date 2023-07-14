#include "main.h"
#include <stdlib.h>
/**
 * _realloc - custom realloc
 * @ptr: address of pointer
 * @new_size: new size
 * @old_size: old size
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *result;

	if (new_size == old_size)
	{
		return (ptr);
	}
	if (ptr == NULL)
	{
		result = malloc(new_size);
	}
	if (new_size == 0 && ptr == NULL)
	{
		free(result);
	}
	result = realloc(ptr, new_size);
	if (result == NULL)
	{
		return (NULL);
	}
	return (result);
}
	
