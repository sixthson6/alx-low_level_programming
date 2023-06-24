#include <unistd.h>
#include "main.h"

/**
 * print_line - print straight line using _
 * @n: length of line
 * Return: (void)
 */
void print_line(int n)
{
	while (n-- > 0)
	{
		_putchar('_');
	}
	_putchar('\n');
}
