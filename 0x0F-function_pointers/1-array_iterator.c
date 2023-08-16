#include "function_pointers.h"
#include <stddef.h>

/**
 * array_iterator - array iterator
 * @array: array
 * @size: size of array
 * @action: funtion pointer
 * Return: nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
