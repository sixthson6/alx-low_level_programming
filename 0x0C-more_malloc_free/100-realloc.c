#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * _realloc - realloc
 * @ptr: pointer to mem block
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;
	size_t copysize;

	if (ptr == NULL)
		return (malloc(new_size));

	if (old_size == new_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	if (new_ptr == NULL)
		return (NULL);

	copysize = (old_size < new_size) ? old_size : new_size;
	memcpy(new_ptr, ptr, copysize);

	return (new_ptr);
}
