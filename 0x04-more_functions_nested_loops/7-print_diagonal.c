#include <unistd.h>
#include "main.h"

/**
 * print_diagonal - print backslash diagonally
 * @n: no of times
 * Return: void
 */
void print_diagonal(int n)
{
	int row, col;

	for (row = 0; row <= n; row++)
	{
		for (col = 0; col <= n; col++)
		{
			if (col == row)
			{
				_putchar('\\');
				_putchar(' ');
			}
				else
				{
					_putchar(' ');
				}
		}
		_putchar('\n');
}
