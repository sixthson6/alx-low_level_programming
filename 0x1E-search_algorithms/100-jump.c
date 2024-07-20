#include <stdio.h>
#include <math.h>

/**
 * min - fin min
 * @a: 1st val
 * @b: 2nd val
 *
 * Return: smaller val
 */

size_t min(int a, int b)
{
	if (b > a)
		return (a);
	else
		return (b);
}

/**
 * jump_search - perform jump search
 * @array: array to search
 * @size: size of array
 * @value: value to be found
 *
 * Return: index of value
 */

int jump_search(int *array, size_t size, int value)
{
	size_t step;
	size_t prev = 0;

	step = sqrt(size);

	while (array[min(step, size) - 1] < value)
	{
		printf("Value checked array[%ld] = [%ld]\n", prev, prev);
		prev = step;
		step += sqrt(size);
		/*printf("Value found between indexes [%ld] and [%ld]\n", prev, step);*/

		if (prev >= size)
			return (-1);
	}
	printf("Value found between indexes [%ld] and [%ld]\n", prev, step);

	while (array[prev] < value)
	{
		/* printf("Value found between indexes [%ld] and [%ld]\n", prev, step); */
		printf("Value checked array[%ld] = [%d]\n", prev, array[prev]);
		prev++;
		printf("Value checked arrray[%ld] = [%d]\n", prev, array[prev]);

		if (prev == min(step, size))
			return (-1);
	}

	if (array[prev] == value)
		return (prev);

	return (-1);
}
