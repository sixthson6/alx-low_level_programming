#include <stdlib.h>

/**
 * create_array - create array
 * @size: size of memory
 * @c: initialization
 * Return: pointer to allocated memory
 */

char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *array;

	if (size == 0)
		return (NULL);

	array = (malloc(size * sizeof(char)));

	if (array == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		array[i] = c;

	return (array);
}
