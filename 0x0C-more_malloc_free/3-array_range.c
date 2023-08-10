#include "main.h"
#include <stdlib.h>

/**
 * array_range - gen random nums
 * @min: min
 * @max: max
 * Return: nums
 */

int *array_range(int min, int max)
{
	int *res;
	int i, size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	res = malloc(size * sizeof(int));

	if (res == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		res[i] = min + i;

	return (res);
}
