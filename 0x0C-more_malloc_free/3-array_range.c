#include <stdlib.h>
/**
 * array_range - arrange integer array
 * @min: min
 * @max: max
 * Return: sorted list
 */
int *array_range(int min, int max)
{
	int *result;

	int i, size;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min + 1) * sizeof(int);
	result = malloc(size);

	if (result == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < (max - min + 1); i++)
	{
		result[i] = min + i;
	}
	return (result);
}
