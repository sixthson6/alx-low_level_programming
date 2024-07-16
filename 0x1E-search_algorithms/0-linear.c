#include <stdio.h>
#include "search_algos.h"

/**
 * linear_search - search algorithm
 * @array: search array
 * @size: size of array
 * @value: wanted value
 *
 * Return: index of wanted value
 */

int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (array == NULL)
		return -1;

	for (i = 0; i < size; i++)
	{
		printf("Value checked array[%ld] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return i;	
		/*else
			return -1;*/
	}

	return -1;
}
