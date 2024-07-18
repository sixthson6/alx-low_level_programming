#include "search_algos.h"
#include <stdio.h>

/**
 * print_array - print array
 * @array: search arrray
 * @left: left index
 * @right: right index
 *
 * Return: array
 */

void print_array(int *array, size_t left, size_t right)
{
	size_t i;

	printf("Searching in array: ");
	for (i = left; i <= right; i++)
	{
		if (i > left)
			printf(", ");
		printf("%d", array[i]);
	}
	printf("\n");
}

/**
 * binary_search - search algo
 * @array: search array
 * @size: size of array
 * @value: wanted value
 *
 * Return: index of wanted value
 */

int binary_search(int *array, size_t size, int value)
{
	size_t mid, left, right;

	left = 0;
	right = size - 1;
	mid = (left + right) / 2;

	while (left <= right)
	{
	mid = (left + right) / 2;

	print_array(array, left, right);

	if (value == array[mid])
		return (mid);

	else if (value > array[mid])
		left = mid + 1;
	else
		right = mid - 1;
	}
	return (-1);
}
