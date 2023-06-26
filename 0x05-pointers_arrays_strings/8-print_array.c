#include <stdio.h>
#include "main.h"
/**
 * print_array - print array
 * @a: array elements
 * @n: number of array elements
 * Return: void
 */
void print_array(int *a, int n)
{
	int i;
	
	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != (n - 1))
		{
			printf(", ");
		}
	}
	printf("\n");
}
