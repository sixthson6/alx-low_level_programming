#include <unistd.h>
#include "main.h"

/**
 * print_square - printing squares
 * @size: size of square
 * Return: (void)
 */
void print_square(int size)
{
	int row, col;

	for (row = 0; row <= size; row++)
	{
		for (col = 0; col <= size; col++)
		{
			_putchar('#');
		}
		_putchar('\n');
	}
}
